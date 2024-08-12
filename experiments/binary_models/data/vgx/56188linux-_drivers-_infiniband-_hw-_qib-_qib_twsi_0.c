static int FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4, VAR5;

VAR5 = 0;

for (VAR4 = 7; VAR4 >= 0; --VAR4) {
VAR5 <<= 1;
FUN2(VAR2, 1);
VAR5 |= FUN3(VAR2, 0);
FUN2(VAR2, 0);
}
if (VAR3) {
FUN2(VAR2, 1);
FUN4(VAR2);
} else {
FUN5(VAR2, 0);
FUN2(VAR2, 1);
FUN2(VAR2, 0);
FUN5(VAR2, 1);
}
return VAR5;
}