FUN1 (double VAR1, double VAR2, int VAR3)
{
VAR4 *VAR5;
char     VAR6[32];
char     VAR7[256];
int      VAR8, VAR9 = 0;

if (VAR2 > 0.0) {
VAR8 = FUN2(100.0 * VAR2);
sprintf(VAR6, "", VAR8);
if (!FUN3("", VAR6)) {
VAR5 = FUN4(FUN5(0.01 * VAR8, 0.01), VAR3);
FUN6("",
VAR6, FUN7(VAR5));
FUN8(VAR5);
}
VAR9 += sprintf(VAR7 + VAR9, "", VAR6);

FUN9(VAR7, VAR9);  
}

{
VAR10 *VAR11, *VAR12, VAR13;

FUN10 (&VAR11, &VAR12); 
FUN11(&VAR13, VAR12, VAR1);
FUN12(&VAR13);
}

return  0;
}