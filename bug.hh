function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code will produce a stack overflow error if the argument passed to foo is a large number. This is because the recursive calls to foo will eventually exceed the maximum recursion depth allowed by the Hack runtime.