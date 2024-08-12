void FUN1(int VAR1)
{
register int VAR2 FUN2("") = VAR1;
register int VAR3 FUN2("") = VAR4;

asm volatile("" : : ""(VAR2), ""(VAR3));
FUN3();
}