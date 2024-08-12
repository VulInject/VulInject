static int
FUN1(const VAR1 *VAR2, int VAR3)
{
const char *VAR4 = VAR2->VAR5;
int VAR6 = VAR2->VAR6;
int VAR7;
int VAR8 = VAR6;

if ((VAR3 & VAR9) == 0) {
int VAR10 = (VAR3 & VAR11) &&
!(VAR3 & VAR12);

for (VAR7 = 0; VAR7 < VAR6; VAR7++,VAR4++)
if ((!VAR10 && *VAR4 == VAR13) ||
*VAR4 == VAR14 ||
*VAR4 == '' || *VAR4 == '' || *VAR4 == '' ||
*VAR4 == '' || *VAR4 == '')
VAR8++;
}

return VAR8;
}