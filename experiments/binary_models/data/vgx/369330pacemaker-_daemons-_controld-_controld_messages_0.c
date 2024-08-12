void
FUN1(enum crmd_fsa_cause VAR1, enum crmd_fsa_input VAR2,
void *VAR3, uint64_t VAR4,
gboolean VAR5, const char *VAR6)
{
unsigned VAR7 = FUN2(VAR8.VAR9);
VAR10 *VAR11 = NULL;

if (VAR6 == NULL) {
VAR6 = "";
}

if (VAR2 == VAR12 && VAR4 == VAR13  ) {

FUN3("");
return;
}

if (VAR2 == VAR14) {
FUN4(VAR15);
FUN5("",
VAR6, FUN6(VAR1), VAR3, VAR7);

if (VAR7 > 0) {
FUN7(VAR16);
VAR5 = VAR17;
}

if (VAR3 == NULL) {
FUN8(VAR4);
FUN9(VAR4, "");
return;
}


VAR4 |= VAR8.VAR18;
VAR8.VAR18 = VAR13;
}

VAR19++;
FUN10("",
VAR6, (VAR5? "" : ""), VAR19,
FUN11(VAR2), FUN6(VAR1),
(VAR3? "" : ""));

VAR11 = calloc(1, sizeof(VAR10));
VAR11->VAR20 = VAR19;
VAR11->VAR21 = VAR2;
VAR11->VAR22 = VAR1;
VAR11->VAR23 = VAR6;
VAR11->VAR3 = NULL;
VAR11->VAR24 = VAR25;
VAR11->VAR26 = VAR4;

if (VAR4 != VAR13) {
FUN10("",
(unsigned long long) VAR4);
}

if (VAR3 != NULL) {
switch (VAR1) {
case VAR27:
case VAR28:
case VAR29:
case VAR30:
FUN12(((VAR31 *) VAR3)->VAR32 != NULL,
FUN3("", VAR6));
FUN10("",
FUN6(VAR1), VAR6);
VAR11->VAR3 = FUN13(VAR3);
VAR11->VAR24 = VAR33;
break;

case VAR34:
FUN10("",
FUN6(VAR1), VAR6);
VAR11->VAR3 = FUN14((VAR35 *) VAR3);
VAR11->VAR24 = VAR36;
break;

case VAR37:
case VAR38:
case VAR39:
case VAR40:
FUN15("",
FUN6(VAR1), VAR6);
FUN16(VAR41);
break;
}
}


if (VAR5) {
VAR8.VAR9
= FUN17(VAR8.VAR9, VAR11);
} else {
VAR8.VAR9
= FUN18(VAR8.VAR9, VAR11);
}

FUN10("",
FUN2(VAR8.VAR9));



if (VAR7 == FUN2(VAR8.VAR9)) {
FUN3("");
}

if (VAR2 != VAR14) {
FUN19();
}
}