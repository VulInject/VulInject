static VAR1 FUN1(struct VAR2 *VAR2, const char *VAR3,
size_t VAR4, VAR5 *VAR6)
{
struct VAR7 *VAR8;
int VAR9 = 0;
struct VAR10 *VAR10 = NULL;
char *VAR11 = NULL;
size_t VAR12 = FUN2(VAR13, VAR4, VAR14);

VAR8 = VAR2->VAR15;


if (VAR4 == 0)
goto VAR16;


if (!(VAR2->VAR17 & VAR18)) {
if (FUN3(&VAR8->VAR19)) {
VAR9 = -VAR20;
goto VAR16;
}
} else {
if (FUN4(&VAR8->VAR19)) {
VAR9 = -VAR21;
goto VAR16;
}
}

FUN5(&VAR8->VAR22);
VAR9 = VAR8->VAR23;
if (VAR9 < 0) {

VAR8->VAR23 = 0;

VAR9 = (VAR9 == -VAR24) ? VAR9 : -VAR25;
}
FUN6(&VAR8->VAR22);
if (VAR9 < 0)
goto VAR26;


VAR10 = FUN7(0, VAR27);
if (!VAR10) {
VAR9 = -VAR28;
goto VAR26;
}

VAR11 = FUN8(VAR8->VAR29, VAR12, VAR27,
&VAR10->VAR30);
if (!VAR11) {
VAR9 = -VAR28;
goto VAR26;
}

if (FUN9(VAR11, VAR3, VAR12)) {
VAR9 = -VAR31;
goto VAR26;
}


FUN10(&VAR8->VAR32);
if (VAR8->VAR33) {		
FUN11(&VAR8->VAR32);
VAR9 = -VAR34;
goto VAR26;
}


FUN12(VAR10, VAR8->VAR29,
FUN13(VAR8->VAR29, VAR8->VAR35),
VAR11, VAR12, VAR36, VAR8);
VAR10->VAR37 |= VAR38;
FUN14(VAR10, &VAR8->VAR39);


VAR9 = FUN15(VAR10, VAR27);
FUN11(&VAR8->VAR32);
if (VAR9) {
FUN16(&VAR8->VAR40->VAR8,
"",
VAR41, VAR9);
goto VAR42;
}


FUN17(VAR10);


return VAR12;

VAR42:
FUN18(VAR10);
VAR26:
if (VAR10) {
FUN19(VAR8->VAR29, VAR12, VAR11, VAR10->VAR30);
FUN17(VAR10);
}
FUN20(&VAR8->VAR19);

VAR16:
return VAR9;
}