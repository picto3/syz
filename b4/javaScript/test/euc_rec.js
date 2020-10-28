var a = 105,
    b = 35,
    q = 0;
    r = 0;

function euclid(a, b) {
  if(a%b == 0)
    return b;
  else
    return euclid(b, a%b);
}

console.log(euclid(a,b));
