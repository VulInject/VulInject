static void FUN1(int VAR1, char *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;

VAR4 = FUN2(sizeof(*VAR6));
if (VAR4 == NULL) {
FUN3("");
return;
}



VAR6 = FUN4(VAR4);
*VAR6 = (struct VAR5) {
.VAR4			= VAR4,
.VAR1			= VAR1,
};

FUN5(&VAR6->VAR7);

snprintf(VAR4->VAR8, sizeof(VAR4->VAR8), "", VAR1);



if (!FUN6(VAR6, VAR1, VAR2)) {
FUN3("",
VAR4->VAR8);
goto VAR9;
}

FUN7("", VAR1, VAR4->VAR10);



if (!VAR11) {
if (FUN8(&VAR12))
goto VAR9;
VAR11 = 1;
}

VAR6->VAR13.VAR14 = VAR1;
VAR6->VAR13.VAR8 = VAR15;
VAR6->VAR13.VAR4.VAR16 = VAR17;
if (FUN9(&VAR6->VAR13))
goto VAR9;
FUN10(VAR4, &VAR6->VAR13.VAR4);

VAR4->VAR18 = &VAR19;
VAR4->VAR20 = VAR6->VAR20;
VAR4->VAR21 = (VAR22 >> 1);
VAR4->VAR23 = -1;

FUN11();
if (FUN12(VAR4)) {
FUN13();
FUN3("", VAR4->VAR8);
FUN14(&VAR6->VAR13);
return;
}
FUN13();

FUN15(&VAR6->VAR24, VAR25, 0);

return;

VAR9:
FUN16(VAR4);
}