VAR1
FUN1(VAR2 *VAR3,
VAR2 **VAR4, CK_KEY_TYPE VAR5)
{

VAR2 *VAR6;
CK_RV VAR7 = VAR8;

VAR6 = calloc(1, sizeof (VAR2));
if (VAR6 == NULL) {
return (VAR9);
}

switch (VAR5) {
case VAR10:
(void) memcpy(FUN2(VAR6),
FUN2(VAR3),
sizeof (VAR11));

VAR7 = FUN3(FUN4(VAR6),
FUN4(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}

VAR7 = FUN3(FUN6(VAR6),
FUN6(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}
break;
case VAR12:
(void) memcpy(FUN7(VAR6),
FUN7(VAR3),
sizeof (VAR13));


VAR7 = FUN3(FUN8(VAR6),
FUN8(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN9(VAR6),
FUN9(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN10(VAR6),
FUN10(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN11(VAR6),
FUN11(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}
break;
case VAR14:
(void) memcpy(FUN12(VAR6),
FUN12(VAR3),
sizeof (VAR15));


VAR7 = FUN3(FUN13(VAR6),
FUN13(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN14(VAR6),
FUN14(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN15(VAR6),
FUN15(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}
break;
case VAR16:
(void) memcpy(FUN16(VAR6),
FUN16(VAR3),
sizeof (VAR17));


VAR7 = FUN3(FUN17(VAR6),
FUN17(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}
break;
case VAR18:
(void) memcpy(FUN18(VAR6),
FUN18(VAR3),
sizeof (VAR19));


VAR7 = FUN3(FUN19(VAR6),
FUN19(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN20(VAR6),
FUN20(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN21(VAR6),
FUN21(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}


VAR7 = FUN3(FUN22(VAR6),
FUN22(VAR3));
if (VAR7 != VAR8) {
FUN5(VAR6, VAR5);
return (VAR7);
}
break;
default:
break;
}
*VAR4 = VAR6;
return (VAR7);
}