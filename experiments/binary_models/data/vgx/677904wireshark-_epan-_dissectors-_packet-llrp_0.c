static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
guint16 VAR7, guint VAR8)
{
gboolean    VAR9;
guint8      VAR10;
guint32     VAR11;
VAR12 *VAR13, *VAR14, *VAR15, *VAR16;
FUN2 (*VAR17)(VAR1 *VAR2,
VAR3 *VAR4, VAR5 *VAR6, guint VAR8) = NULL;

VAR9 = VAR18;
switch (VAR7)
{

case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:
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
case VAR41:
case VAR42:
case VAR43:
case VAR44:
case VAR45:
VAR9 = VAR46;
break;

case VAR47:
case VAR48:
case VAR49:
case VAR50:
case VAR51:
FUN3(VAR6, VAR52, VAR2, VAR8, 4, VAR53);
VAR8 += 4;
break;

case VAR54:
case VAR55:
case VAR56:
FUN3(VAR6, VAR57, VAR2, VAR8, 4, VAR53);
VAR8 += 4;
break;
case VAR58:
FUN3(VAR6, VAR59, VAR2, VAR8, 1, VAR53);
VAR8++;
VAR9 = VAR46;
break;

case VAR60:
VAR14 = FUN3(VAR6, VAR61, VAR2, VAR8, 2, VAR53);
VAR8 += 2;

VAR10 = FUN4(VAR2, VAR8);
VAR13 = FUN3(VAR6, VAR62, VAR2,
VAR8, 1, VAR53);
VAR8++;

VAR15 = FUN3(VAR6, VAR63, VAR2, VAR8, 2, VAR53);
VAR8 += 2;

VAR16 = FUN3(VAR6, VAR64, VAR2, VAR8, 2, VAR53);
VAR8 += 2;

switch (VAR10)
{
case VAR65:
break;
case VAR66:
case VAR67:

FUN5(VAR15, "");
FUN5(VAR16, "");
break;
case VAR68:
case VAR69:
case VAR70:
case VAR71:
case VAR72:
case VAR73:
case VAR74:

FUN5(VAR14, "");

FUN5(VAR15, "");
FUN5(VAR16, "");
break;
case VAR75:

FUN5(VAR14, "");

FUN5(VAR16, "");
break;
case VAR76:

FUN5(VAR14, "");

FUN5(VAR15, "");
break;
default:

FUN5(VAR14, "");

FUN6(VAR4, VAR13, &VAR77,
"",
VAR10);

FUN5(VAR15, "");
FUN5(VAR16, "");
break;
};
VAR9 = VAR46;
break;


case VAR78:
FUN3(VAR6, VAR79, VAR2, VAR8, 1, VAR80);
VAR8++;
VAR9 = VAR46;
break;
case VAR81:
FUN3(VAR6, VAR82, VAR2, VAR8, 1, VAR53);
break;
case VAR83:
FUN3(VAR6, VAR84, VAR2, VAR8, 1, VAR53);
VAR8++;
FUN3(VAR6, VAR85, VAR2, VAR8, 1, VAR53);
VAR8++;
VAR9 = VAR46;
break;
case VAR86:
VAR11 = FUN7(VAR2, VAR8);
FUN3(VAR6, VAR87, VAR2, VAR8, 4, VAR53);
VAR8 += 4;

switch(VAR11) {
case VAR88:
VAR17 = VAR89;
VAR9 = VAR46;
break;
}
if (VAR17)
VAR8 = FUN8(VAR2, VAR4, VAR6, VAR8);
break;

case VAR90:
case VAR91:
case VAR92:
case VAR93:
case VAR94:
break;
default:

FUN9();
};
if(VAR9) {
VAR8 = FUN10(VAR2, VAR4, VAR6, VAR8, FUN11(VAR2), 0);
}
if(FUN12(VAR2, VAR8) != 0) {

FUN6(VAR4, VAR6, &VAR95,
"",
VAR8, FUN11(VAR2));
}
}