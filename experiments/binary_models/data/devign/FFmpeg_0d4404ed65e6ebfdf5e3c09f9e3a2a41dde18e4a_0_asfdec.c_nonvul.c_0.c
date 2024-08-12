static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    uint32_t VAR8, VAR9;
    int VAR10 = 8;
    int VAR11, VAR12, VAR13, VAR14;
    VAR14 = 32768;
    if (VAR2->VAR15 > 0)
        VAR14 = (FUN2(VAR4) - VAR2->VAR16) % VAR2->VAR15 + 3;
    VAR11 = VAR12 = VAR13 = -1;
    while (VAR14-- > 0)
    {
        VAR11 = VAR12;
        VAR12 = VAR13;
        VAR13 = FUN3(VAR4);
        if (VAR11 == 0x82 && !VAR12 && !VAR13)
            break;
    }
    if (VAR11 != 0x82)
    {
        if (VAR4->VAR17 == FUN4(VAR18))
            return FUN4(VAR18);
        if (!FUN5(VAR4))
            FUN6(VAR2, VAR19, "" VAR20 "", VAR11, FUN2(VAR4));
    }
    if ((VAR11 & 0x8f) == 0x82)
    {
        if (VAR12 || VAR13)
        {
            if (!FUN5(VAR4))
                FUN6(VAR2, VAR19, "");
            return -1;
        }
        VAR11 = FUN3(VAR4);
        VAR12 = FUN3(VAR4);
        VAR10 += 3;
    }
    else if (!FUN5(VAR4))
    {
        FUN7(VAR4, -1, VAR21);
    }
    VAR6->VAR22 = VAR11;
    VAR6->VAR23 = VAR12;
    FUN8(VAR6->VAR22 >> 5, VAR8, VAR2->VAR15);
    FUN8(VAR6->VAR22 >> 1, VAR9, 0);
    FUN8(VAR6->VAR22 >> 3, VAR9, 0);
    if (!VAR8 || VAR8 >= (1U << 29))
    {
        FUN6(VAR2, VAR19, "" VAR20 "", VAR8, FUN2(VAR4));
        return -1;
    }
    if (VAR9 >= VAR8)
    {
        FUN6(VAR2, VAR19, "" VAR20 "", VAR9, FUN2(VAR4));
        return -1;
    }
    VAR6->VAR24 = FUN9(VAR4);
    FUN10(VAR4);
    if (VAR6->VAR22 & 0x01)
    {
        VAR6->VAR25 = FUN3(VAR4);
        VAR10++;
        VAR6->VAR26 = VAR6->VAR25 & 0x3f;
    }
    else
    {
        VAR6->VAR26 = 1;
        VAR6->VAR25 = 0x80;
    }
    VAR6->VAR27 = VAR8 - VAR9 - VAR10;
    if (VAR8 < VAR6->VAR28.VAR29)
        VAR9 += VAR6->VAR28.VAR29 - VAR8;
    VAR6->VAR30 = VAR9;
    FUN11(VAR2, "", VAR2->VAR15, VAR6->VAR30, VAR6->VAR27);
    return 0;
}