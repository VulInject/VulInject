static VAR1
FUN1(VAR2 *VAR3)
{
FUN2(FUN3(VAR3), ==, 1);
uint64_t VAR4 = 0, VAR5 = 0;

for (VAR6 *VAR7 = FUN4(&VAR3->VAR8);
VAR7 != NULL && VAR4 < VAR9;
VAR7 = FUN5(&VAR3->VAR8, VAR7)) {
if (VAR7->VAR10 == FUN6(VAR3)) {

continue;
}
VAR5 += VAR7->VAR11;
VAR4++;
}
return ((VAR4 > 0) ? FUN7(VAR5, VAR4) : 0);
}