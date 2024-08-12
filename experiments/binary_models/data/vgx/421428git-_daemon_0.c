int FUN1(int argc, const char **argv)
{
int VAR1 = 0;
struct string_list VAR2 = VAR3;
int VAR4 = 0, VAR5 = 0;
const char *VAR6 = NULL, *VAR7 = NULL, *VAR8 = NULL;
int VAR9 = 0;
struct VAR10 *VAR11 = NULL;
int VAR12;

for (VAR12 = 1; VAR12 < argc; VAR12++) {
const char *VAR13 = argv[VAR12];
const char *VAR14;

if (FUN2(VAR13, "", &VAR14)) {
FUN3(&VAR2, FUN4(VAR14));
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
char *VAR15;
unsigned long VAR16;
VAR16 = FUN5(VAR14, &VAR15, 0);
if (*VAR14 && !*VAR15) {
VAR1 = VAR16;
continue;
}
}
if (!strcmp(VAR13, "")) {
VAR4 = 1;
continue;
}
if (!strcmp(VAR13, "")) {
VAR5 = 1;
continue;
}
if (!strcmp(VAR13, "")) {
VAR17 = 1;
continue;
}
if (!strcmp(VAR13, "")) {
VAR18 = VAR19;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
if (!strcmp(VAR14, "")) {
VAR18 = VAR19;
continue;
} else if (!strcmp(VAR14, "")) {
VAR18 = VAR20;
continue;
} else if (!strcmp(VAR14, "")) {
VAR18 = VAR21;
continue;
} else
FUN6("", VAR14);
}
if (!strcmp(VAR13, "")) {
VAR22 = 1;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR23 = VAR14;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR24 = FUN7(VAR14);
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR25 = FUN7(VAR14);
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR26 = FUN7(VAR14);
if (VAR26 < 0)
VAR26 = 0;	        
continue;
}
if (!strcmp(VAR13, "")) {
VAR27 = 1;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR28 = VAR14;
continue;
}
if (!strcmp(VAR13, "")) {
VAR29 = 1;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR30 = VAR14;
continue;
}
if (!strcmp(VAR13, "")) {
VAR31 = 1;
continue;
}
if (!strcmp(VAR13, "")) {
VAR32 = "";
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR32 = VAR14;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR6 = VAR14;
continue;
}
if (!strcmp(VAR13, "")) {
VAR9 = 1;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR7 = VAR14;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
VAR8 = VAR14;
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
FUN8(VAR14, 1);
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
FUN8(VAR14, 0);
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
FUN9(VAR14, 1);
continue;
}
if (FUN2(VAR13, "", &VAR14)) {
FUN9(VAR14, 0);
continue;
}
if (!strcmp(VAR13, "")) {
VAR33 = 1;
continue;
}
if (!strcmp(VAR13, "")) {
VAR33 = 0;
continue;
}
if (!strcmp(VAR13, "")) {
VAR34 = &argv[VAR12+1];
break;
} else if (VAR13[0] != '') {
VAR34 = &argv[VAR12];
break;
}

FUN10(VAR35);
}

if (VAR18 == VAR36) {
if (VAR5 || VAR9)
VAR18 = VAR19;
else
VAR18 = VAR20;
}

if (VAR18 == VAR19) {
FUN11("", VAR37, VAR38);
FUN12(VAR39);
} else

FUN13(VAR40, NULL, VAR41, 4096);

if (VAR5 && (VAR9 || VAR8 || VAR7))
FUN6("");

if (VAR5 && (VAR1 || (VAR2.VAR42 > 0)))
FUN6("");
else if (VAR1 == 0)
VAR1 = VAR43;

if (VAR8 && !VAR7)
FUN6("");

if (VAR7)
VAR11 = FUN14(VAR7, VAR8);

if (VAR27 && (!VAR34 || !*VAR34))
FUN6("");

if (VAR28 && !FUN15(VAR28))
FUN6("",
VAR28);

if (VAR18 != VAR20) {
if (!FUN16("", "", VAR40))
FUN17("");
}

if (VAR5 || VAR4)
return FUN18();

if (VAR9) {
if (FUN19())
FUN6("");
}

if (VAR6)
FUN20(VAR6, ""VAR44, (VAR45) FUN21());


FUN22(&VAR46, argv[0]); 
FUN22(&VAR46, "");
for (VAR12 = 1; VAR12 < argc; ++VAR12)
FUN22(&VAR46, argv[VAR12]);

return FUN23(&VAR2, VAR1, VAR11);
}