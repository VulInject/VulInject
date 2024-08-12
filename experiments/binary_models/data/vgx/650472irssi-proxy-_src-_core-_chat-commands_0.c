static VAR1 *FUN1(int VAR2,
const char *VAR3, int VAR4)
{
VAR1 *VAR5, *VAR6;
VAR7 *VAR8;
int VAR9;

FUN2(VAR3 != NULL, NULL);


VAR5 = VAR6 = NULL; VAR9 = 0;
for (VAR8 = VAR10; VAR8 != NULL; VAR8 = VAR8->VAR11) {
VAR1 *VAR12 = VAR8->VAR13;

if (VAR12->VAR14->VAR2 == VAR2) {
VAR9++; VAR6 = VAR12;
if (FUN3(VAR12->VAR14->VAR15, VAR3) == 0) {
if (VAR12->VAR14->VAR4 == VAR4)
return VAR12;
VAR5 = VAR12;
}
}
}

if (VAR9 == 1) {

return VAR6;
}

return VAR5;
}