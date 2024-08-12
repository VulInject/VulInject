static int FUN1(VAR1 *VAR2) {
assert(VAR2);

if (!VAR2->VAR3)
return 0;

FUN2(VAR2->VAR3);
return 1;
}