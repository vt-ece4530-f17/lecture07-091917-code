unsigned long mymul(unsigned a, unsigned b) {
  unsigned long r;
  r = (unsigned long) a * b;
  return r;
}

volatile int arg1 = 5, arg2 = 3;

int main() {
  return mymul(arg1, arg2);
}
