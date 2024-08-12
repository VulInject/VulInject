unsigned long FUN1(u32 VAR1, VAR2 *VAR3)
{
u32 VAR4, VAR5;
unsigned long VAR6, VAR7;

VAR5 = FUN2(VAR1);
VAR4 = FUN3(VAR5);
VAR6 = FUN4(VAR8, VAR4);
VAR7 = VAR6;

if (VAR6) {
while (VAR5 > 0) {
FUN5(FUN6((void *)VAR7));
VAR7 += VAR9;
VAR5 -= VAR9;
}
}
*VAR3 = (VAR2) FUN7((void *) VAR6);
return VAR6;
}