void *
FUN1()
{
VAR1 *VAR2 = (VAR1 *)calloc(1, sizeof(VAR1));

if (VAR2 == (VAR1 *)NULL) {
VAR3 = VAR4;
return((void *)-1);
}

FUN2(VAR5)
VAR2->VAR6 = false;
VAR2->VAR7 = true;
FUN2(VAR8)
VAR2->VAR6 = true;
VAR2->VAR7 = true;
VAR2->VAR6 = true;

return((void *)VAR2);
}