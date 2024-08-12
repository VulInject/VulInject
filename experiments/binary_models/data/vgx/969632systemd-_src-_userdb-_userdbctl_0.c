static int FUN1(int argc, char *argv[], void *VAR1) {
FUN2(VAR2) VAR3 *VAR4 = NULL;
int VAR5 = 0, VAR6;

if (VAR7 < 0)
VAR7 = VAR8;

if (VAR7 == VAR8) {
VAR4 = FUN3("", "");
if (!VAR4)
return FUN4();

(void) FUN5(VAR4, (VAR9) 0, (VAR9) 1);
}

if (argc > 1)
FUN6(VAR10, argv + 1) {
FUN2(VAR11) VAR12 *VAR13 = NULL;

if (FUN7(argv[0], "")) {
VAR6 = FUN8(*VAR10, VAR14, &VAR13);
if (VAR6 < 0)
return FUN9(VAR6, "");
} else if (FUN7(argv[0], "")) {
VAR6 = FUN10(*VAR10, VAR14, &VAR13);
if (VAR6 < 0)
return FUN9(VAR6, "");
} else
FUN11();

for (;;) {
_cleanup_free_ char *VAR15 = NULL, *VAR16 = NULL;

VAR6 = FUN12(VAR13, &VAR15, &VAR16);
if (VAR6 == -VAR17)
break;
if (VAR6 == -VAR18)
return FUN9(VAR6, "");
if (VAR6 < 0)
return FUN9(VAR6, "");

VAR6 = FUN13(VAR15, VAR16, VAR4);
if (VAR6 < 0)
return VAR6;
}
}
else {
FUN2(VAR11) VAR12 *VAR13 = NULL;

VAR6 = FUN14(VAR14, &VAR13);
if (VAR6 == -VAR19)
FUN15(VAR6, "");
else if (VAR6 == -VAR17)
FUN15(VAR6, "");
else if (VAR6 < 0)
return FUN9(VAR6, "");
else {
for (;;) {
_cleanup_free_ char *VAR15 = NULL, *VAR16 = NULL;

VAR6 = FUN12(VAR13, &VAR15, &VAR16);
if (VAR6 == -VAR17)
break;
if (VAR6 == -VAR18)
return FUN9(VAR6, "");
if (VAR6 < 0)
return FUN9(VAR6, "");

VAR6 = FUN13(VAR15, VAR16, VAR4);
if (VAR6 < 0)
return VAR6;
}
}
}

if (VAR4) {
if (FUN16(VAR4) > 1) {
VAR6 = FUN17(VAR4, VAR20, VAR21, VAR22);
if (VAR6 < 0)
return FUN18(VAR6);
}

if (VAR22) {
if (FUN16(VAR4) > 1)
FUN19("", FUN16(VAR4) - 1);
else
FUN19("");
}
}

return VAR5;
}