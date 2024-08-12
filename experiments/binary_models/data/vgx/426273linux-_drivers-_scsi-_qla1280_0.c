static int
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
int		VAR5;
int		VAR6;
struct VAR7	*VAR8;
struct VAR9 *VAR10;

VAR6 = VAR11;


for (VAR5 = 0; VAR5 < VAR12; VAR5++) {
VAR8 = VAR2->VAR13[VAR5];
if (VAR8) {
VAR10 = VAR8->VAR10;

if (VAR3 >= 0 && FUN2(VAR10) != VAR3)
continue;
if (VAR4 >= 0 && FUN3(VAR10) != VAR4)
continue;

VAR6 = FUN4(VAR2, VAR8);
if (VAR6 == VAR14)
break;
}
}
return VAR6;
}