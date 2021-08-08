//
// Created by Kylian Lee on 2021/08/08.
//

#include <cstdio>
#include <utility>
#include <vector>

using namespace std;

vector<pair<int, int>>v;
int cnt = 0;

void solution(int n, int src, int by, int dest);

int main(){
  int plates;
  scanf("%d", &plates);
  solution(plates, 1, 2, 3);
  printf("%d\n", cnt);
  for (int i = 0; i < v.size(); ++i) {
    printf("%d %d\n", v[i].first, v[i].second);
  }
  return 0;
}

void solution(int n, int src, int by, int dest){
  cnt++;
  if(n == 1){
    v.emplace_back(src, dest);
    return;
  }
  solution(n - 1, src, dest, by);
  v.emplace_back(src, dest);
  solution(n - 1, by, src, dest);
}