static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
unsigned int argc, char **argv)
{
int VAR5 = 0;
int VAR6;
char *VAR7 = NULL;
struct VAR8 *VAR9 = NULL;
uint64_t VAR10;
size_t VAR11 = sizeof(VAR10);
char *VAR12 = NULL;
size_t VAR13 = VAR14;

if (argc < 3) {
FUN2("");
return -VAR15;
}

VAR9 = FUN3(sizeof(*VAR9), VAR16);
if (!VAR9) {
FUN2("");
return -VAR17;
}


VAR9->VAR18 = (unsigned long)VAR9;

VAR9->VAR4 = VAR4;

if (strlen(argv[0]) > (VAR19 - 1)) {
FUN2("");
FUN4(VAR9);
return -VAR15;
}

VAR9->VAR20 = argc;

strncpy(VAR9->VAR21, argv[0], VAR19);
argc--;
argv++;
FUN5(&VAR9->VAR22);
FUN6(&VAR9->VAR23);
FUN6(&VAR9->VAR24);

if (!FUN7(argv[0], "")) {
VAR9->VAR25 = 1;
argc--;
argv++;
}

VAR6 = FUN8(VAR4, argc, argv, &VAR7);
if (VAR6 < 0) {
FUN4(VAR9);
return VAR6;
}

VAR12 = FUN3(VAR13, VAR16);
if (!VAR12) {
FUN9("");
VAR5 = -VAR17;
goto VAR26;
}

VAR5 = FUN10(&VAR9->VAR27, VAR28,
VAR29);
if (VAR5) {
FUN9("");
goto VAR26;
}


VAR5 = FUN11(VAR9->VAR21, VAR9->VAR18, VAR30,
VAR7, VAR6,
VAR12, &VAR13);

if (VAR5 < 0) {
if (VAR5 == -VAR31)
FUN9("");
else
FUN9("");
goto VAR26;
}


VAR11 = sizeof(VAR10);
VAR5 = FUN11(VAR9->VAR21, VAR9->VAR18, VAR32,
NULL, 0, (char *)&VAR10, &VAR11);

if (VAR5) {
FUN9("");
goto VAR26;
}

VAR9->VAR33 = (VAR34)VAR10;
VAR9->VAR35 = FUN12(VAR4->VAR36, VAR9->VAR33);

if (VAR13) {
if (VAR12[VAR13 - 1] != '') {
FUN9("");
VAR5 = -VAR15;
goto VAR26;
}
VAR5 = FUN13(VAR4, VAR12,
FUN14(VAR4->VAR37), &VAR9->VAR38);
if (VAR5)
FUN9("",
VAR12);
}

if (VAR9->VAR25) {
VAR9->VAR39 = FUN15("", VAR40, 0);
if (!VAR9->VAR39) {
FUN9("");
VAR5 = -VAR17;
goto VAR26;
}

FUN16(&VAR9->VAR41, VAR42);
FUN17(&VAR9->VAR43, 0);
}

VAR26:
FUN4(VAR12);
if (VAR5) {
FUN18(&VAR9->VAR27);
FUN4(VAR9);
FUN4(VAR7);
} else {
VAR9->VAR44 = VAR7;
VAR2->VAR45 = VAR9;
}

return VAR5;
}