{
  for (int c0 = a3; c0 <= min(min(a2 - 1, a1 - 1), b3); c0 += 1)
    s2(c0);
  for (int c0 = a2; c0 <= min(min(a3 - 1, a1 - 1), b2); c0 += 1)
    s1(c0);
  for (int c0 = max(a3, a2); c0 <= min(min(a1 - 1, b2), b3); c0 += 1) {
    s1(c0);
    s2(c0);
  }
  for (int c0 = max(max(b2 + 1, a3), a2); c0 <= min(a1 - 1, b3); c0 += 1)
    s2(c0);
  for (int c0 = a1; c0 <= min(min(a2 - 1, a3 - 1), b1); c0 += 1)
    s0(c0);
  for (int c0 = max(a1, a3); c0 <= min(min(a2 - 1, b3), b1); c0 += 1) {
    s0(c0);
    s2(c0);
  }
  for (int c0 = max(max(b1 + 1, a1), a3); c0 <= min(a2 - 1, b3); c0 += 1)
    s2(c0);
  for (int c0 = max(a1, a2); c0 <= min(min(a3 - 1, b2), b1); c0 += 1) {
    s0(c0);
    s1(c0);
  }
  for (int c0 = max(max(b1 + 1, a1), a2); c0 <= min(a3 - 1, b2); c0 += 1)
    s1(c0);
  for (int c0 = max(max(a1, a3), a2); c0 <= min(min(b2, b3), b1); c0 += 1) {
    s0(c0);
    s1(c0);
    s2(c0);
  }
  for (int c0 = max(max(max(b1 + 1, a1), a3), a2); c0 <= min(b2, b3); c0 += 1) {
    s1(c0);
    s2(c0);
  }
  for (int c0 = max(max(b2 + 1, a1), a2); c0 <= min(a3 - 1, b1); c0 += 1)
    s0(c0);
  for (int c0 = max(max(max(b2 + 1, a1), a3), a2); c0 <= min(b3, b1); c0 += 1) {
    s0(c0);
    s2(c0);
  }
  for (int c0 = max(max(max(max(b1 + 1, b2 + 1), a1), a3), a2); c0 <= b3; c0 += 1)
    s2(c0);
  for (int c0 = max(max(b3 + 1, a3), a2); c0 <= min(a1 - 1, b2); c0 += 1)
    s1(c0);
  for (int c0 = max(max(b3 + 1, a1), a3); c0 <= min(a2 - 1, b1); c0 += 1)
    s0(c0);
  for (int c0 = max(max(max(b3 + 1, a1), a3), a2); c0 <= min(b2, b1); c0 += 1) {
    s0(c0);
    s1(c0);
  }
  for (int c0 = max(max(max(max(b1 + 1, b3 + 1), a1), a3), a2); c0 <= b2; c0 += 1)
    s1(c0);
  for (int c0 = max(max(max(max(b3 + 1, b2 + 1), a1), a3), a2); c0 <= b1; c0 += 1)
    s0(c0);
}
