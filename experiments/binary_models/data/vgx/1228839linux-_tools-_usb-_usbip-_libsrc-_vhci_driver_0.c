static int FUN1(struct VAR1 *VAR2)
{
const char *VAR3;

VAR3 = FUN2(VAR2, "");
if (!VAR3) {
FUN3("");
return -1;
}

return (int)FUN4(VAR3, NULL, 10);
}