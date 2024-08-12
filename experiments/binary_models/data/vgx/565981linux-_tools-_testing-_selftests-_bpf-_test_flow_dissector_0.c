static void FUN1(void)
{
if (VAR1 == VAR2) {
FUN2("", (void *) &VAR3);
FUN2("", (void *) &VAR4);
} else {
FUN2("", (void *) &VAR5);
FUN2("", (void *) &VAR6);
}

if (!VAR7)
return;

fprintf(VAR8, "", VAR9);

if (VAR7 == VAR2) {
FUN2("", (void *) &VAR10);
FUN2("", (void *) &VAR11);
} else {
FUN2("", (void *) &VAR12);
FUN2("", (void *) &VAR13);
}

if (!VAR14)
return;

if (VAR7 == VAR2) {
FUN2("", (void *) &VAR15);
FUN2("", (void *) &VAR16);
} else {
FUN2("", (void *) &VAR17);
FUN2("", (void *) &VAR18);
}

}