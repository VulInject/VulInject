static int FUN1(xpparam_t const *VAR1, const char *VAR2)
{
int VAR3;
for (VAR3 = 0; VAR3 < VAR1->VAR4; VAR3++) {
if (!FUN2(VAR2, VAR1->VAR5[VAR3], strlen(VAR1->VAR5[VAR3])))
return 1;
}
return 0;
}