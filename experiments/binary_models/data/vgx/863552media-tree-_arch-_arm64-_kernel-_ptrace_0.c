static int FUN1(unsigned int VAR1,
struct VAR2 *VAR3,
unsigned long VAR4,
VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR1, VAR3, VAR4);

if (FUN3(VAR8))
return FUN4(VAR8);

*VAR6 = VAR8 ? FUN5(FUN6(VAR8)->VAR6) : 0;
return 0;
}