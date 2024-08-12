static int
FUN1(VAR1 *VAR2, ddi_attach_cmd_t VAR3)
{
char VAR4[32];
int VAR5;
int VAR6;
VAR7 *VAR8 = NULL;

switch (VAR3) {
case VAR9:
break;

case VAR10:
VAR8 = (VAR7 *)FUN2(VAR11,
FUN3(VAR2));

(void) FUN4(VAR8);

return (VAR12);

default:
return (VAR13);
}

VAR5 = FUN3(VAR2);

if (FUN5(VAR11, VAR5) == VAR12) {
VAR8 = FUN2(VAR11, VAR5);
}
if (VAR8 == NULL) {
FUN6(VAR14, "");

return (VAR13);
}

VAR8->VAR15 = VAR2;

VAR8->VAR16 = FUN7(VAR8->VAR15, "",
&VAR17, &VAR18, &VAR19, 0);

if (FUN8(VAR8) != VAR20) {
FUN9(VAR21, VAR8->VAR16,
"");

goto VAR22;
}

if (FUN10(VAR23)) {
if (VAR8->VAR24->FUN11(VAR8) != VAR20) {
FUN9(VAR21, VAR8->VAR16,
"");

goto VAR22;
}
}

if (FUN12(VAR8) != VAR12) {
FUN9(VAR21, VAR8->VAR16,
"");

goto VAR22;
}
VAR8->VAR25 |= VAR26;


(void) snprintf(VAR4, sizeof (VAR4), "", VAR5);
VAR6 = FUN13(VAR2, VAR4, VAR27,
VAR5 + 1, "", 0);
if (VAR6 != VAR12) {
FUN9(VAR21, VAR8->VAR16,
"");

goto VAR22;
}


FUN14(VAR8);

FUN15(VAR2);

FUN16(VAR21, VAR8->VAR16,
"");

return (VAR12);

VAR22:
FUN17(VAR21, VAR8->VAR16,
"");

FUN18(VAR8);
FUN19(VAR2);
FUN20(VAR11, VAR5);

return (VAR13);

}