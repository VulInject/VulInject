int main(int argc, char **argv) {
int VAR1, VAR2 = 0;

VAR3 = (void *)&VAR1; 

const char *VAR4 = 0;
for (VAR1 = 1; VAR1 < argc; VAR1++) {
if (argv[VAR1][0] == '') {

char *VAR5 = argv[VAR1];
if (!strcmp(VAR5, "") || !strcmp(VAR5, "")) {
FUN1();
FUN2(1);
} else if (!strcmp(VAR5, "") || !strcmp(VAR5, "")) {
if (VAR1 + 1 >= argc)
FUN3(1, "");
FUN4();
FUN5();
FUN6(VAR6);
FUN7(true);
FUN8("", VAR7);
FUN8("", VAR8);
FUN9(FUN10(argv[VAR1 + 1], false));
int VAR9 = FUN11();
VAR10 = !VAR9;
bool VAR11 = true;
while (VAR10 && (FUN12() || VAR11))
VAR11 = FUN13();
FUN14();
FUN15();
FUN16();
FUN2(VAR9);
} else if (!strcmp(VAR5, "")) {
extern bool VAR12;
VAR12 = true;
} else if (!strcmp(VAR5, "")) {
bool VAR13;
if (VAR1 + 1 >= argc) {
FUN3(1, "");
} else if (VAR1 + 2 == argc) {
VAR13 = FUN17(argv[VAR1 + 1]);
} else {
VAR1++;
while (VAR1<argc) FUN18(&VAR14, argv[VAR1++]);
VAR13 = FUN19(&VAR14);
}
FUN2(VAR13 ? 0 : 1);
} else if (!strcmp(VAR5, "")) {
FUN20(argv[VAR1 + 1]);
bool VAR13 = FUN19(&VAR14);
FUN21(&VAR14);
FUN2(VAR13 ? 0 : 1);
} else if (!strcmp(VAR5, "")) {
bool VAR13 = FUN22();
FUN2(VAR13 ? 0 : 1);
} else if (!strcmp(VAR5, "")) {
FUN20(argv[VAR1 + 1]);
bool VAR13 = FUN23(&VAR14, 0);
FUN21(&VAR14);
FUN2(VAR13 ? 0 : 1);
} else if (!strcmp(VAR5, "")) {
if (VAR1 + 1 >= argc)
FUN3(1, "");
bool VAR13 = FUN24(argv[VAR1 + 1], 0);
FUN2(VAR13 ? 0 : 1);
} else if (!strcmp(VAR5, "")) {
if (VAR1 + 2 >= argc)
FUN25("");
bool VAR13 = FUN24(argv[VAR1 + 1], FUN26(argv[VAR1 + 2]));
FUN2(VAR13 ? 0 : 1);
} else if (!strcmp(VAR5, "")) {
bool VAR13 = FUN27();
FUN2(VAR13 ? 0 : 1);
} else {
FUN28("", VAR5);
FUN1();
FUN2(1);
}
} else {
VAR2++;
VAR4 = argv[VAR1];
}
}

if (VAR2 == 0) {
FUN28("");
} else if (VAR2 == 1) {

char *VAR15 = FUN29(VAR4);
if (!VAR15)
FUN30(1, VAR4);

char *VAR16 = VAR15;
if (VAR16[0] == '') {
while (VAR16[0] && VAR16[0] != '')
VAR16++;
if (VAR16[0] == '')
VAR16++;
}
FUN4();
FUN5();
FUN6(VAR6);
FUN7(false );
FUN8("", VAR7);
FUN9(FUN10(VAR16, false));
int VAR9 = FUN11();
free(VAR15);
VAR10 = !VAR9;
bool VAR11 = true;
while (VAR10 && (FUN12() || VAR11))
VAR11 = FUN13();
FUN14();
FUN15();
FUN16();
FUN2(VAR9);
} else {
FUN28("");
FUN1();
FUN2(1);
}

FUN28("", (int)sizeof(VAR17));
FUN28("", (int)sizeof(VAR18));

struct sigaction VAR19;
VAR19.VAR20 = VAR21;
VAR19.VAR22 = 0;
FUN31(&VAR19.VAR23);
if (FUN32(VAR24, &VAR19, NULL) == -1)
FUN28("");
else
FUN28("");
if (FUN32(VAR25, &VAR19, NULL) == -1)
FUN28("");
else
FUN28("");
if (FUN32(VAR26, &VAR19, NULL) == -1)
FUN28("");
else
FUN28("");

FUN4();
FUN5();
FUN6(VAR6);
FUN7(true);

FUN8("", VAR7);
FUN8("", VAR8);

while (VAR10) {
FUN13();
}
FUN33("");
FUN14();
FUN34();
FUN35();
FUN15();
FUN16();

return 0;
}