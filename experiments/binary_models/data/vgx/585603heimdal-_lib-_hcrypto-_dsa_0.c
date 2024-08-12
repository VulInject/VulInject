VAR1 *
FUN1(void)
{
VAR1 *VAR2 = calloc(1, sizeof(*VAR2));
VAR2->VAR3 = FUN2(FUN3());
VAR2->VAR4 = 1;
return VAR2;
}