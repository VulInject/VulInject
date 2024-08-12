static void FUN1(struct VAR1 *, register VAR2 *);
static void FUN2(int);

static int VAR3 = 0;	
static int VAR4;	

int
main(int argc, char *argv[])
{
pid_t VAR5;
int VAR6;
char *VAR7 = argv[0];
int VAR8 = VAR9;

while ((VAR6 = getopt(argc, argv, "")) != -1)
switch ((char)VAR6) {
case '':
VAR10++;
break;
default:
(void) fprintf(VAR11, "", VAR7);
FUN3(VAR12);
}



if (!FUN4(VAR13, &VAR8)) {
FUN5("");
}


if (FUN6(0) != -1 || VAR14 != VAR15) {
char *VAR16;
struct VAR17 *VAR18 = NULL;
VAR2 *VAR19;
int VAR20;

if ((VAR16 = getenv("")) == NULL) {
if (VAR10)
FUN5("");
} else if ((VAR18 = FUN7(VAR16)) == NULL) {
if (VAR10)
FUN5("");
}
VAR20 = (FUN6(0) != VAR21);
if ((VAR19 = FUN8(0, VAR18, NULL, 0, 0)) == NULL) {
FUN5("");
FUN3(VAR12);
}
if (VAR18)
FUN9(VAR18);
if (!FUN10(VAR19, VAR22, VAR23,
VAR24, 0)) {
FUN5(""
"");
FUN3(VAR12);
}
if (VAR20) {
(void) signal(VAR25, VAR26);
(void) FUN11(VAR27);
}

FUN12();
FUN3(VAR12);

}


if (!VAR3 && !VAR10) {
VAR5 = FUN13();
if (VAR5 < 0) {
FUN14("");
FUN3(VAR12);
}
if (VAR5)
FUN3(VAR28);

FUN15(0);
(void) FUN16();
}


if (VAR3 || !VAR10)
FUN17("", VAR29, VAR30);

if (VAR10) {
if (VAR10 == 1)
FUN5("");
else
FUN5("", VAR10);
}

if (!FUN18(VAR24, VAR22, VAR23,
"")) {
FUN5(""
"");
FUN3(VAR12);
}

FUN12();
FUN5("");
return (VAR12);
}