static int FUN1(VAR1 *VAR2) {
unsigned long VAR3, VAR4;
struct timespec VAR5;
unsigned long long VAR6;
struct rusage VAR7, VAR8;

VAR4 = FUN2(VAR9);

if (FUN3(VAR10, &VAR7) != 0)
return 0;
if (FUN4(VAR11, &VAR5) < 0) {
return 0;
}
VAR6 = (VAR5.VAR12 * 1000000 + VAR5.VAR13 / 1000);


VAR3 = 5 * 1000000 / VAR4;
while (1) {
unsigned long long VAR14;
if (FUN4(VAR11, &VAR5) < 0)
return 0;
VAR14 = (VAR5.VAR12 * 1000000 + VAR5.VAR13 / 1000) - VAR6;
if (VAR14 >= VAR3) break;
}
if (FUN3(VAR10, &VAR8) != 0)
return 0;

long long VAR15 = (VAR8.VAR16.VAR12 * 1000000 + VAR8.VAR16.VAR17) - (VAR7.VAR16.VAR12 * 1000000 + VAR7.VAR16.VAR17);
long long VAR18 = (VAR8.VAR19.VAR12 * 1000000 + VAR8.VAR19.VAR17) - (VAR7.VAR19.VAR12 * 1000000 + VAR7.VAR19.VAR17);


if (VAR15 * 10 > VAR15 + VAR18) {
sds VAR20 = FUN5("");
sds VAR21 = FUN5("");
*VAR2 = FUN6(FUN7(),
""
""
""
""
"",
VAR21 ? VAR21 : "", VAR20 ? VAR20 : "");
FUN8(VAR20);
FUN8(VAR21);
return -1;
} else {
return 1;
}
}