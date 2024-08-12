static void FUN1(void)
{
VAR1 *VAR2 = FUN2();
VAR1 *VAR3 = FUN3(42);
char *VAR4 = (char *)FUN4((const unsigned char *)"", &VAR5);

FUN5(VAR2);
FUN5(VAR3);
FUN5(VAR4);

VAR3->VAR6 = VAR4;


FUN6(VAR2, VAR3->VAR6, VAR3);

FUN7(VAR2);
}