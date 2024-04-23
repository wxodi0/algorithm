#include <iostream>
#include <map>
using namespace std;

map<string, pair<string, string>> m;

//전위
void preorder(string a) {
  if(a == ".") return;

  cout << a;
  preorder(m[a].first);
  preorder(m[a].second);
}

//중위
void inorder(string a) {
  if(a == ".") return;

  inorder(m[a].first);
  cout << a;
  inorder(m[a].second);
}
//후위
void postorder(string a) {
  if(a == ".") return;

  postorder(m[a].first);
  postorder(m[a].second);
  cout << a;
}



int main() {
  int n;

  string a, b, c;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    m[a] = make_pair(b, c);
  }

  preorder("A");
  cout << "\n";
  inorder("A");
  cout << "\n";
  postorder("A");

  return 0;
}