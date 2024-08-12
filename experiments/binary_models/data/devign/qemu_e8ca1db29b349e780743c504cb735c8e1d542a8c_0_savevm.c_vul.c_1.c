void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3[2];
    VAR3[0] = FUN2(FUN3());
    VAR3[1] = FUN2(1ul << FUN4());
    FUN5();
    FUN6(VAR2, VAR4, 16, (VAR5 *)VAR3);
}