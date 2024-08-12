static int
FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5,
int VAR6, int *VAR7)
{
uint32_t VAR8;

if (FUN2(VAR2, VAR9, &VAR8) == -1)
return (FUN3(VAR2, NULL, NULL, VAR10));

switch (VAR8) {
case 1:
return (FUN4(VAR2, VAR3, VAR4, VAR5, VAR6,
VAR7));

default:
return (FUN5(VAR2, VAR11));
}
}