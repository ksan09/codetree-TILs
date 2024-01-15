#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int n, m;
int graph[101][101]; // ? - ? 거리
bool visited[101]; // 
int dist[101]; // 시작 - 끝 거리

// ? ~ n 까지의 거리
int main() {
    // 입력 셋팅
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph[x][y] = d;
        graph[y][x] = d;
    }

    // dist 셋팅
    for (int i = 1; i <= n; i++)
        dist[i] = (int)1e6;
    dist[n] = 0;

    for (int i = n; i >= 1; i--) {
        // 아직 방문하지 않은 정점 중 dist값이 가장 작은 정점 찾기
        int min_index = -1;
        for (int j = 1; j <= n; j++) {
            if (visited[j]) continue; // 방문한 정점은 건너뛰기 
            if (min_index == -1 || dist[min_index] > dist[j])
                min_index = j;
        }
        // 최솟값 정점 방문 표시
        visited[min_index] = true;

        // 최소값 정점과 연결된 정점들이 최소값 정점을 거쳐서 시작점으로 가는 거리값 갱신
        for (int j = n; j >= 1; j--) {
            // 간선이 존재하지 않는 경우에는 넘어갑니다.
            if (graph[min_index][j] == 0) continue;
            dist[j] = min(dist[j], dist[min_index] + graph[min_index][j]);
        }
    }

    int maxV = -1;
    // 시작점(1번 정점)으로부터 각 지점까지의 최단거리 값을 출력
    for (int i = 1; i <= n; i++) {
        // 연결되어 있지 않은 정점은 -1 출력
        maxV = max(maxV, dist[i]);
    }

    cout << maxV;
    return 0;
}