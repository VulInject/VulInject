VAR1 FUN1(VAR2 *VAR3) {
assert(VAR3);
assert(VAR3->VAR4);



if (VAR3->VAR4->VAR5)
return VAR3->VAR4->VAR6;
return FUN2(VAR3);
}