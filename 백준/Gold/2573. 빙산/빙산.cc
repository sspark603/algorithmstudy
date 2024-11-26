//
// Created by Sang on 11/26/24.
//
#include <stdio.h>

#define MAX 300  // 배열의 최대 크기를 300으로 정의

int n, m, ice[MAX][MAX], visited[MAX][MAX];  // 전역 변수 선언: 크기, 빙산 높이, 방문 여부
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};  // 상하좌우 이동을 위한 배열

void dfs(int x, int y) {  // 깊이 우선 탐색(DFS) 함수
    visited[x][y] = 1;  // 현재 위치를 방문했다고 표시
    for (int i = 0; i < 4; i++) {  // 상하좌우 네 방향에 대해
        int nx = x + dx[i], ny = y + dy[i];  // 새로운 좌표 계산
        if (nx < 0 || nx >= n || ny < 0 || ny >= m )continue;  // 유효한 좌표이고 방문하지 않았으며 빙산이 있다면
        if(visited[nx][ny] || !ice[nx][ny]) continue;
        dfs(nx, ny);  // 재귀적으로 DFS 호출
    }
}

int count_and_melt() {  // 빙산 개수를 세고 녹이는 함수
    int count = 0, melt[MAX][MAX] = {0};  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {
            if(!ice[i][j])continue;
            if(!visited[i][j]) {  // 빙산이 있고 방문하지 않았다
                dfs(i, j);  // DFS 수행
                count++;  // 빙산 개수 증가
            }
            for (int k = 0; k < 4; k++) {
                // 상하좌우 네 방향에 대해
                int ni = i + dx[k], nj = j + dy[k];  // 새로운 좌표 계산
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && !ice[ni][nj])  // 유효한 좌표이고 바다라면
                    melt[i][j]++;  // 녹는 양 증가
            }
        }
    }
    for (int i = 0; i < n; i++)  
        for (int j = 0; j < m; j++)
            ice[i][j] = ice[i][j] > melt[i][j] ? ice[i][j] - melt[i][j] : 0;  // 빙산 높이 갱신
    return count;  // 빙산 개수 반환
}

int main() {
    scanf("%d %d", &n, &m);  // 격자의 크기 입력
    for (int i = 0; i < n; i++)  // 모든 격자에 대해
        for (int j = 0; j < m; j++)
            scanf("%d", &ice[i][j]);  // 빙산 높이 입력

    int years = 0;  // 경과 년수 초기화
    while (1) {  // 무한 루프
        for (int i = 0; i < n; i++)  // 방문 배열 초기화
            for (int j = 0; j < m; j++)
                visited[i][j] = 0;
        int icebergs = count_and_melt();  // 빙산 개수를 세고 녹이기
        if (icebergs >= 2) return printf("%d\n", years), 0;  // 빙산이 두 개 이상으로 분리되면 년수 출력 후 종료
        if (icebergs == 0) return printf("0\n"), 0;  // 빙산이 모두 녹았다면 0 출력 후 종료
        years++;  // 년수 증가
    }
}