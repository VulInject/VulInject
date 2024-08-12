int main(int argc, char **argv) {
int VAR1;
int VAR2 = 0;

for (VAR1 = 1; VAR1 < argc; VAR1++) {
if (strcmp(argv[VAR1], "") == 0 || strcmp(argv[VAR1], "") == 0) {
FUN1();
return 0;
}
else if (strcmp(argv[VAR1], "") == 0) {
FUN2("", VAR3);
return 0;
}
else if (FUN3(argv[VAR1], "", 8) == 0) { 
FUN2("", argv[VAR1] + 8);
return 0;
}
else if (strcmp(argv[VAR1], "") == 0)
VAR4 = 1;
else if (FUN3(argv[VAR1], "", 2) == 0) {
fprintf(VAR5, "");
return 1;
}
else {
VAR2 = VAR1;
break;
}
}


if (FUN4() != 0) {
fprintf(VAR5, "");
FUN5(1);
}
VAR6 = FUN6();
assert(VAR6);
VAR7 = FUN7(VAR6, &VAR8, &VAR9);
if (VAR8 == 0) {
fprintf(VAR5, "");
FUN5(1);
}
if (asprintf(&VAR10, "", VAR8) == -1)
FUN8("");


FUN9(VAR11);
FUN10("");
FUN10("");
if (VAR2 > 0) {
for (VAR1 = VAR2; VAR1 < argc; VAR1++)
FUN10(argv[VAR1]);
}

FUN11();
FUN12(VAR7);
FUN12("");
FUN12("");
FUN12("");
FUN12("");
FUN12("");
FUN12("");
FUN12(VAR10);

FUN13("");
FUN13("");
FUN13("");
FUN13("");
FUN13("");
FUN13("");
FUN13("");

FUN13("");
FUN13("");

FUN13("");
FUN13("");

FUN13("");
FUN13("");
FUN13("");
FUN13("");
FUN13("");
FUN13("");
FUN13("");

FUN13("");
FUN13("");
FUN13("");


FUN14(0);
for (VAR1 = 0; VAR1 < VAR12; VAR1++) {
if (VAR13[VAR1].VAR14 == 1) {
uid_t VAR15 = FUN15(VAR1);
if (VAR15 != VAR8) 
continue;


uid_t VAR16 = FUN16(VAR1);
FUN2("");
FUN17(VAR1, 0); 
FUN18(VAR16);
FUN19(VAR16);
FUN20(0);


pid_t VAR17 = FUN21();
if (VAR17 == -1)
FUN8("");
if (VAR17 == 0) {
int VAR18 = FUN22(VAR16, "");
if (VAR18 == 0) {
FUN23();
FUN24(VAR7);
FUN24("");
FUN24("");
FUN24(VAR10);
FUN25();
FUN26();
}
else {
FUN2("");
FUN5(1);
}


if (FUN27(VAR9) != 0)
FUN8("");
if (setuid(VAR8) != 0)
FUN8("");
return 0;
}
int VAR19;
FUN28(&VAR19);


VAR17 = FUN21();
if (VAR17 == -1)
FUN8("");
if (VAR17 == 0) {
int VAR18 = FUN22(VAR16, "");
if (VAR18 == 0)
FUN29();
else {
FUN2("");
FUN5(1);
}


if (FUN27(VAR9) != 0)
FUN8("");
if (setuid(VAR8) != 0)
FUN8("");
return 0;
}
FUN28(&VAR19);
}
}

return 0;
}