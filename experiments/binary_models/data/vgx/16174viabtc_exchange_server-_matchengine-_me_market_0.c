int FUN1(bool VAR1, VAR2 **VAR3, VAR4 *VAR5, uint32_t VAR6, uint32_t VAR7, VAR8 *VAR9, VAR8 *VAR10, const char *VAR11)
{
if (VAR7 == VAR12) {
VAR8 *VAR13 = FUN2(VAR6, VAR14, VAR5->VAR15);
if (!VAR13 || FUN3(VAR13, VAR9, &VAR16) < 0) {
return -1;
}

VAR17 *VAR18 = FUN4(VAR5->VAR19);
VAR20 *VAR21 = FUN5(VAR18);
if (VAR21 == NULL) {
FUN6(VAR18);
return -3;
}
FUN6(VAR18);

if (FUN3(VAR9, VAR5->VAR22, &VAR16) < 0) {
return -2;
}
} else {
VAR8 *VAR13 = FUN2(VAR6, VAR14, VAR5->VAR23);
if (!VAR13 || FUN3(VAR13, VAR9, &VAR16) < 0) {
return -1;
}

VAR17 *VAR18 = FUN4(VAR5->VAR24);
VAR20 *VAR21 = FUN5(VAR18);
if (VAR21 == NULL) {
FUN6(VAR18);
return -3;
}
FUN6(VAR18);

VAR25 *VAR26 = VAR21->VAR27;
VAR8 *VAR28 = FUN7(&VAR16);
FUN8(VAR28, VAR26->VAR29, VAR5->VAR22, &VAR16);
if (FUN3(VAR9, VAR28, &VAR16) < 0) {
FUN9(VAR28);
return -2;
}
FUN9(VAR28);
}

VAR25 *VAR26 = malloc(sizeof(VAR25));
if (VAR26 == NULL) {
return -VAR30;
}

VAR26->VAR31           = ++VAR32;
VAR26->VAR33         = VAR34;
VAR26->VAR7         = VAR7;
VAR26->VAR35  = FUN10();
VAR26->VAR36  = VAR26->VAR35;
VAR26->VAR37       = strdup(VAR5->VAR38);
VAR26->VAR11       = strdup(VAR11);
VAR26->VAR6      = VAR6;
VAR26->VAR29        = FUN7(&VAR16);
VAR26->VAR9       = FUN7(&VAR16);
VAR26->VAR10    = FUN7(&VAR16);
VAR26->VAR39    = FUN7(&VAR16);
VAR26->VAR40         = FUN7(&VAR16);
VAR26->VAR41       = FUN7(&VAR16);
VAR26->VAR42   = FUN7(&VAR16);
VAR26->VAR43   = FUN7(&VAR16);
VAR26->VAR44     = FUN7(&VAR16);

FUN11(VAR26->VAR29, VAR45, &VAR16);
FUN11(VAR26->VAR9, VAR9, &VAR16);
FUN11(VAR26->VAR10, VAR10, &VAR16);
FUN11(VAR26->VAR39, VAR45, &VAR16);
FUN11(VAR26->VAR40, VAR9, &VAR16);
FUN11(VAR26->VAR41, VAR45, &VAR16);
FUN11(VAR26->VAR42, VAR45, &VAR16);
FUN11(VAR26->VAR43, VAR45, &VAR16);
FUN11(VAR26->VAR44, VAR45, &VAR16);

int VAR46;
if (VAR7 == VAR12) {
VAR46 = FUN12(VAR1, VAR5, VAR26);
} else {
VAR46 = FUN13(VAR1, VAR5, VAR26);
}
if (VAR46 < 0) {
FUN14(""VAR47"", VAR26->VAR31, VAR46);
FUN15(VAR26);
return -VAR30;
}

if (VAR1) {
int VAR46 = FUN16(VAR26);
if (VAR46 < 0) {
FUN17(""VAR47"", VAR46, VAR26->VAR31);
}
FUN18(VAR48, VAR26, VAR5);
*VAR3 = FUN19(VAR26);
}

FUN15(VAR26);
return 0;
}