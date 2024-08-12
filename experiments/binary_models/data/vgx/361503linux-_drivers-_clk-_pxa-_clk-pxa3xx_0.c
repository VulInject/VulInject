unsigned int FUN1(int VAR1)
{
struct VAR2 *VAR2;
unsigned long VAR3[5];
int VAR4;

for (VAR4 = 0; VAR4 < 5; VAR4++) {
VAR2 = FUN2(NULL, VAR5[VAR4]);
if (FUN3(VAR2)) {
VAR3[VAR4] = 0;
} else {
VAR3[VAR4] = FUN4(VAR2);
FUN5(VAR2);
}
}
if (VAR1) {
FUN6("",
VAR3[1] / 1000000, (VAR3[0] % 1000000) / 10000);
FUN6("",
VAR3[2] / 1000000, (VAR3[1] % 1000000) / 10000);
FUN6("",
VAR3[3] / 1000000, (VAR3[2] % 1000000) / 10000);
FUN6("",
VAR3[4] / 1000000, (VAR3[4] % 1000000) / 10000);
}
return (unsigned int)VAR3[0] / VAR6;
}