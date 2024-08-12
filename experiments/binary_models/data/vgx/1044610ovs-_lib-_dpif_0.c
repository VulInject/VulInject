static int
FUN1(const char *VAR1, const char *VAR2, bool VAR3, struct VAR4 **VAR5)
{
struct VAR4 *VAR4 = NULL;
int VAR6;
struct VAR7 *VAR8;

FUN2();

VAR2 = FUN3(VAR2);
VAR8 = FUN4(VAR2);
if (!VAR8) {
FUN5("", VAR1,
VAR2);
VAR6 = VAR9;
goto VAR10;
}

VAR6 = VAR8->VAR11->open(VAR8->VAR11,
VAR1, VAR3, &VAR4);
if (!VAR6) {
const char *VAR12 = FUN3(FUN6(VAR4));
struct dpif_port_dump VAR13;
struct dpif_port VAR14;

FUN7(VAR4->VAR11 == VAR8->VAR11);

FUN8(&VAR14, &VAR13, VAR4) {
struct VAR15 *VAR15;
int VAR16;

if (FUN9(VAR14.VAR2)) {
continue;
}

VAR16 = FUN10(VAR14.VAR1, VAR14.VAR2, &VAR15);

if (!VAR16) {
FUN11(VAR15, VAR12);
FUN12(VAR15, &VAR14);
FUN13(VAR15);
} else {
FUN5("",
VAR14.VAR1, VAR14.VAR2, FUN14(VAR16));
}
}
} else {
FUN15(VAR8);
}

VAR10:
*VAR5 = VAR6 ? NULL : VAR4;
return VAR6;
}