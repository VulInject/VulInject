int main(int argc, char **argv)
{
krb5_error_code	VAR1;
krb5_context	VAR2;
int VAR3 = 0;

krb5_boolean VAR4;

(void) FUN1(VAR5, "");


(void) FUN2(VAR6);

if (strrchr(argv[0], ''))
argv[0] = strrchr(argv[0], '')+1;

if (!(VAR7 = (VAR8 **) malloc(sizeof(VAR8 *) * 
VAR9))) {
fprintf(VAR10, FUN3(""), argv[0]);
FUN4(1);
}
memset((char *) VAR7, 0,
(VAR11) (sizeof(VAR8 *) * VAR9));


VAR1 = FUN5(&VAR2);
if (VAR1) {
FUN6(argv[0], VAR1, FUN3(""));
FUN4(1);
}
FUN7(VAR2, "", argv[0], 1);


VAR4 = FUN8();
if (VAR4 != VAR12) {
FUN9();
}




FUN10(VAR2, argc, argv);

FUN11();

FUN12(VAR2);

VAR1 = FUN13();
if (VAR1) {
FUN6(argv[0], VAR1, FUN3(""));
FUN14(argv[0]);
return 1;
}

if ((VAR1 = FUN15(argv[0]))) {
FUN6(argv[0], VAR1, FUN3(""));
FUN14(argv[0]);
return 1;
}


if (VAR4 != VAR12)
FUN16();


if (VAR1 = FUN17(argv[0])) {
FUN6(argv[0], VAR1, FUN3(""));
if (VAR4 != VAR12) {
fprintf(VAR10, FUN3(""),
argv[0], FUN18(VAR1));
}
}

if (!VAR13 && FUN19(0, 0)) {
FUN6(argv[0], VAR14, FUN3(""));
if (VAR4 != VAR12) {
fprintf(VAR10, FUN3(""),
argv[0], strerror(VAR14));
}
FUN14(argv[0]);
return 1;
}
if (VAR1 = FUN20(VAR15, "")) {
FUN6(argv[0], VAR1, FUN3(""));
VAR3++;
};

if ((VAR1 = FUN21(argv[0]))) {
FUN6(argv[0], VAR1, FUN3(""));
VAR3++;
}
if ((VAR1 = FUN22(argv[0]))) {
FUN6(argv[0], VAR1, FUN3(""));
VAR3++;
}
FUN20(VAR15, "");
FUN23(VAR2);
FUN24(VAR16);
FUN14(argv[0]);
if (VAR7) 
free(VAR7);
(void) FUN25(VAR2, VAR17);
FUN26(VAR2);
FUN27(VAR2);
return VAR3;
}