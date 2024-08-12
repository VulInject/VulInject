static void FUN1(void)
{
if(VAR1 != NULL) {
(*VAR1)->FUN2(VAR1, VAR2);
(*VAR1)->FUN2(VAR1, VAR3);
}

if(VAR4 != NULL) {
(*VAR4)->FUN3(VAR4);
(*VAR4)->FUN4(VAR4);
}

if(VAR5) {
FUN5(VAR5);
}
}