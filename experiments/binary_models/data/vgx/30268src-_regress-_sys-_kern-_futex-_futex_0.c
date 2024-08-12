int
main(int argc, char *argv[])
{
char VAR1[] = "";
struct sigaction VAR2;
struct timespec VAR3 = { 0, 5000 };
pthread_t VAR4;
pid_t VAR5;
int VAR6, VAR7, VAR8;


assert(FUN1(&VAR9, 0xFFFF, 0, 0, NULL) == -1);
assert(VAR10 == VAR11);


assert(FUN2((void *)0xdeadbeef, 1, 0, NULL, 0) == -1);
assert(VAR10 == VAR12);


assert(FUN2(&VAR9, 1, 0, NULL, 0) == -1);
assert(VAR10 == VAR13);


assert(FUN2(&VAR9, 0, VAR14, &VAR3, 0) == -1);
assert(VAR10 == VAR15);


memset(&VAR2, 0, sizeof(VAR2));
VAR2.VAR16 = VAR17;
assert(FUN3(VAR18, &VAR2, NULL) == 0);
assert(FUN4(&VAR4, NULL, VAR19, NULL) == 0);
FUN5(100);
assert(FUN6(VAR4, VAR18) == 0);
assert(FUN7(VAR4, NULL) == 0);


assert(FUN4(&VAR4, NULL, VAR20, NULL) == 0);
assert(FUN2(&VAR9, 0, 0, NULL, 0) == 0);
assert(FUN7(VAR4, NULL) == 0);


VAR6 = mkstemp(VAR1);
assert(VAR6 != -1);
unlink(VAR1);
assert(FUN8(VAR6, 65536) == 0);
VAR21 = FUN9(NULL, sizeof(*VAR21), VAR22 | VAR23,
VAR24, VAR6, 0);
assert(VAR21 != VAR25);
close(VAR6);


VAR5 = FUN10();
assert(VAR5 != -1);
if (VAR5 == 0) {
FUN5(50000);
FUN11(VAR21, -1, 0);
FUN12(0);
} else {
assert(FUN2(VAR21, 0, 0, NULL, 0) == 0);
assert(FUN13(VAR5, &VAR8, 0) == VAR5);
assert(FUN14(VAR8));
assert(FUN15(VAR8) == 0);
}


for (VAR7 = 1; VAR7 < 4; VAR7++) {
VAR5 = FUN10();
assert(VAR5 != -1);
if (VAR5 == 0) {
FUN5(50000);
FUN11(VAR21, -1,
(VAR7 & 1) ? VAR26 : 0);
FUN12(0);
} else {
VAR3.VAR27 = 0;
VAR3.VAR28 = 200000000;
assert(FUN2(VAR21, 0, VAR14, &VAR3,
(VAR7 & 2) ? VAR26 : 0) == -1);
assert(VAR10 == VAR15);
assert(FUN13(VAR5, &VAR8, 0) == VAR5);
assert(FUN14(VAR8));
assert(FUN15(VAR8) == 0);
}
}

assert(FUN16(VAR21, sizeof(*VAR21)) == 0);


VAR21 = FUN9(NULL, sizeof(*VAR21), VAR22 | VAR23,
VAR29 | VAR24, -1, 0);
assert(VAR21 != VAR25);


VAR5 = FUN10();
assert(VAR5 != -1);
if (VAR5 == 0) {
FUN5(50000);
FUN11(VAR21, -1, 0);
FUN12(0);
} else {
assert(FUN2(VAR21, 0, 0, NULL, 0) == 0);
assert(FUN13(VAR5, &VAR8, 0) == VAR5);
assert(FUN14(VAR8));
assert(FUN15(VAR8) == 0);
}


for (VAR7 = 1; VAR7 < 4; VAR7++) {
VAR5 = FUN10();
assert(VAR5 != -1);
if (VAR5 == 0) {
FUN5(50000);
FUN11(VAR21, -1,
(VAR7 & 1) ? VAR26 : 0);
FUN12(0);
} else {
VAR3.VAR27 = 0;
VAR3.VAR28 = 200000000;
assert(FUN2(VAR21, 0, VAR14, &VAR3,
(VAR7 & 2) ? VAR26 : 0) == -1);
assert(VAR10 == VAR15);
assert(FUN13(VAR5, &VAR8, 0) == VAR5);
assert(FUN14(VAR8));
assert(FUN15(VAR8) == 0);
}
}

assert(FUN16(VAR21, sizeof(*VAR21)) == 0);

return 0;
}