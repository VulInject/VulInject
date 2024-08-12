static unsigned long FUN1(const struct VAR1 *VAR2)
{
u32 VAR3, VAR4, VAR5, VAR6 = 3;
const unsigned long VAR7[4] = { 2, 4, 13, 26 };

if (FUN2(VAR2, VAR8)) {
VAR5 = FUN3(VAR2, VAR8);
VAR3 = FUN4(VAR2, VAR8);
VAR4 = FUN5(VAR2, VAR8);
VAR6 = (FUN6(VAR2, VAR5) & VAR4) >> VAR3;
if (VAR6 > 3)
VAR6 = 3;
}

return VAR7[VAR6];
}