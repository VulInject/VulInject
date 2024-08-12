static cs_error_t FUN1 (enum sam_cmap_key_t VAR1, const char *VAR2)
{
cs_error_t VAR3;
const char *VAR4;
uint64_t VAR5, VAR6;

const char *VAR7[] = { [VAR8] = "", [VAR9] = "" };
char VAR10[VAR11];

switch (VAR1) {
case VAR12:
VAR4 = VAR7[FUN2 (VAR13.VAR14)];

if (snprintf(VAR10, VAR11, "", VAR13.VAR15,
"") >= VAR11) {

VAR3 = VAR16;
goto VAR17;
}

if ((VAR3 = FUN3(VAR13.VAR18, VAR10, VAR4)) != VAR19) {
goto VAR17;
}
break;
case VAR20:
VAR5 = VAR13.VAR21;

if (snprintf(VAR10, VAR11, "", VAR13.VAR15,
"") >= VAR11) {

VAR3 = VAR16;
goto VAR17;
}

if ((VAR3 = FUN4(VAR13.VAR18, VAR10, VAR5)) != VAR19) {
goto VAR17;
}
break;
case VAR22:
VAR6 = FUN5();

if (snprintf(VAR10, VAR11, "", VAR13.VAR15,
"") >= VAR11) {

VAR3 = VAR16;
goto VAR17;
}
if ((VAR3 = FUN4(VAR13.VAR18, VAR10, VAR6)) != VAR19) {
goto VAR17;
}
break;
case VAR23:
VAR4 = VAR2;
if (snprintf(VAR10, VAR11, "", VAR13.VAR15,
"") >= VAR11) {

VAR3 = VAR16;
goto VAR17;
}

if ((VAR3 = FUN3(VAR13.VAR18, VAR10, VAR4)) != VAR19) {
goto VAR17;
}
break;
}

return (VAR19);

VAR17:
return (VAR3);
}