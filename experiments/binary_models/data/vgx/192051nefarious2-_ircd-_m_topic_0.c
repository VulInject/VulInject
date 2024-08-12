int FUN1(struct VAR1* VAR2, struct VAR1* VAR3, int VAR4, char* VAR5[])
{
struct VAR6 *VAR7;
char *VAR8 = 0, *VAR9, *VAR10 = 0;
const char *VAR11 = 0;
int VAR12 = 0;

if (VAR4 < 2)
return FUN2(VAR3, "");

if (VAR4 > 2) {
VAR8 = VAR5[VAR4 - 1];

VAR12 = FUN3(VAR8);
if (VAR12)
VAR11 = FUN4(VAR8);
}

for (; (VAR9 = FUN5(&VAR10, VAR5[1], "")); VAR5[1] = 0)
{
VAR7 = 0;

if (!FUN6(VAR9) || !(VAR7 = FUN7(VAR9)))
{
FUN8(VAR3,VAR13,VAR9);
continue;
}

if ((VAR8 || FUN9(VAR7)) && !FUN10(VAR3, VAR7))
{
FUN8(VAR3, VAR14, VAR7->VAR15);
continue;
}


if (!VAR8)
{
if (VAR7->VAR8[0] == '')
FUN8(VAR3, VAR16, VAR7->VAR15);
else
{
FUN8(VAR3, VAR17, VAR7->VAR15, VAR7->VAR8);
FUN8(VAR3, VAR18, VAR7->VAR15, VAR7->VAR19,
VAR7->VAR20);
}
continue;
}
else if ((VAR7->VAR21.VAR21 & VAR22) &&
!FUN11(VAR3, VAR7) && !FUN12(VAR3, VAR7))
{
FUN8(VAR3, VAR23, VAR7->VAR15);
continue;
}
else if (!FUN13(VAR3, VAR7, 1))
{
FUN8(VAR3, VAR24, VAR7->VAR15);
continue;
}

if (VAR12 && (VAR7->VAR21.VAR25 & VAR26))
{
FUN8(VAR3, VAR24, VAR7->VAR15);
continue;
}

if (VAR12 && (VAR7->VAR21.VAR25 & VAR27))
{
FUN14(VAR3,VAR2,VAR7,(char*)VAR11,0,NULL);
continue;
}

FUN14(VAR3,VAR2,VAR7,VAR8,0,NULL);
}
return 0;
}