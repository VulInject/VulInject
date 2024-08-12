static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = VAR2->VAR3;
int VAR4  = VAR2->VAR4;
int VAR5   = VAR2->VAR5;
int VAR6    = VAR2->VAR6;
struct VAR7 *VAR8 = NULL;
int VAR9, VAR10;
struct VAR7 *VAR7;
__u32 VAR11;

if (VAR2->VAR12) {
VAR8 = FUN2(VAR2->VAR12, NULL);
VAR9 = FUN3(VAR8);
if (VAR9) {
FUN4("",
VAR2->VAR12, strerror(-VAR9));
return -1;
}
}

VAR7 = FUN5(VAR2->VAR7 ?: VAR2->VAR13, VAR8);
VAR9 = FUN3(VAR7);
if (VAR9) {
FUN4("",
VAR2->VAR7 ?: VAR2->VAR13, strerror(-VAR9));
goto VAR14;
}

VAR9 = -1;
VAR11 = FUN6(VAR7);


for (VAR10 = 1; VAR10 < VAR11; VAR10++) {
const struct VAR15 *VAR16;
struct VAR17 *VAR18;
struct VAR19 *VAR20;
const char *VAR21;
int *VAR22;

VAR16 = FUN7(VAR7, VAR10);
if (!VAR16) {
FUN4("",
VAR10);
goto VAR14;
}

if (FUN8(VAR16) && VAR6) {
VAR22   = &VAR6;
VAR18 = &VAR2->VAR23;
} else if (FUN9(VAR16) && VAR4) {
VAR22   = &VAR4;
VAR18 = &VAR2->VAR24;
} else if (FUN10(VAR16) && VAR5) {
VAR22   = &VAR5;
VAR18 = &VAR2->VAR25;
} else if (FUN11(VAR16) && VAR3) {
VAR22   = &VAR3;
VAR18 = &VAR2->VAR26;
} else
continue;

VAR21 = FUN12(VAR7, VAR16->VAR27);
if (!VAR21) {
FUN4("",
VAR10);
goto VAR14;
}

VAR20 = FUN13(VAR18, VAR21);
if (VAR20) {
if (VAR20->VAR20) {
FUN14("",
VAR21, VAR20->VAR20, VAR10, VAR20->VAR20);
} else {
VAR20->VAR20 = VAR10;
(*VAR22)--;
}
}
}

VAR9 = 0;
VAR14:
FUN15(VAR8);
FUN15(VAR7);
return VAR9;
}