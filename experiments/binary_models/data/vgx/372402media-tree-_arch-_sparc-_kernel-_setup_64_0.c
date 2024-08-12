void FUN1(struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
while (VAR2 < VAR3) {
unsigned long VAR4 = VAR2->VAR4;

*(unsigned int *) (VAR4 +  0) = VAR2->VAR5[0];
FUN2();
VAR6 FUN3("" : : "" (VAR4 +  0));

*(unsigned int *) (VAR4 +  4) = VAR2->VAR5[1];
FUN2();
VAR6 FUN3("" : : "" (VAR4 +  4));

VAR2++;
}
}