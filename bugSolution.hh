function foo(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}

function main(): void {
  echo foo(5);
}
This iterative version avoids stack overflow by not making recursive function calls.