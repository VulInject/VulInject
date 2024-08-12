int
main(int argc, char *argv[])
{
int VAR1, VAR2, VAR3;
char *VAR4[] = {"", ""};

(void) fprintf(VAR5, "");
(void) FUN1(VAR6);


for (VAR1 = 0; VAR1 < sizeof (VAR4) / sizeof (char *); VAR1++) {
if ((VAR4[VAR1] = getenv(VAR4[VAR1])) == NULL) {
(void) fprintf(VAR7, "", VAR1);
return (1);
}
}
(void) snprintf(VAR8, sizeof (VAR8), "", VAR4[0], VAR4[1]);


if (FUN2(VAR8, VAR9) == 0) {
(void) unlink(VAR8);
}
VAR2 = 0;
if ((VAR3 = open(VAR8, VAR10 | VAR11 | VAR12, VAR13)) == -1) {
(void) fprintf(VAR7, "", VAR8, VAR14);
return (1);
}
(void) close(VAR3);

for (VAR1 = 0; VAR1 < VAR15; VAR1++) {
time_t VAR16, VAR17;


VAR2 = FUN3(VAR8, VAR18[VAR1].VAR19, &VAR16);
if (VAR2 != 0) {
(void) fprintf(VAR7, "",
VAR8, VAR18[VAR1].VAR19, VAR2);
return (1);
}


(void) sleep(2);
(void) VAR18[VAR1].FUN4(VAR8);


VAR2 = FUN3(VAR8, VAR18[VAR1].VAR19, &VAR17);
if (VAR2 != 0) {
(void) fprintf(VAR7, "",
VAR8, VAR18[VAR1].VAR19, VAR2);
return (1);
}

if (VAR16 == VAR17) {
(void) fprintf(VAR7, "",
VAR18[VAR1].VAR20, (long)VAR16, (long)VAR17);
return (1);
} else {
(void) fprintf(VAR7, "",
VAR18[VAR1].VAR20, (long)VAR16, (long)VAR17);
}
}

(void) fprintf(VAR5, "");
return (0);
}