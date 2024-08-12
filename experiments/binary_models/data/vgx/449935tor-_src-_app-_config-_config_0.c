static int
FUN1(const char *VAR1, const VAR2 *VAR3)
{
char *VAR4=NULL, *VAR5=NULL, *VAR6=NULL;
int VAR7 = 0, VAR8;

if (!VAR1)
return -1;

switch (FUN2(VAR1)) {

case VAR9:
case VAR10:
VAR4 = FUN3(VAR1, 0, NULL);
if (!VAR4 || FUN4(VAR4, VAR11)) {
VAR7 = 1;
}
FUN5(VAR4);
break;
case VAR12:
break;
case VAR13:
case VAR14:
default:
FUN6(VAR15,
""%VAR16\"", VAR1);
return -1;
}

if (!(VAR6 = FUN7(VAR3, VAR17))) {
FUN6(VAR18, "");
goto VAR19;
}

FUN8(&VAR5, "",
VAR11, VAR20, VAR6);

if (VAR7) {
char *VAR21 = NULL;
FUN8(&VAR21, VAR22, VAR1);
file_status_t VAR23 = FUN2(VAR21);
if (VAR23 == VAR14 || VAR23 == VAR13) {
FUN6(VAR15,
""%VAR16\"", VAR21);
FUN5(VAR21);
goto VAR19;
}

FUN9(VAR15, ""%VAR16\"", VAR21);
if (FUN10(VAR1, VAR21) < 0) {
FUN6(VAR24,
""%VAR16\""%VAR16\"",
VAR1, VAR21, strerror(VAR25));
FUN5(VAR21);
goto VAR19;
}
FUN5(VAR21);
}

if (FUN11(VAR1, VAR5, 0) < 0)
goto VAR19;

VAR8 = 0;
goto VAR26;
VAR19:
VAR8 = -1;
VAR26:
FUN5(VAR5);
FUN5(VAR6);
return VAR8;
}