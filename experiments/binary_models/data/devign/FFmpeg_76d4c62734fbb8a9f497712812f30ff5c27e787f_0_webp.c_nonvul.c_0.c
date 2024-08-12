static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    GetByteContext VAR12;
    int VAR13;
    uint32_t VAR14, VAR15;
    int VAR16 = 0;
    VAR10->VAR2 = VAR2;
    VAR10->VAR17 = 0;
    VAR10->VAR18 = 0;
    *VAR4 = 0;
    VAR10->VAR19 = 0;
    FUN2(&VAR12, VAR6->VAR3, VAR6->VAR20);
    if (FUN3(&VAR12) < 12)
        return VAR21;
    if (FUN4(&VAR12) != FUN5('', '', '', ''))
    {
        FUN6(VAR2, VAR22, "");
        return VAR21;
    }
    VAR15 = FUN4(&VAR12);
    if (FUN3(&VAR12) < VAR15)
        return VAR21;
    if (FUN4(&VAR12) != FUN5('', '', '', ''))
    {
        FUN6(VAR2, VAR22, "");
        return VAR21;
    }
    while (FUN3(&VAR12) > 8)
    {
        char VAR23[5] = {0};
        VAR14 = FUN4(&VAR12);
        VAR15 = FUN4(&VAR12);
        if (VAR15 == VAR24)
            return VAR21;
        VAR15 += VAR15 & 1;
        if (FUN3(&VAR12) < VAR15)
            return VAR21;
        switch (VAR14)
        {
        case FUN5('', '', '', ''):
            if (!*VAR4)
            {
                VAR13 = FUN7(VAR2, VAR8, VAR4, VAR6->VAR3 + FUN8(&VAR12), VAR15);
                if (VAR13 < 0)
                    return VAR13;
            }
            FUN9(&VAR12, VAR15);
            break;
        case FUN5('', '', '', ''):
            if (!*VAR4)
            {
                VAR13 = FUN10(VAR2, VAR8, VAR4, VAR6->VAR3 + FUN8(&VAR12), VAR15, 0);
                if (VAR13 < 0)
                    return VAR13;
            }
            FUN9(&VAR12, VAR15);
            break;
        case FUN5('', '', '', ''):
            VAR16 = FUN11(&VAR12);
            FUN9(&VAR12, 3);
            VAR10->VAR17 = FUN12(&VAR12) + 1;
            VAR10->VAR18 = FUN12(&VAR12) + 1;
            VAR13 = FUN13(VAR10->VAR17, VAR10->VAR18, 0, VAR2);
            if (VAR13 < 0)
                return VAR13;
            break;
        case FUN5('', '', '', ''):
        {
            int VAR25, VAR26, VAR27;
            if (!(VAR16 & VAR28))
            {
                FUN6(VAR2, VAR29, ""
                                              "");
            }
            if (VAR15 == 0)
            {
                FUN6(VAR2, VAR22, "");
                return VAR21;
            }
            VAR25 = FUN11(&VAR12);
            VAR10->VAR30 = VAR6->VAR3 + FUN8(&VAR12);
            VAR10->VAR31 = VAR15 - 1;
            FUN9(&VAR12, VAR10->VAR31);
            VAR26 = (VAR25 >> 2) & 0x03;
            VAR27 = VAR25 & 0x03;
            if (VAR27 > VAR32)
            {
                FUN6(VAR2, VAR33, "");
            }
            else
            {
                VAR10->VAR19 = 1;
                VAR10->VAR34 = VAR27;
                VAR10->VAR35 = VAR26;
            }
            break;
        }
        case FUN5('', '', '', ''):
        case FUN5('', '', '', ''):
        case FUN5('', '', '', ''):
        case FUN5('', '', '', ''):
        case FUN5('', '', '', ''):
            FUN14(VAR23, VAR14);
            FUN6(VAR2, VAR33, "", VAR23);
            FUN9(&VAR12, VAR15);
            break;
        default:
            FUN14(VAR23, VAR14);
            FUN6(VAR2, VAR33, "", VAR23);
            FUN9(&VAR12, VAR15);
            break;
        }
    }
    if (!*VAR4)
    {
        FUN6(VAR2, VAR22, "");
        return VAR21;
    }
    return VAR6->VAR20;
}