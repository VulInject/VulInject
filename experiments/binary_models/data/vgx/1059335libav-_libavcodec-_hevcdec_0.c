static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
VAR5 *VAR6 = &VAR2->VAR7;
VAR8 *VAR9    = &VAR6->VAR9;
int VAR10, VAR11;

*VAR9              = VAR4->VAR9;
VAR2->VAR12 = VAR4->VAR13;
VAR2->VAR14   = VAR4->VAR14;

switch (VAR2->VAR12) {
case VAR15:
VAR11 = FUN2(VAR9, VAR2->VAR16, &VAR2->VAR17);
if (VAR11 < 0)
goto VAR18;
break;
case VAR19:
VAR11 = FUN3(VAR9, VAR2->VAR16, &VAR2->VAR17,
VAR2->VAR20);
if (VAR11 < 0)
goto VAR18;
break;
case VAR21:
VAR11 = FUN4(VAR9, VAR2->VAR16, &VAR2->VAR17);
if (VAR11 < 0)
goto VAR18;
break;
case VAR22:
case VAR23:
VAR11 = FUN5(VAR9, VAR2->VAR16, &VAR2->VAR24,
VAR2->VAR12);
if (VAR11 < 0)
goto VAR18;
break;
case VAR25:
case VAR26:
case VAR27:
case VAR28:
case VAR29:
case VAR30:
case VAR31:
case VAR32:
case VAR33:
case VAR34:
case VAR35:
case VAR36:
case VAR37:
case VAR38:
case VAR39:
case VAR40:
VAR11 = FUN6(VAR2);
if (VAR11 < 0)
return VAR11;

if (VAR2->VAR41 == VAR42) {
if (VAR2->VAR12 == VAR36 || FUN7(VAR2)) {
VAR2->VAR41 = VAR2->VAR43;
} else {
if (FUN8(VAR2))
VAR2->VAR41 = VAR44;
}
}

if ((VAR2->VAR12 == VAR40 || VAR2->VAR12 == VAR39) &&
VAR2->VAR43 <= VAR2->VAR41) {
VAR2->VAR45 = 0;
break;
} else {
if (VAR2->VAR12 == VAR40 && VAR2->VAR43 > VAR2->VAR41)
VAR2->VAR41 = VAR44;
}

if (VAR2->VAR46.VAR47) {
VAR11 = FUN9(VAR2);
if (VAR11 < 0)
return VAR11;
} else if (!VAR2->VAR48) {
FUN10(VAR2->VAR16, VAR49, "");
goto VAR18;
}

if (VAR2->VAR12 != VAR2->VAR50) {
FUN10(VAR2->VAR16, VAR49,
"",
VAR2->VAR50, VAR2->VAR12);
return VAR51;
}

if (!VAR2->VAR46.VAR52 &&
VAR2->VAR46.VAR53 != VAR54) {
VAR11 = FUN11(VAR2);
if (VAR11 < 0) {
FUN10(VAR2->VAR16, VAR55,
"");
goto VAR18;
}
}

if (VAR2->VAR46.VAR47 && VAR2->VAR16->VAR56) {
VAR11 = VAR2->VAR16->VAR56->FUN12(VAR2->VAR16, NULL, 0);
if (VAR11 < 0)
goto VAR18;
}

if (VAR2->VAR16->VAR56) {
VAR11 = VAR2->VAR16->VAR56->FUN13(VAR2->VAR16, VAR4->VAR57, VAR4->VAR58);
if (VAR11 < 0)
goto VAR18;
} else {
VAR10 = FUN14(VAR2);
if (VAR10 >= (VAR2->VAR17.VAR59->VAR60 * VAR2->VAR17.VAR59->VAR61)) {
VAR2->VAR45 = 1;
if ((VAR2->VAR17.VAR62->VAR63 ||
(VAR2->VAR17.VAR59->VAR64.VAR65 && VAR2->VAR17.VAR59->VAR66)) &&
VAR2->VAR17.VAR59->VAR67)
FUN15(VAR2);
}

if (VAR10 < 0) {
VAR11 = VAR10;
goto VAR18;
}
}
break;
case VAR68:
case VAR69:
VAR2->VAR70 = (VAR2->VAR70 + 1) & 0xff;
VAR2->VAR41     = VAR42;
break;
case VAR71:
case VAR72:
break;
default:
FUN10(VAR2->VAR16, VAR73,
"", VAR2->VAR12);
}

return 0;
VAR18:
if (VAR2->VAR16->VAR74 & VAR75)
return VAR11;
return 0;
}