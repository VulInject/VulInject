static int FUN1(int VAR1)
{
VAR2 *VAR3;

if (VAR1==VAR4 || VAR1==VAR5 || VAR1==VAR6)
return 0; 

VAR7 = FUN2("");
if (!VAR7) goto VAR8;
if (FUN3(VAR7, VAR9) < 0) goto VAR8;
if (FUN4(VAR7) < 0) goto VAR8;


VAR3 = VAR10;
while (VAR3) {
if (FUN5(VAR3) < 0) {
FUN6("");
return -1;
}
VAR3 = VAR3->VAR11;
}

return 0;

VAR8:

if (VAR7) {
VAR7 = NULL;
FUN7(VAR7);
}

FUN6("");
return -1;
}