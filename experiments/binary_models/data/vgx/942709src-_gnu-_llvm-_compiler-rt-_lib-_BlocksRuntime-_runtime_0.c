void FUN1(void *VAR1, const void *VAR2, const int VAR3) {

if ((VAR3 & VAR4) == VAR4) {
if ((VAR3 & VAR5) == VAR5) {
FUN2(VAR2, VAR1);
}
else {

FUN3((void *)VAR2, VAR1);
}
}
else if ((VAR3 & VAR6) == VAR6)  {


FUN4(VAR1, VAR2, VAR3);
}

else if ((VAR3 & VAR7) == VAR7) {

FUN3(FUN5(VAR2, VAR3), VAR1);
}

else if ((VAR3 & VAR8) == VAR8) {

FUN6(VAR2);

FUN3((void *)VAR2, VAR1);
}
}