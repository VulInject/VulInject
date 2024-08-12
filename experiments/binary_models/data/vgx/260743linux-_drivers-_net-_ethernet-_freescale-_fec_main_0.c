static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = NULL;
char VAR7[VAR8];
char VAR9[VAR8 + 3];
int VAR10;
int VAR11 = VAR4->VAR11;

if (VAR4->VAR12) {
VAR6 = FUN3(VAR2, VAR4->VAR12,
&VAR13, 0,
VAR4->VAR14);
if (!VAR6) {
FUN4(VAR2, "");
return -VAR15;
}
} else {

for (VAR10 = 0; (VAR10 < VAR16); VAR10++) {
if (!FUN5(VAR4->VAR17, VAR10))
continue;
if (VAR11--)
continue;
FUN6(VAR7, VAR4->VAR17->VAR18, VAR8);
break;
}

if (VAR10 >= VAR16) {
FUN7(VAR2, "");
FUN6(VAR7, "", VAR8);
VAR10 = 0;
}

snprintf(VAR9, sizeof(VAR9),
VAR19, VAR7, VAR10);
VAR6 = FUN8(VAR2, VAR9, &VAR13,
VAR4->VAR14);
}

if (FUN9(VAR6)) {
FUN4(VAR2, "");
return FUN10(VAR6);
}


if (VAR4->VAR20 & VAR21) {
FUN11(VAR6, 1000);
FUN12(VAR6,
VAR22);
FUN13(VAR6);
}
else
FUN11(VAR6, 100);

VAR4->VAR23 = 0;
VAR4->VAR24 = 0;

VAR6->VAR25 = true;

FUN14(VAR6);

return 0;
}