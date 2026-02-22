// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

class Solution {
public:
  void rearrangeQueue(queue<int> &q) {
    int sz = q.size();
    queue<int> ql, qr;

    for (int i = 0; i < sz / 2; ++i) {
      ql.push(q.front());
      q.pop();
    }

    while (!q.empty()) {
      qr.push(q.front());
      q.pop();
    }

    while (!ql.empty()) {
      q.push(ql.front());
      ql.pop();
      q.push(qr.front());
      qr.pop();
    }
  }
};
