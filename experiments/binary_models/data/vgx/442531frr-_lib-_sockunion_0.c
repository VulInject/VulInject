int FUN1(const union VAR1 *VAR2)
{
int VAR3;

VAR3 = socket(VAR2->VAR4.VAR5, VAR6, 0);
if (VAR3 < 0) {
char VAR7[VAR8];
FUN2(VAR9, "",
FUN3(VAR2, VAR7, VAR8),
FUN4(VAR10));
return -1;
}

return VAR3;
}