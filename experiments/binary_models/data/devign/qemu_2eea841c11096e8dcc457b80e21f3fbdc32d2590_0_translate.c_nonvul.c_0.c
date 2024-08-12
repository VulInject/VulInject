static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7);
    VAR8 *VAR9 = VAR4->VAR10;
    uint32_t VAR11;
    bool VAR12;
    if (FUN3(VAR6))
    {
        return;
    }
    VAR11 = FUN4(VAR9, VAR6->VAR13, VAR6->VAR14);
    VAR12 = FUN5(VAR6, VAR11);
    VAR6->VAR13 += 2;
    if (!VAR12)
    {
        uint32_t VAR15 = FUN4(VAR9, VAR6->VAR13, VAR6->VAR14);
        VAR11 = VAR11 << 16 | VAR15;
        VAR6->VAR13 += 2;
    }
    VAR6->VAR11 = VAR11;
    if (VAR6->VAR16 && !FUN6(VAR6, VAR11))
    {
        uint32_t VAR17 = VAR6->VAR18;
        if (VAR17 != 0x0e)
        {
            VAR6->VAR19 = FUN7();
            FUN8(VAR17 ^ 1, VAR6->VAR19);
            VAR6->VAR20 = 1;
        }
    }
    if (VAR12)
    {
        FUN9(VAR6, VAR11);
    }
    else
    {
        FUN10(VAR6, VAR11);
    }
    if (VAR6->VAR16)
    {
        VAR6->VAR18 = ((VAR6->VAR18 & 0xe) | ((VAR6->VAR16 >> 4) & 1));
        VAR6->VAR16 = (VAR6->VAR16 << 1) & 0x1f;
        if (VAR6->VAR16 == 0)
        {
            VAR6->VAR18 = 0;
        }
    }
    FUN11(VAR6);
    if (VAR6->VAR7.VAR21 == VAR22 && (VAR6->VAR13 >= VAR6->VAR23 || (VAR6->VAR13 >= VAR6->VAR23 - 3 && FUN12(VAR9, VAR6))))
    {
        VAR6->VAR7.VAR21 = VAR24;
    }
}