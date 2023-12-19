#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string p, q;
  getline(cin, p);
  cin >> q;

  auto k = 0;
  for (auto i = 0; i < p.length(); ++i) {
    if (q.length() <= k) {
      k -= q.length();
    }

    if ('a' <= p[i] && p[i] <= 'z') {
      p[i] -= (q[k] - 'a' + 1);
      if (p[i] < 'a') {
        p[i] += 26;
      }
    }

    ++k;
  }

  cout << p;

  return 0;
}