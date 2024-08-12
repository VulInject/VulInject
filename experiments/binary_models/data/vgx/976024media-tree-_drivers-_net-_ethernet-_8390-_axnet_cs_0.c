static void FUN1(struct VAR1 *VAR2)
{
long VAR3 = VAR2->VAR4;
unsigned char VAR5 = FUN2(VAR3+VAR6);
unsigned char VAR7 = VAR5 & (VAR8+VAR9);

FUN3(VAR2, "", VAR5);
if (VAR5 & VAR8)
FUN4("");
if (VAR5 & VAR10)
FUN4("");
if (VAR5 & VAR11)
FUN4("");
if (VAR5 & VAR9)
FUN4("");
if (VAR5 & VAR12)
FUN4("");
FUN4("");

if (VAR7)
FUN5(VAR2);
else 
{
VAR2->VAR13.VAR14++;
if (VAR5 & VAR11) VAR2->VAR13.VAR15++;
if (VAR5 & VAR12) VAR2->VAR13.VAR16++;
if (VAR5 & VAR17) VAR2->VAR13.VAR18++;
}
}