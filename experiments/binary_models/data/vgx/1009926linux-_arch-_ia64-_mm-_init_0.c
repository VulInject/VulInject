FUN1 (void)
{
struct VAR1 *VAR1;


VAR1 = FUN2(FUN3(VAR2));
FUN4(VAR1, VAR3, VAR4);
VAR1 = FUN2(FUN3(VAR2 + VAR5));
FUN4(VAR1, VAR3 + VAR5, VAR6);
FUN4(VAR1, VAR3 + VAR7, VAR6);

{
unsigned long VAR8;

for (VAR8 = VAR3 + VAR5;
VAR8 < VAR3 + VAR7;
VAR8 += VAR5)
{
FUN4(FUN5(0), VAR8,
VAR4);
FUN4(FUN5(0), VAR8 + VAR7,
VAR4);
}
}
FUN6();
}