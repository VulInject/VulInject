int
main(int argc, char **argv)
{
int VAR1;
pid_t VAR2;
extern char *VAR3;
sigset_t VAR4;
struct sigaction VAR5;

(void) FUN1(VAR6, "");
(void) FUN2(VAR7);

if ((VAR8 = strrchr(argv[0], '')) == NULL) {
VAR8 = argv[0];
} else {
VAR8++;
}

(void) FUN3(-1, -1);


if (argc > 3) {
FUN4();
}
while ((VAR1 = getopt(argc, argv, "")) != VAR9) {
switch (VAR1) {
case '':
VAR10 = FUN5(VAR3);
break;
case '':
VAR11 = FUN5(VAR3);
break;
case '':
default:
FUN4();

}
}


if (FUN6() != 0) {
(void) fprintf(VAR12, FUN7(""),
VAR8);
FUN8(VAR13);
}


FUN9(3);


(void) FUN10(&VAR4);
(void) FUN11(VAR14, &VAR4, NULL);


(void) FUN12(&VAR4);
(void) FUN13(&VAR4, VAR15);
(void) FUN11(VAR16, &VAR4, NULL);


VAR5.VAR17 = 0;
VAR5.VAR18 = VAR19;
(void) FUN14(VAR20, &VAR5, NULL);
VAR5.VAR18 = VAR21;
(void) FUN14(VAR15, &VAR5, NULL);


VAR5.VAR18 = VAR22;
(void) FUN14(VAR23, &VAR5, NULL);


if (VAR10 < VAR24) {
if (FUN15()) {
FUN8(0);
}
FUN16();
}


if ((VAR2 = FUN17()) != FUN18()) {
FUN19(VAR25, "",
VAR8, VAR2);
FUN8(VAR26);
}

FUN19(VAR27, "",
VAR8, VAR10);


FUN20(VAR28);


if (FUN21(VAR29, VAR30) == -1) {
FUN19(VAR31,
FUN7(""),
strerror(VAR32));
FUN22(VAR32);
}
(void) chmod(VAR29, VAR33);

FUN23(); 


FUN24();


FUN25();


FUN20(VAR34);


FUN26();


FUN27(VAR11);

FUN28(0);
return (0);
}