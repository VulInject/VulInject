static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;
int VAR4;
int VAR5;

if (!VAR2)
return -VAR6;

VAR7->VAR8 = VAR2->VAR9;
sprintf(FUN2(VAR2), "",
VAR10);
sprintf(FUN3(VAR2), "", VAR11);
VAR2->VAR12 = VAR7;


FUN4(&VAR7->VAR13);
VAR4 = FUN5(&VAR7->VAR14, VAR15 * sizeof(int),
VAR16);
if (VAR4) {
FUN6("");
goto VAR17;
}

VAR4 = FUN7(VAR2);
if (VAR4)
goto VAR18;

VAR4 = FUN8(VAR7->VAR8, &VAR3);
if (VAR4) {
FUN6("");
goto VAR18;
}

FUN9("",
FUN2(VAR2), FUN10(VAR2),
!VAR2->VAR19.VAR3 ? "" : "");

VAR7->VAR20 = VAR2;

if (FUN11(VAR2->VAR9, VAR21)) {
FUN12(VAR22, "");
if (VAR23
(VAR24
(VAR2->VAR9, VAR21, NULL, NULL)))
FUN6("");
}

VAR5 = 0;
while (FUN13(VAR25, 0x1, 0x0, 0x0) != 0
&& (VAR5++) < VAR26)
; 
FUN12(VAR22, "", VAR5);

VAR7->VAR27 =
FUN13(VAR28, 0x0, 0x0, 0x0);


if (VAR7->VAR27 == VAR29)
VAR7->VAR27 = 0;

if (VAR7->VAR27)
VAR7->VAR30 =
FUN13(VAR28, 0x4, 0x0, 0x0);


FUN9("", FUN13(VAR25, 0x0, 0x0, 0x0));


if (VAR31->VAR32 &&
FUN14() == VAR33) {
if (FUN13(VAR34, 0x2, 0x4, 0x0) == 3)
VAR31->VAR32->VAR35.VAR19 = VAR36;
else
VAR31->VAR32->VAR35.VAR19 = VAR37;
}

VAR4 = FUN15(VAR2);
if (VAR4)
goto VAR18;

VAR4 = FUN16();
if (VAR4)
goto VAR18;

return 0;

VAR18:
FUN17(&VAR7->VAR14);
VAR17:
return VAR4;
}