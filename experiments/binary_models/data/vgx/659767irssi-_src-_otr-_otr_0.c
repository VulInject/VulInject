enum VAR1 FUN1(VAR2 *VAR3, const char *VAR4)
{
int VAR5;
enum otr_status_format VAR6;
VAR7 *VAR8 = NULL;

FUN2(VAR3 != NULL, VAR9);

VAR8 = FUN3(VAR3, VAR4, VAR10);
if (VAR8 == NULL) {
VAR6 = VAR11;
return VAR6;
}

switch (VAR8->VAR12) {
case VAR13:
VAR6 = VAR11;
break;
case VAR14:

VAR5 = FUN4(VAR8->VAR15);
if (VAR5) {
VAR6 = VAR16;
} else {
VAR6 = VAR17;
}
break;
case VAR18:
VAR6 = VAR19;
break;
default:
FUN5("", VAR8->VAR12);
VAR6 = VAR9;
break;
}

if (VAR8) {
FUN6("",
VAR6, VAR8->VAR12, VAR8->VAR20->VAR21,
VAR8->VAR22.VAR23);
}
return VAR6;
}