bool
FUN1(VAR1* VAR2, bool VAR3, bool VAR4)
{
int             VAR5 = 0x0;
VAR6* VAR7;
VAR6* VAR8;

if (!VAR3 && !VAR4)  
return true;
FUN2(VAR2);
if (!(VAR7 = FUN3(VAR2->VAR9, VAR2->VAR10)))
return false;
VAR8 = FUN4();
FUN5(VAR7);
if (VAR3)
VAR5 |= VAR11;
if (VAR4)
VAR5 |= VAR12;
FUN6(VAR2->VAR13, 0, 0, VAR5);
FUN5(VAR8);
FUN7(VAR2->VAR13);
VAR2->VAR13 = VAR7;
return true;
}