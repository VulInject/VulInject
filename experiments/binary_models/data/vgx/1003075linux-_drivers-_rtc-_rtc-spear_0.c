static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
unsigned long VAR6 = 0;
unsigned int VAR7;

FUN2(&VAR5->VAR8);
VAR7 = FUN3(VAR5->VAR9 + VAR10);
FUN4(&VAR5->VAR8);

if ((VAR7 & VAR11)) {
FUN5(VAR5);
VAR6 = VAR12 | VAR13;
FUN6(VAR5->VAR14, 1, VAR6);
return VAR15;
} else
return VAR16;

}