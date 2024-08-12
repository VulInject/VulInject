static inline void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    if (FUN2(FUN3(VAR4)))
    {
        FUN4(VAR2->VAR5);
    }
    VAR2->VAR3 = VAR3 = FUN5(VAR2->VAR5);
    FUN6("", VAR2->VAR3);
    if (VAR2->VAR3)
    {
        VAR2->VAR6 = 0;
    }
    else
    {
        FUN6("", VAR2->VAR6);
        VAR2->VAR6++;
        if (VAR2->VAR6 > 4)
        {
            FUN7(VAR2->VAR7, "");
        }
    }
    VAR2->VAR8 = FUN8(VAR3, 26, 31);
    VAR2->VAR9 = FUN8(VAR3, 0, 4);
    VAR2->VAR10 = FUN8(VAR3, 0, 15);
    VAR2->VAR11 = FUN8(VAR3, 0, 25);
    VAR2->VAR12 = FUN8(VAR3, 21, 25);
    VAR2->VAR13 = FUN8(VAR3, 21, 25);
    VAR2->VAR14 = FUN8(VAR3, 16, 20);
    VAR2->VAR15 = FUN8(VAR3, 11, 15);
    if (VAR3 & (1 << 31))
    {
        VAR2->VAR16 = VAR17;
    }
    else
    {
        VAR2->VAR16 = VAR18;
    }
    assert(FUN9(VAR19) == 64);
    assert(VAR2->VAR8 < 64);
    VAR19[VAR2->VAR8](VAR2);
}