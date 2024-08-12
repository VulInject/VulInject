static struct VAR1 *FUN1(char *VAR2, int *VAR3)
{
struct VAR1 *VAR4;

VAR4 = FUN2(VAR2, "");
if (VAR4) {
*VAR3 = VAR5;
return VAR4;
}

VAR4 = FUN2(VAR2, "");
if (VAR4) {
*VAR3 = VAR6;
return VAR4;
}

VAR4 = FUN3(VAR2);
if (VAR4) {
*VAR3 = VAR7;
return VAR4;
}

return NULL;
}