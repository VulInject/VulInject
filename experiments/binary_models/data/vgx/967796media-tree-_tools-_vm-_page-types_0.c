static void FUN1(unsigned long VAR1, uint64_t VAR2)
{
uint64_t VAR3 = FUN2(0, VAR2);

if (!FUN3(VAR3))
return;

if (VAR4)
return;

if (VAR5 == 1)
FUN4(VAR1, FUN5(VAR2), 1, VAR3, 0);
else if (VAR5 == 2)
FUN6(VAR1, FUN5(VAR2), VAR3, 0);

VAR6[FUN7(VAR3)]++;
VAR7++;
}