void FUN1(struct VAR1 *VAR2)
{
for (; VAR2->VAR3; ++VAR2) {
FUN2(*VAR2->VAR3);
*VAR2->VAR3 = NULL;
}
}