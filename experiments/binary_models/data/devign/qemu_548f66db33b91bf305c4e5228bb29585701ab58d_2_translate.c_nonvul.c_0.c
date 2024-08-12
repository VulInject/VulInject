static void FUN1(VAR1 *VAR2, int32_t VAR3, uint32_t VAR4, TCGv VAR5, TCGv VAR6)
{
    unsigned int VAR7 = FUN2(VAR4, 25, 27), VAR8 = (VAR4 & (1 << 29));
    target_ulong VAR9 = VAR2->VAR10 + VAR3;
    FUN3(VAR2, VAR5);
    FUN4(VAR5, VAR7, VAR6);
    if (VAR8)
    {
        FUN5(VAR2, VAR9, VAR2->VAR11, VAR5);
        VAR2->VAR12 = 1;
    }
    else
    {
        VAR2->VAR10 = VAR2->VAR11;
        VAR2->VAR13[0] = VAR9;
        if (FUN6(VAR2->VAR11 == VAR14))
        {
            VAR2->VAR13[1] = VAR14;
            FUN7(VAR15, VAR16, 4);
        }
        else
        {
            VAR2->VAR13[1] = VAR2->VAR11 + 4;
            VAR2->VAR11 = VAR17;
        }
    }
}