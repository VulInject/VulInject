void
FUN1(void *VAR1, VAR2 *VAR3)
{
VAR4 *VAR5 = VAR1;
libxl_shutdown_reason VAR6 = VAR3->VAR7.VAR8.VAR9;
FUN2(VAR10) VAR11 = NULL;
struct VAR12 *VAR13 = NULL;
virThread VAR14;
g_autofree char *VAR15 = NULL;

FUN3("", VAR3->VAR16, VAR3->VAR17);

if (VAR3->VAR16 != VAR18 &&
VAR3->VAR16 != VAR19) {
FUN4("", VAR3->VAR16);
goto VAR20;
}


if (VAR6 == VAR21)
goto VAR20;


if (VAR3->VAR16 == VAR18) {
VAR13 = FUN5(struct VAR12, 1);

VAR13->VAR5 = VAR5;
VAR13->VAR3 = (VAR2 *)VAR3;
VAR15 = FUN6("", VAR3->VAR17);

if (FUN7(&VAR14, false, VAR22,
VAR15, false, VAR13) < 0) {

FUN8(FUN9(""));
goto VAR20;
}

return;
} else if (VAR3->VAR16 == VAR19) {
VAR13 = FUN5(struct VAR12, 1);

VAR13->VAR5 = VAR5;
VAR13->VAR3 = (VAR2 *)VAR3;
VAR15 = FUN6("", VAR3->VAR17);

if (FUN7(&VAR14, false, VAR23,
VAR15, false, VAR13) < 0) {

FUN8(FUN9(""));
goto VAR20;
}

return;
}

VAR20:
FUN10(VAR13);
VAR11 = FUN11(VAR5);

FUN12(VAR11->VAR24, (VAR2 *)VAR3);
}