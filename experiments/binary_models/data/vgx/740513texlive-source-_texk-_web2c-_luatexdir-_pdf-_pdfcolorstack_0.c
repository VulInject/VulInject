int FUN1(int VAR1)
{
VAR2 *VAR3 = FUN2(VAR1);
if (VAR4 == VAR5) {
if (VAR3->VAR6 == 0) {
FUN3("","",(unsigned int) VAR1);
return VAR3->VAR7;
}
FUN4(VAR3->VAR8);
VAR3->VAR8 = VAR3->VAR9[--VAR3->VAR6];
FUN5(VAR3->VAR8);
} else {
if (VAR3->VAR10 == 0) {
FUN3("","",(unsigned int) VAR1);
return VAR3->VAR7;
}
FUN4(VAR3->VAR11);
VAR3->VAR11 = VAR3->VAR12[--VAR3->VAR10];
FUN5(VAR3->VAR11);
}
return VAR3->VAR7;
}