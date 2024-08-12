int
FUN1(void)
{
struct VAR1		*VAR1;


FUN2(VAR1, &VAR2, VAR2, VAR3) {
if (FUN3(VAR1) == 0) {
FUN4(VAR1);
return 0;
}
}


VAR1 = FUN5(&VAR2, VAR2);
if (VAR1 != NULL) {
FUN4(VAR1);
return 0;
}

return -1;
}