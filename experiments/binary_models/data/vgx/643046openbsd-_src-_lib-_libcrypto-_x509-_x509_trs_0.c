}
FUN1(VAR1);

int
FUN2(VAR2 *VAR3, int VAR4, int VAR5)
{
VAR6 *VAR7;
int VAR8;

if (VAR4 == -1)
return 1;

if (VAR4 == 0) {
int VAR9;
VAR9 = FUN3(VAR10, VAR3, 0);
if (VAR9 != VAR11)
return VAR9;
return FUN4(NULL, VAR3, 0);
}
VAR8 = FUN5(VAR4);
if (VAR8 == -1)
return FUN6(VAR4, VAR3, VAR5);
VAR7 = FUN7(VAR8);
return VAR7->FUN8(VAR7, VAR3, VAR5);
}