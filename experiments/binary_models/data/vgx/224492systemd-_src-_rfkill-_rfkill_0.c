static int FUN1(int argc, char *argv[]) {
FUN2(VAR1) Context VAR2 = { .VAR3 = -VAR4 };
bool VAR5 = false;
int VAR6, VAR7;

if (argc > 1)
return FUN3(FUN4(VAR8), "");

FUN5();

FUN6(0022);

VAR7 = FUN7(false);
if (VAR7 < 0)
return FUN3(VAR7, "");
if (VAR7 > 1)
return FUN3(FUN4(VAR8), "");

if (VAR7 == 0) {
VAR2.VAR3 = open("", VAR9|VAR10|VAR11|VAR12);
if (VAR2.VAR3 < 0) {
if (VAR13 == VAR14) {
FUN8(VAR13, "");
return 0;
}

return FUN3(VAR13, "");
}
} else {
VAR2.VAR3 = VAR15;

VAR6 = FUN9(VAR2.VAR3, 1);
if (VAR6 < 0)
return FUN3(VAR6, "");
}

for (;;) {
struct rfkill_event VAR16 = {};

ssize_t VAR17 = read(VAR2.VAR3, &VAR16, sizeof VAR16);
if (VAR17 < 0) {
if (VAR13 != VAR18)
return FUN3(VAR13, "");

if (!VAR5) {

VAR6 = FUN10(false, "");
if (VAR6 < 0)
FUN11(VAR6, "");

VAR5 = true;
}



VAR6 = FUN12(VAR2.VAR3, VAR19, VAR20);
if (VAR6 == -VAR21)
continue;
if (VAR6 < 0)
return FUN3(VAR6, "");
if (VAR6 > 0)
continue;

FUN13("");
break;
}

if ((VAR22)VAR17 < VAR23) 
return FUN3(FUN4(VAR24), "",
VAR17, (VAR22) VAR23); 
FUN13("", VAR17);


FUN14(FUN15(struct VAR25, VAR26) < VAR23);
FUN14(FUN15(struct VAR25, VAR27) < VAR23);

const char *VAR27 = FUN16(VAR16.VAR27);
if (!VAR27) {
FUN13("", VAR16.VAR27);
continue;
}

switch (VAR16.VAR26) {

case VAR28:
FUN13("", VAR16.VAR29, VAR27);
(void) FUN17(&VAR2, &VAR16);
break;

case VAR30:
FUN13("", VAR16.VAR29, VAR27);
(void) FUN18(&VAR2, &VAR16);
break;

case VAR31:
FUN13("", VAR16.VAR29, VAR27);
(void) FUN19(&VAR2, &VAR16);
break;

default:
FUN13("", VAR16.VAR26, VAR16.VAR29, VAR27);
break;
}
}

return 0;
}