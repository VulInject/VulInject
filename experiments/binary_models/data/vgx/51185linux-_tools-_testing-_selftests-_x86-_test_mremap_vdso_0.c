static int FUN1(void *VAR1, unsigned long VAR2)
{
void *VAR3, *VAR4;


VAR3 = FUN2(0, VAR2, VAR5, VAR6|VAR7, -1, 0);
if (VAR3 == VAR8) {
FUN3("", VAR9);
return 0;
}

FUN3("",
VAR1, (unsigned long)VAR1 + VAR2,
VAR3, (unsigned long)VAR3 + VAR2);
FUN4(VAR10);

VAR4 = FUN5(VAR1, VAR2, VAR2,
VAR11|VAR12, VAR3);
if ((unsigned long)VAR4 == (unsigned long)-1) {
FUN6(VAR3, VAR2);
if (VAR9 == VAR13) {
FUN3("");
return -1; 
}
FUN3("", VAR9);
return 1;
}

return 0;

}