static void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
uint8_t VAR4 = FUN2(VAR2, VAR3 + VAR5);

VAR4 &= ~VAR6;
FUN3(VAR2, VAR3 + VAR5, VAR4);
FUN4(FUN2(VAR2, VAR3 + VAR5) & VAR6);
}