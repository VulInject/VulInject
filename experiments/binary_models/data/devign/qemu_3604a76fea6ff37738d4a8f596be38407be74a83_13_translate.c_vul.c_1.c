static inline void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    if (FUN2(FUN3(VAR4 | VAR5)))
    {
        FUN4(VAR2->VAR6);
    }
    VAR2->VAR3 = VAR3;
    FUN5("", VAR2->VAR3);
    if (VAR2->VAR3)
    {
        VAR2->VAR7 = 0;
    }
    else
    {
        FUN5("", VAR2->VAR7);
        VAR2->VAR7++;
        if (VAR2->VAR7 > 4)
        {
            FUN6(VAR2->VAR8, "");
        }
    }
    VAR2->VAR9 = FUN7(VAR3, 26, 31);
    VAR2->VAR10 = FUN7(VAR3, 0, 4);
    VAR2->VAR11 = FUN7(VAR3, 0, 15);
    VAR2->VAR12 = FUN7(VAR3, 0, 25);
    VAR2->VAR13 = FUN7(VAR3, 21, 25);
    VAR2->VAR14 = FUN7(VAR3, 21, 25);
    VAR2->VAR15 = FUN7(VAR3, 16, 20);
    VAR2->VAR16 = FUN7(VAR3, 11, 15);
    if (VAR3 & (1 << 31))
    {
        VAR2->VAR17 = VAR18;
    }
    else
    {
        VAR2->VAR17 = VAR19;
    }
    assert(FUN8(VAR20) == 64);
    assert(VAR2->VAR9 < 64);
    VAR20[VAR2->VAR9](VAR2);
}