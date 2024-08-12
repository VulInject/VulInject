int
FUN1(int argc, char *argv[])
{
char *VAR1, *VAR2;
int VAR3 = -1, VAR4;

if (!FUN2())
return (VAR5);

if (argc < 2)
goto VAR6;

if (strcmp(argv[1], "") == 0) {
VAR4 = -1;
if (argc != 2 && argc != 3)
goto VAR6;

if (argc == 3) {
VAR1 = argv[2];
VAR7 = 0;
VAR4 = FUN3(VAR1, &VAR2, 0);
if (VAR7 != 0 || *VAR1 == '' || VAR2[0] != '') {
snprintf(VAR8,
sizeof (VAR8),
"");
return (VAR9);
}
}
FUN4(VAR4);
return (VAR5);
}

if (strcmp(argv[1], "") == 0) {
bool VAR10 = false;

if (argc > 2) {
if (argc > 3 || strcmp(argv[2], "") != 0)
goto VAR6;
VAR10 = true;
}

FUN5(VAR10);
return (VAR5);
}

if (strcmp(argv[1], "") == 0) {
if (argc != 2)
goto VAR6;

if (VAR11.VAR12 == 0)
return (VAR5);

FUN6();
FUN7(true);
FUN8(VAR13);
FUN9(0);
return (VAR5);
}

if (strcmp(argv[1], "") == 0) {
if (argc != 2)
goto VAR6;

VAR3 = FUN10();
if (VAR3 == 0) {
snprintf(VAR8, sizeof (VAR8),
"", argv[0]);
return (VAR9);
}
} else if (strcmp(argv[1], "") == 0) {
if (argc != 3)
goto VAR6;

if (FUN11(argv[2], "", 2) == 0) {
VAR1 = argv[2];
VAR7 = 0;
VAR4 = FUN3(VAR1, &VAR2, 0);
if (VAR7 != 0 || *VAR1 == '' || VAR2[0] != '') {
snprintf(VAR8,
sizeof (VAR8),
"");
return (VAR9);
}
VAR3 = FUN12(0, 0, 0, VAR4);
} else if (strchr(argv[2], '') != NULL) {
VAR3 = FUN13(argv[2]);
}
} else {
goto VAR6;
}

if (VAR3 == 0) {
snprintf(VAR8, sizeof (VAR8),
"",
argv[0], argv[2]);
return (VAR9);
}

if (VAR3 >= VAR14) {
if (VAR11.VAR12 != VAR3) {
FUN6();
FUN7(false);
FUN14(VAR3);
FUN9(1);
}
return (VAR5);
} else {
snprintf(VAR8, sizeof (VAR8),
"", argv[0], argv[2]);
return (VAR9);
}

VAR6:
snprintf(VAR8, sizeof (VAR8),
""
"", argv[0]);
return (VAR9);
}