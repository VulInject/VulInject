static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8;
    int64_t VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    uint32_t VAR12, VAR13;
    if (VAR6->VAR14 == 1 && (VAR8 = FUN2(VAR11, 46)) < 0)
        return VAR8;
    VAR12 = FUN3(VAR11);
    VAR13 = FUN4(VAR11);
    switch (VAR13)
    {
    case FUN5('', '', '', ''):
        if (VAR12 != 26)
            return VAR15;
        if ((VAR8 = FUN6(VAR2, VAR6, VAR4)) < 0)
            return VAR8;
        VAR12 = FUN3(VAR11);
        VAR13 = FUN4(VAR11);
        if (VAR12 > 0x7fffffff || VAR13 != FUN5('', '', '', '') && VAR13 != FUN5('', '', '', ''))
            return VAR15;
        VAR9 = 38 + 8 + VAR12 + 4;
        if (VAR9 > VAR16)
            return FUN7(VAR17);
        if ((VAR8 = FUN8(VAR11, -46, VAR18)) < 0 || (VAR8 = FUN9(VAR11, VAR4, VAR9)) < 0)
            return VAR8;
        if (VAR6->VAR14 == 1 && (VAR8 = FUN2(VAR11, 8)) < 0)
            return VAR8;
        VAR12 = FUN3(VAR11);
        VAR13 = FUN4(VAR11);
        while (VAR13 && VAR13 != FUN5('', '', '', '') && VAR13 != FUN5('', '', '', ''))
        {
            if (VAR12 > 0x7fffffff)
                return VAR15;
            if ((VAR8 = FUN8(VAR11, -8, VAR18)) < 0 || (VAR8 = FUN9(VAR11, VAR4, VAR12 + 12)) < 0)
                return VAR8;
            if (VAR6->VAR14 == 1 && (VAR8 = FUN2(VAR11, 8)) < 0)
                return VAR8;
            VAR12 = FUN3(VAR11);
            VAR13 = FUN4(VAR11);
        }
        if ((VAR8 = FUN8(VAR11, -8, VAR18)) < 0)
            return VAR8;
        if (VAR6->VAR19)
            VAR4->VAR20 |= VAR21;
        VAR4->VAR22 = VAR6->VAR23;
        VAR4->VAR24 = VAR6->VAR25;
        VAR6->VAR23 += VAR6->VAR25;
        return FUN10(VAR6, VAR4);
    case FUN5('', '', '', ''):
        VAR6->VAR26++;
        if (VAR6->VAR27 || VAR6->VAR14 >= 1 && VAR6->VAR26 == VAR6->VAR14)
        {
            FUN8(VAR11, -8, VAR18);
            return VAR28;
        }
        if ((VAR8 = FUN8(VAR11, VAR6->VAR29 + 8, VAR30)) < 0)
            return VAR8;
        return FUN10(VAR6, VAR4);
    default:
    {
        char VAR31[32];
        FUN11(VAR31, sizeof(VAR31), VAR13);
        FUN12(VAR2, "" VAR32, VAR31, VAR13, VAR12);
        FUN13(VAR11, VAR12 + 4);
    }
    }
    return VAR33;
}