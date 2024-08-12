static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
unsigned long VAR4;
unsigned VAR5, VAR6, VAR7, VAR8;

switch ((unsigned long) VAR3) {
case 1:
FUN2(VAR2, "");
return 0;
case 2:
FUN2(VAR2, "");
return 0;
default:
VAR4 = (unsigned long) VAR3 - 3;
VAR5 = FUN3(&VAR9[VAR4]);
VAR6 = FUN3(&VAR10[VAR4]);
VAR7 = FUN3(&VAR11[VAR4]);
if (VAR5 == 0 && VAR6 == 0 && VAR7 == 0)
return 0;

VAR8 = (VAR4 * 1000) / VAR12;

FUN4(VAR2, "", VAR4, VAR8, VAR5, VAR6, VAR7);
return 0;
}
}