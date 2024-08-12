static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4 = 0;
int VAR5;
char VAR6[4];
int VAR7;

VAR8 = VAR2->VAR9.VAR10;
if (!VAR8) {
FUN2(&VAR2->VAR9,
"",
VAR11);
return -VAR12;
}

VAR13			= VAR8->VAR14;
VAR15			= VAR8->VAR15;

if ((VAR13->VAR16 & VAR17) && VAR18
&& (VAR18 < VAR13->VAR19))
VAR13->VAR19	= VAR18;

VAR20		= VAR13->VAR19;
VAR21		= VAR20;
VAR22	= VAR13->VAR16 & VAR23;

VAR24 = FUN3(&VAR2->VAR9, VAR20,
sizeof(struct VAR25), VAR26);
if (!VAR24) {
FUN2(&VAR2->VAR9, "", VAR11);
return -VAR27;
}


if (FUN4()) {
VAR28 = FUN5(sizeof(struct VAR29) *
VAR20, VAR26);
if (!VAR28) {
VAR4 = -VAR27;
goto VAR30;
}
}

FUN6(&VAR31);
for (VAR3 = 0; VAR3 < VAR21; VAR3++) {
FUN7(VAR3);
if (FUN4())
FUN8(VAR3);

VAR24[VAR3].VAR32 = -1;
VAR24[VAR3].VAR33 = -1;

if (VAR3 >= 6 && VAR22)
continue;

if (FUN9()) {

sprintf(&VAR6[0], "", VAR3);
VAR5 = FUN10(VAR2, VAR6);

if (VAR5 < 0) {
VAR4 = VAR5;
goto VAR34;
}


if (VAR5 == VAR35)
continue;

VAR4 = FUN11(VAR5,
VAR36, 0, "",
(void *) (VAR3 + 1));
if (VAR4 != 0)
goto VAR34;
}
}

if (VAR13->VAR16 & VAR37)
FUN12(VAR38,
VAR39, 0);

if (FUN4() && !(VAR13->VAR16 & VAR40)) {
strcpy(VAR6, "");
VAR5 = FUN10(VAR2, VAR6);
if (VAR5 < 0) {
FUN2(&VAR2->VAR9, "", VAR5);
VAR4 = VAR5;
goto VAR30;
}
VAR4 = FUN13(VAR5, &VAR41);
if (VAR4) {
FUN2(&VAR2->VAR9, "",
VAR5, VAR4);
goto VAR30;
}
}


if (VAR13->VAR16 & VAR42) {
FUN14("");
VAR24[0].VAR32 = 0;
VAR24[1].VAR32 = 1;
}
VAR8->FUN15();
return 0;

VAR34:
FUN2(&VAR2->VAR9, "",
VAR5, VAR4);
for (VAR7 = 0; VAR7 < VAR3;	VAR7++) {
VAR5 = FUN16(VAR2, VAR7);
FUN17(VAR5, (void *)(VAR7 + 1));
}

VAR30:
return VAR4;
}