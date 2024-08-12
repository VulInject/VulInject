static void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3;
    uint64_t VAR4;
    int VAR5;
    if ((VAR2->VAR6[VAR7] & 0x60) == 0x60)
    {
        FUN2(VAR2->VAR8);
        return;
    }
    VAR4 = FUN3(VAR2) % VAR9;
    VAR3 = FUN4(VAR10) + VAR9 - VAR4;
    VAR5 = FUN5(VAR2);
    VAR2->VAR11 = VAR3 + (VAR5 - 1) * VAR9;
    if (VAR2->VAR6[VAR12] & VAR13)
    {
        if ((VAR2->VAR6[VAR14] & VAR15) || (VAR2->VAR6[VAR12] & VAR16))
        {
            FUN2(VAR2->VAR8);
            return;
        }
        VAR3 = VAR2->VAR11;
    }
    if (VAR3 != FUN6(VAR2->VAR8))
    {
        FUN7(VAR2->VAR8, VAR3);
    }
}