static void FUN1(VAR1 *VAR2, float64 VAR3, float64 VAR4, float64 VAR5, unsigned int VAR6)
{
    if (FUN2(FUN3(VAR3, &VAR2->VAR7) || FUN3(VAR4, &VAR2->VAR7) || FUN3(VAR5, &VAR2->VAR7)))
    {
        FUN4(VAR2, VAR8, 1);
    }
    if (FUN2((FUN5(VAR3) && FUN6(VAR4)) || (FUN6(VAR3) && FUN5(VAR4))))
    {
        FUN4(VAR2, VAR9, 1);
    }
    if ((FUN5(VAR3) || FUN5(VAR4)) && FUN5(VAR5))
    {
        uint8_t VAR10, VAR11, VAR12;
        VAR10 = FUN7(VAR3);
        VAR11 = FUN7(VAR4);
        VAR12 = FUN7(VAR5);
        if (VAR6 & VAR13)
        {
            VAR12 ^= 1;
        }
        if (VAR10 ^ VAR11 ^ VAR12)
        {
            FUN4(VAR2, VAR14, 1);
        }
    }
}