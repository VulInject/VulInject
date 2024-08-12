int
main(int argc, char *argv[])
{
int VAR1 = 0;
int VAR2 = -1;

FUN1(argc, argv);

VAR2 = open(VAR3, VAR4|VAR5|VAR6, 0666);
if (VAR2 < 0) {
FUN2("");
FUN3(3);
}

for (VAR1 = 0; VAR7 == 0 || VAR1 < VAR7; VAR1++) {
(void) FUN4(VAR2);
(void) FUN5(VAR2);
}

(void) close(VAR2);
return (0);
}