static void
FUN1()
{
unsigned char *VAR1;
int VAR2;

if (VAR3 == VAR4)
return;


FUN2();
if (VAR5 > 0 && VAR6)
FUN3();
if (VAR7 && VAR8)
FUN4((unsigned char *)VAR7);
FUN5(FUN6(""), 0);
if (VAR7 && VAR8)
FUN4((unsigned char *)VAR8);


VAR1 = VAR9;
VAR9 = 0; 
FUN7();
VAR9 = VAR1;


VAR3 = VAR4;


VAR2 = VAR10;
VAR10 = 0;
FUN8();
FUN9(0, VAR11);
FUN10(VAR12);
VAR10 = VAR2;
}