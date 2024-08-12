static int
FUN1(mdb_ctf_id_t VAR1, uintptr_t VAR2, ulong_t VAR3, char *VAR4)
{
mdb_ctf_id_t VAR5;
mdb_ctf_arinfo_t VAR6;
char VAR7[1024];
ssize_t VAR8;

if (FUN2(VAR1, &VAR5) == -1) {
FUN3("");
return (VAR9);
}

if (FUN4(VAR5) == VAR10) {
uintptr_t VAR11;

if (FUN5(&VAR11, sizeof (VAR11), VAR2) == -1) {
FUN3("", VAR2);
return (VAR12);
}

if (FUN6(VAR7, sizeof (VAR7) - 1, VAR11) < 0) {
FUN3("", VAR11);
return (VAR12);
}

FUN7(VAR4, VAR7);
return (0);
}

if (FUN4(VAR5) == VAR13) {
const char *VAR14;
int VAR11;

if (FUN5(&VAR11, sizeof (VAR11), VAR2) == -1) {
FUN3("", VAR2);
return (VAR12);
}

if ((VAR14 = FUN8(VAR1, VAR11))) {
FUN7(VAR4, VAR14);
} else {
(void) FUN9(VAR7, sizeof (VAR7), "", VAR11);
FUN7(VAR4, VAR7);
}

return (0);
}

if (FUN4(VAR5) != VAR15) {
FUN3("");
return (VAR9);
}

if (FUN10(VAR5, &VAR6) == -1 ||
FUN2(VAR6.VAR16, &VAR5) == -1 ||
(VAR8 = FUN11(VAR5)) == -1) {
FUN3("");
return (VAR9);
}

if (VAR8 != 1) {
FUN3(""
"");
return (VAR9);
}

FUN12(VAR7, sizeof (VAR7));

if (FUN5(VAR7, FUN13(VAR6.VAR17, sizeof (VAR7) - 1), VAR2) == -1) {
FUN3("", VAR2);
return (VAR12);
}

FUN7(VAR4, VAR7);

return (0);
}