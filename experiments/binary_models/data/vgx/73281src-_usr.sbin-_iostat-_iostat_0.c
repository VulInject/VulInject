int
main(int argc, char *argv[])
{
struct itimerval VAR1;
const char *VAR2;
sigset_t VAR3;
int VAR4, VAR5;

while ((VAR4 = getopt(argc, argv, "")) != -1)
switch(VAR4) {
case '':
VAR6 = FUN1(VAR7, 1, VAR8, &VAR2);
if (VAR2)
FUN2(1, "", VAR2);
break;
case '':
VAR9 |= VAR10;
break;
case '':
VAR9 |= VAR11;
break;
case '':
VAR9 |= VAR12;
break;
case '':
VAR9 |= VAR13;
break;
case '':
VAR14 = VAR7;
break;
case '':
VAR15 = VAR7;
break;
case '':
VAR9 |= VAR16;
break;
case '':
VAR17 = FUN1(VAR7, 1, VAR18, &VAR2);
if (VAR2)
FUN2(1, "", VAR2);
break;
default:
FUN3();
}
argc -= VAR19;
argv += VAR19;

if (!FUN4(VAR9, VAR10 | VAR16 | VAR11 | VAR12))
VAR9 |= VAR10 | VAR16 | VAR11;

FUN5(0);

if (FUN6("", "") == -1)
FUN7(1, "");
if (FUN6(NULL, NULL) == -1)
FUN7(1, "");

FUN8();
FUN9(argv);


signal(VAR20, VAR21);

if (VAR17 != 0) {
if (signal(VAR22, VAR23) == VAR24)
FUN7(1, "");
FUN10(&VAR3);
VAR1.VAR25.VAR26 = VAR17;
VAR1.VAR25.VAR27 = 0;
VAR1.VAR28 = VAR1.VAR25;
if (FUN11(VAR29, &VAR1, NULL) == -1)
FUN7(1, "");
}

for (VAR5 = 1;;) {
if (!--VAR5 || VAR30) {
FUN12();
VAR5 = 20;
VAR30 = 0;
}

if (!FUN4(VAR9, VAR13))
FUN13();
FUN14();

if (VAR6 >= 0 && --VAR6 <= 0)
break;
FUN15(&VAR3);
FUN8();
if (VAR31.VAR32 != VAR33.VAR32)
VAR30 = 1;
}
FUN16(0);
}