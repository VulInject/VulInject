int
FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4, VAR5;
const int VAR6 = 1;

VAR4 = socket(VAR2->VAR7, (VAR3 == VAR8 ?
VAR8 | VAR9 : VAR10) | VAR11, 0);
if (VAR4 == -1)
return -1;

if (FUN2(VAR4, VAR12, VAR13, &VAR6,
sizeof(VAR6)) == -1) {
VAR5 = VAR14;
close(VAR4);
VAR14 = VAR5;
return -1;
}
return VAR4;
}