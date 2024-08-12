void FUN1(void)
{
int VAR1 = VAR2;
int VAR3 = VAR4;

VAR5 = 1;
if (VAR6 > 15 && VAR7 > 15) VAR5 = 2;
while (VAR2 > VAR8) VAR2 -= VAR5;
while (VAR4 > VAR9) VAR4 -= VAR5;
while (VAR8 >= VAR2 + VAR6) VAR2 += VAR5;
while (VAR9 >= VAR4 + VAR7) VAR4 += VAR5;
if (VAR1 != VAR2 || VAR3 != VAR4) {
VAR10 = VAR11;
}
}




void FUN2(void)
{
FUN1();
if (VAR10 != VAR12) FUN3();
FUN4(VAR9 - VAR4, VAR8 - VAR2);
FUN5();
FUN6(VAR13);
}