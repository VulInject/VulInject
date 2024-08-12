static unsigned short FUN1(struct VAR1 *VAR2,
unsigned short VAR3)
{
unsigned short VAR4;
unsigned int VAR5, VAR6;

for (VAR5 = VAR7; VAR5; VAR5--) {

FUN2();
FUN3(VAR8) &= ~(VAR9);
FUN3(VAR10) = (VAR3 << VAR11) | VAR12;
FUN4();

for (VAR6 = VAR13;
VAR6 && !(FUN3(VAR8) & VAR9);
--VAR6)
FUN5(1);

FUN3(VAR8) &= ~VAR9;
VAR4 = 0;
if (FUN6(VAR2, VAR3, &VAR4) != 0)
break;
}

return VAR5 ? VAR4 : ~0;
}