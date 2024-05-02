#include <iostream>
#include <stack>
#include <queue>

#define MAX 1001

using namespace std;

int N, M, V;
int graph[MAX][MAX]; //인접 행렬
bool visit[MAX]; //정점 방문 했는지

queue<int> q; //bfs 큐

void DFS(int i) {

    //시작점
    visit[i] = true;
    //방문한 노드 출력
    cout << i << ' ';

    //현재 정점 연결, 방문되지 않았으면
    for (int h = 1; h <= N; h++) {
        if (graph[i][h] == 1 && visit[h] == 0) { 
            DFS(h); //스택에 넣음
        }
    }
}

void BFS(int j) {

    q.push(j); //시작 노드 큐에 넣음
    visit[j] = true; 
    cout << j << ' '; //방문한 노드 출력

    while (!q.empty()) {
        j = q.front();
        q.pop(); //큐에서 뺌

        //현재 정점 연결, 방문 안 했으면
        for (int w = 1; w <= N; w++) {
            if (graph[j][w] == 1 && visit[w] == 0) { 
                q.push(w); //큐에 넣어줌
                visit[w] = true; //방문한거 기록
                cout << w << " ";
            }
        }
    }
}

void reset() {

    //정점 방문 초기화
    for (int i = 1; i <= N; i++) {
        visit[i] = 0;
    }

}

int main() {

    //정점 개수, 간선 개수, 정점 번호
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    reset();
    DFS(V);

    cout << '\n';

    reset();
    BFS(V);

    return 0;

}
