static int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7,
int VAR8, int VAR9, int VAR10)
{
int VAR11;

if (VAR5 < VAR12 || VAR4[0] != VAR13
|| VAR4[1] != VAR12
|| FUN2(VAR4[2]) != VAR14
|| FUN3(VAR4[2]) != VAR2->VAR15
|| (VAR10 && VAR2->VAR16 == NULL))
return 0;

if (VAR10) {
VAR11 = VAR17+1;
while (VAR11 != 0)
VAR2->VAR16[--VAR11] = 1;
}
VAR11 = VAR2->VAR18;
while (VAR11 != 0) {
VAR2->VAR19[--VAR11].VAR20 = VAR21;
VAR2->VAR19[VAR11].VAR22 = 0;
}

VAR2->VAR6 = VAR6;
VAR2->VAR7 = VAR7;
VAR2->VAR8 = VAR8;
if (VAR9)
VAR2->VAR9 = 1;

FUN4(VAR2);

return 1;
}