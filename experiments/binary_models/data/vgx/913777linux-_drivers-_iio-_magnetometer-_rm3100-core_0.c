static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR7 = VAR6->VAR7;
unsigned int VAR8;
int VAR9;
int VAR10;

FUN3(&VAR6->VAR11);

VAR9 = FUN4(VAR7, VAR12, &VAR8);
if (VAR9 < 0)
goto VAR13;

for (VAR10 = 0; VAR10 < VAR14; VAR10++) {
if (VAR3 == VAR15[VAR10][0] &&
VAR4 == VAR15[VAR10][1])
break;
}
if (VAR10 == VAR14) {
VAR9 = -VAR16;
goto VAR13;
}

VAR9 = FUN5(VAR7, VAR17, VAR10 + VAR18);
if (VAR9 < 0)
goto VAR13;


if (VAR3 == 600 && VAR8 == 200) {
VAR9 = FUN6(VAR6, 100);
if (VAR9 < 0)
goto VAR13;
} else if (VAR3 != 600 && VAR8 == 100) {
VAR9 = FUN6(VAR6, 200);
if (VAR9 < 0)
goto VAR13;
}

if (FUN7(VAR2)) {

VAR9 = FUN5(VAR7, VAR19, 0);
if (VAR9 < 0)
goto VAR13;
VAR9 = FUN5(VAR6->VAR7, VAR19,
(*VAR2->VAR20 & 0x7) <<
VAR21 | VAR22);
if (VAR9 < 0)
goto VAR13;
}
FUN8(&VAR6->VAR11);

VAR6->VAR23 = VAR15[VAR10][2] * 2;
return 0;

VAR13:
FUN8(&VAR6->VAR11);
return VAR9;
}