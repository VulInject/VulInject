void
FUN1(VAR1 *VAR2) {
unsigned int VAR3;
void *VAR4;



FUN2(FUN3(VAR2));

VAR4 = FUN4(VAR2);
VAR3 = FUN5(VAR2);
(void)memmove(VAR2->VAR5, VAR4, (VAR6)VAR3);

if (VAR2->VAR7 > VAR2->VAR8)
VAR2->VAR7 -= VAR2->VAR8;
else
VAR2->VAR7 = 0;
VAR2->VAR8 = 0;
VAR2->VAR9 = VAR3;
}