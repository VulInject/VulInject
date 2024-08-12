void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    uint64_t VAR5 = VAR2->VAR6.VAR3;
    VAR2->VAR6.VAR4 = VAR4;
    VAR2->VAR6.VAR3 = VAR3;
    if (FUN2())
    {
        VAR2->VAR7 = (VAR3 >> 44) & 3;
    }
    if ((VAR5 ^ VAR3) & VAR8)
    {
        FUN3(FUN4(FUN5(VAR2)));
    }
    if (VAR3 & VAR9)
    {
        VAR10 *VAR11 = FUN5(VAR2);
        if (FUN6(VAR11) == 0)
        {
            FUN7(VAR12);
        }
    }
}