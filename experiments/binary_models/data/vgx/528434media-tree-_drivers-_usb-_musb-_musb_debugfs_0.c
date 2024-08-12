static VAR1 FUN1(struct VAR2 *VAR2,
const char VAR3 *VAR4, size_t VAR5, VAR6 *VAR7)
{
struct VAR8		*VAR9 = VAR2->VAR10;
struct VAR11		*VAR11 = VAR9->private;
u8			VAR12;
char			VAR13[24];

FUN2(VAR11->VAR14);
VAR12 = FUN3(VAR11->VAR15, VAR16);
if (VAR12) {
FUN4(VAR11->VAR14, ""
"");
goto VAR17;
}

memset(VAR13, 0x00, sizeof(VAR13));

if (FUN5(VAR13, VAR4, FUN6(VAR18, sizeof(VAR13) - 1, VAR5)))
return -VAR19;

if (FUN7(VAR13, ""))
VAR12 = VAR20 | VAR21;

else if (FUN7(VAR13, ""))
VAR12 = VAR20 | VAR22;

else if (FUN7(VAR13, ""))
VAR12 = VAR20;

else if (FUN7(VAR13, ""))
VAR12 = VAR23;

else if (FUN7(VAR13, ""))
VAR12 = VAR21;

else if (FUN7(VAR13, ""))
VAR12 = VAR22;

else if (FUN7(VAR13, "")) {
VAR12 = VAR24;
FUN8(VAR11);
}

else if (FUN7(VAR13, ""))
VAR12 = VAR25;

else if (FUN7(VAR13, ""))
VAR12 = VAR26;

else if (FUN7(VAR13, ""))
VAR12 = VAR27;

FUN9(VAR11->VAR15, VAR16, VAR12);

VAR17:
FUN10(VAR11->VAR14);
FUN11(VAR11->VAR14);
return VAR5;
}