void FUN1(struct VAR1 *VAR2)
{
assert(VAR2->VAR3 > 0);
VAR2->VAR3--;
if (VAR2->VAR3 == 0) {

VAR2->VAR4 = NULL;
FUN2(VAR2);
}
}