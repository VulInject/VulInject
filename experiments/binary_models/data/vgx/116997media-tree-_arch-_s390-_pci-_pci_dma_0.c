void FUN1(unsigned long *VAR1, void *VAR2, int VAR3)
{
if (VAR3 & VAR4) {
FUN2(VAR1);
} else {
FUN3(VAR1, VAR2);
FUN4(VAR1);
}

if (VAR3 & VAR5)
FUN5(VAR1);
else
FUN6(VAR1);
}