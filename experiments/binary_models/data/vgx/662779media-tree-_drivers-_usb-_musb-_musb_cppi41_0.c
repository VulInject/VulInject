static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = VAR2->VAR2.VAR3;
struct VAR4 *VAR5 = VAR3->VAR2;
struct VAR6 *VAR7 = VAR5->VAR8->VAR9;
struct VAR10 *VAR11;
int VAR12;
int VAR13;
int VAR14;

VAR12 = FUN2(VAR7, "");
if (VAR12 < 0)
return VAR12;

for (VAR13 = 0; VAR13 < VAR12; VAR13++) {
struct VAR15 *VAR16;
struct VAR17 *VAR18;
const char *VAR19;
unsigned VAR20;
unsigned int VAR21;

VAR14 = FUN3(VAR7, "", VAR13, &VAR19);
if (VAR14)
goto VAR22;
if (FUN4(VAR19, ""))
VAR20 = 1;
else if (FUN4(VAR19, ""))
VAR20 = 0;
else {
FUN5(VAR5, "", VAR19);
goto VAR22;
}
VAR14 = FUN6(VAR19 + 2, 0, &VAR21);
if (VAR14)
goto VAR22;

VAR14 = -VAR23;
if (VAR21 > VAR24 || !VAR21)
goto VAR22;
if (VAR20)
VAR11 = &VAR2->VAR25[VAR21 - 1];
else
VAR11 = &VAR2->VAR26[VAR21 - 1];

VAR11->VAR2 = VAR2;
VAR11->VAR27 = VAR21;
VAR11->VAR20 = VAR20;
FUN7(&VAR11->VAR28);

VAR18 = &VAR11->VAR29;
VAR18->VAR30 = VAR11;
VAR18->VAR31 = VAR32;
VAR18->VAR33 = VAR34;

VAR16 = FUN8(VAR5->VAR8, VAR19);
if (!VAR16) {
FUN5(VAR5, "", VAR19);
VAR14 = -VAR35;
goto VAR22;
}
VAR11->VAR16 = VAR16;
}
return 0;
VAR22:
FUN9(VAR2);
return VAR14;
}