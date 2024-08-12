static void
FUN1(const struct VAR1 *VAR2, u_int32_t VAR3, u_int32_t VAR4, int VAR5)
{
const VAR6 *VAR7;
int VAR8;
int VAR9;

VAR8 = (VAR4 == VAR10);

if (!VAR8 && VAR3 < VAR11)
VAR3 = VAR12[VAR3];

switch (VAR3) {

case VAR13:
FUN2("");
return;

case VAR14:
FUN2("");
return;

case VAR15:
FUN2("");
VAR7 = FUN3(VAR2, VAR5);
if (VAR7 != NULL && FUN4(VAR7, !VAR16, VAR8) != 0)
return;
break;

case VAR17:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
return;
if (VAR8) {
if (FUN5(VAR7, VAR18))
return;
} else {
if (FUN4(VAR7, !VAR16, 0) != 0)
return;
}
break;

case VAR19:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (!(VAR7 = FUN6(VAR7, &VAR9)))
break;
if (VAR9) {
if (VAR18 > 1) {
FUN2("");
VAR7 = FUN7(VAR7, VAR18);
}
} else {
if (!(VAR7 = FUN8(VAR7, VAR8)))
break;
if ((VAR7 = FUN7(VAR7, VAR18)) &&
VAR18 > 1) {
FUN2("");
VAR7 = FUN7(VAR7, VAR18);
}
}
if (VAR7)
return;
} else {
if (FUN9(VAR7) != 0)
return;
}
break;

case VAR20:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (!(VAR7 = FUN6(VAR7, &VAR9)))
break;
if (VAR18)
FUN2("");
if (!(VAR7 = FUN7(VAR7, VAR18)))
break;
if (!VAR9) {
FUN10(VAR7[0]);
FUN2("", (VAR6)FUN11(VAR7[0]));
}
return;

case VAR21:
FUN2("");
VAR7 = FUN3(VAR2, VAR5);
if (VAR7 != NULL && FUN12(VAR7, VAR8) != 0)
return;
break;

case VAR22:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (!(VAR7 = FUN6(VAR7, &VAR9)))
break;
if (!(VAR7 = FUN7(VAR7, VAR18)))
break;
if (VAR9)
return;
if (VAR18) {
FUN10(VAR7[1]);
FUN2("", (VAR6) FUN11(VAR7[0]));
if (FUN11(VAR7[1]))
FUN2("");
}
return;
} else {
if (FUN4(VAR7, VAR18, 0) != 0)
return;
}
break;

case VAR23:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (!(VAR7 = FUN6(VAR7, &VAR9)))
break;
if (!(VAR7 = FUN13(VAR7, VAR18)))
break;
if (VAR9)
return;
if (VAR18) {
FUN10(VAR7[0]);
FUN2("", (VAR6) FUN11(VAR7[0]));
if (VAR18 > 1) {
FUN10(VAR7[1]);
FUN2("",
FUN14(VAR24,
NULL, FUN11(VAR7[1])));
}
return;
}
} else {
if (FUN4(VAR7, VAR18, VAR8) != 0)
return;
}
break;

case VAR25:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (FUN15(VAR7, VAR18) != 0)
return;
} else {
if (FUN9(VAR7) != 0)
return;
}
break;

case VAR26:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (FUN15(VAR7, VAR18) != 0)
return;
} else {
if (FUN9(VAR7) != 0)
return;
}
break;

case VAR27:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (FUN15(VAR7, VAR18) != 0)
return;
} else {
if (FUN6(VAR7, &VAR9) != 0)
return;
}
break;

case VAR28:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (FUN15(VAR7, VAR18) != 0)
return;
break;

case VAR29:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (FUN5(VAR7, VAR18))
return;
} else {
if (FUN6(VAR7, &VAR9) != 0)
return;
}
break;

case VAR30:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (FUN5(VAR7, VAR18))
return;
} else {
if (FUN6(VAR7, &VAR9) != 0)
return;
}
break;

case VAR31:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (!(VAR7 = FUN6(VAR7, &VAR9)))
break;
if (VAR18) {
FUN2("");
if (!(VAR7 = FUN13(VAR7, VAR18)))
break;
FUN2("");
if (!(VAR7 = FUN13(VAR7, VAR18)))
break;
}
return;
} else {
if (FUN6(VAR7, &VAR9) != 0)
return;
}
break;

case VAR32:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (!(VAR7 = FUN6(VAR7, &VAR9)))
break;
if (VAR18) {
FUN2("");
if (!(VAR7 = FUN7(VAR7, VAR18)))
break;
FUN2("");
if (!(VAR7 = FUN13(VAR7, VAR18)))
break;
return;
}
} else {
if (FUN6(VAR7, &VAR9) != 0)
return;
}
break;

case VAR33:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (VAR8) {
if (FUN16(VAR7, VAR18))
return;
} else {
if (FUN17(VAR7) != 0)
return;
}
break;

case VAR34:
FUN2("");
if (!(VAR7 = FUN3(VAR2, VAR5)))
break;
if (FUN16(VAR7, VAR18))
return;
break;

case VAR35:
FUN2("");
VAR7 = FUN3(VAR2, VAR5);
if (VAR7 != NULL && FUN18(VAR7, VAR8) != 0)
return;
break;

case VAR36:
FUN2("");
VAR7 = FUN3(VAR2, VAR5);
if (VAR7 != NULL && FUN19(VAR7) != 0)
return;
break;

case VAR37:
FUN2("");
VAR7 = FUN3(VAR2, VAR5);
if (VAR7 != NULL && FUN20(VAR7) != 0)
return;
break;

case VAR38:
FUN2("");
VAR7 = FUN3(VAR2, VAR5);
if (VAR7 != NULL && FUN5(VAR7, VAR18) != 0)
return;
break;

default:
FUN2("", VAR3);
return;
}
VAR39:
if (!VAR40)
FUN2("");
}