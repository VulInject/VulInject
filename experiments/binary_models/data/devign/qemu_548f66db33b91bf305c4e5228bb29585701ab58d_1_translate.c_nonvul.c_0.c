static void FUN1(VAR1 *VAR2, int32_t VAR3, uint32_t VAR4, int VAR5, TCGv VAR6)
{
    unsigned int VAR7 = FUN2(VAR4, 3, 6), VAR8 = (VAR4 & (1 << 29));
    target_ulong VAR9 = VAR2->VAR10 + VAR3;
    if (VAR7 == 0x0)
    {
        if (VAR8)
        {
            VAR2->VAR10 = VAR2->VAR11 + 4;
            VAR2->VAR11 = VAR2->VAR10 + 4;
        }
        else
        {
            VAR2->VAR10 = VAR2->VAR11;
            VAR2->VAR11 = VAR2->VAR10 + 4;
        }
    }
    else if (VAR7 == 0x8)
    {
        if (VAR8)
        {
            VAR2->VAR10 = VAR9;
            VAR2->VAR11 = VAR2->VAR10 + 4;
        }
        else
        {
            VAR2->VAR10 = VAR2->VAR11;
            VAR2->VAR11 = VAR9;
            FUN3(VAR12, VAR13);
        }
    }
    else
    {
        FUN4(VAR2, VAR6);
        FUN5(VAR6, VAR5, VAR7);
        if (VAR8)
        {
            FUN6(VAR2, VAR9, VAR2->VAR11, VAR6);
            VAR2->VAR14 = 1;
        }
        else
        {
            VAR2->VAR10 = VAR2->VAR11;
            VAR2->VAR15[0] = VAR9;
            if (FUN7(VAR2->VAR11 == VAR16))
            {
                VAR2->VAR15[1] = VAR16;
                FUN8(VAR12, VAR13, 4);
            }
            else
            {
                VAR2->VAR15[1] = VAR2->VAR11 + 4;
                VAR2->VAR11 = VAR17;
            }
        }
    }
}