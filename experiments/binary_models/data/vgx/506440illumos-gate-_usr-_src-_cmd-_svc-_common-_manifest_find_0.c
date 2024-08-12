int
FUN1(VAR1 *VAR2, const char *VAR3,
VAR4 ***VAR5, int VAR6)
{
VAR7 *VAR8;
int VAR9 = -1;
int VAR10;

VAR8 = FUN2();
if (VAR8 == NULL)
return (-1);

VAR8->VAR11 = VAR6;

if (VAR8->VAR11 & VAR12) {
VAR8->VAR13 = VAR2;
}

if (FUN3(VAR3, VAR14, VAR15, VAR16) == 0) {
VAR9 = 0;
}

VAR17:
if (VAR9 == 0) {
*VAR5 = VAR8->VAR18;
VAR10 = VAR8->VAR19;
} else {
*VAR5 = NULL;
FUN4(VAR8->VAR18);
VAR10 = -1;
}


(void) memset(VAR8, 0, sizeof (*VAR8));

return (VAR10);
}