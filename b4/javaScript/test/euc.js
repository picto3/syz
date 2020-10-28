var a = 1993,
    b = 234,
    q = 0;
    r = 0;

do {
  r = a%b;
  a = b;
  b = r;
} while(r != 0);

console.log(a);
