static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9)
{
    char VAR10[256];
    uint32_t VAR11;
    int VAR12;
    VAR11 = FUN2(VAR4);
    if (VAR11 == 3)
    {
        int VAR13 = FUN2(VAR4);
        int64_t VAR14 = FUN3(VAR4);
        FUN4(VAR4, 14);
        FUN5(VAR2, 0);
        if ((VAR14 + VAR13) >= FUN3(VAR4) + 2)
        {
            FUN6(VAR4);
            FUN7(VAR4, VAR10, sizeof(VAR10));
        }
        if ((VAR14 + VAR13) > FUN3(VAR4))
            FUN4(VAR4, VAR13 + VAR14 - FUN3(VAR4));
        VAR6->VAR15->VAR16 = 8000;
        VAR6->VAR15->VAR17 = 1;
        VAR6->VAR15->VAR18 = VAR19;
        VAR6->VAR15->VAR20 = VAR21;
        VAR8->VAR22 = VAR23;
    }
    else
    {
        int VAR24, VAR25, VAR26, VAR27;
        int VAR28;
        FUN4(VAR4, 2);
        FUN8(VAR4);
        FUN8(VAR4);
        FUN2(VAR4);
        FUN8(VAR4);
        VAR24 = FUN2(VAR4);
        VAR8->VAR26 = VAR26 = FUN8(VAR4);
        FUN8(VAR4);
        FUN8(VAR4);
        FUN8(VAR4);
        VAR8->VAR25 = VAR25 = FUN2(VAR4);
        VAR6->VAR15->VAR29 = FUN2(VAR4);
        VAR8->VAR27 = VAR27 = FUN2(VAR4);
        FUN2(VAR4);
        if (VAR11 == 5)
        {
            FUN2(VAR4);
            FUN2(VAR4);
            FUN2(VAR4);
        }
        VAR6->VAR15->VAR16 = FUN2(VAR4);
        FUN8(VAR4);
        VAR6->VAR15->VAR17 = FUN2(VAR4);
        if (VAR11 == 5)
        {
            VAR8->VAR22 = FUN9(VAR4);
            FUN10(VAR4, VAR10, 4);
            VAR10[4] = 0;
        }
        else
        {
            FUN7(VAR4, VAR10, sizeof(VAR10));
            VAR8->VAR22 = FUN11(VAR10);
            FUN7(VAR4, VAR10, sizeof(VAR10));
        }
        VAR6->VAR15->VAR18 = VAR19;
        VAR6->VAR15->VAR30 = FUN11(VAR10);
        VAR6->VAR15->VAR20 = FUN12(VAR31, VAR6->VAR15->VAR30);
        switch (VAR8->VAR22)
        {
        case VAR32:
        case VAR23:
        case VAR33:
        case VAR34:
        case VAR35:
        case VAR36:
            break;
        default:
            FUN13(NULL, 0, "", VAR8->VAR22);
            return VAR37;
        }
        switch (VAR6->VAR15->VAR20)
        {
        case VAR38:
            VAR6->VAR39 = VAR40;
            break;
        case VAR41:
            VAR6->VAR15->VAR42 = 0;
            VAR8->VAR43 = VAR6->VAR15->VAR29;
            VAR6->VAR15->VAR29 = VAR26;
            if (VAR8->VAR43 <= 0 || VAR25 <= 0 || VAR8->VAR43 >= VAR44 / VAR25)
            {
                FUN13(VAR2, VAR45, "");
                return -1;
            }
            FUN14(&VAR8->VAR46, VAR8->VAR43 * VAR25);
            break;
        case VAR47:
        case VAR48:
        case VAR49:
            FUN2(VAR4);
            FUN6(VAR4);
            if (VAR11 == 5)
                FUN6(VAR4);
            VAR28 = FUN8(VAR4);
            if (VAR28 + VAR50 <= (unsigned)VAR28)
            {
                FUN13(VAR2, VAR45, "");
                return -1;
            }
            VAR8->VAR43 = VAR6->VAR15->VAR29;
            if (VAR6->VAR15->VAR20 == VAR49)
            {
                if (VAR24 > 3)
                {
                    FUN13(VAR2, VAR45, "", VAR24);
                    return -1;
                }
                VAR6->VAR15->VAR29 = VAR51[VAR24];
            }
            else
            {
                if (VAR27 <= 0)
                {
                    FUN13(VAR2, VAR45, "");
                    return -1;
                }
                VAR6->VAR15->VAR29 = VAR8->VAR27;
            }
            if ((VAR12 = FUN15(VAR4, VAR6->VAR15, VAR28)) < 0)
                return VAR12;
            if (VAR8->VAR43 <= 0 || VAR25 <= 0 || VAR8->VAR43 >= VAR44 / VAR25)
            {
                FUN13(VAR2, VAR45, "");
                return -1;
            }
            FUN14(&VAR8->VAR46, VAR8->VAR43 * VAR25);
            break;
        case VAR52:
            FUN2(VAR4);
            FUN6(VAR4);
            if (VAR11 == 5)
                FUN6(VAR4);
            VAR28 = FUN8(VAR4);
            if (VAR28 + VAR50 <= (unsigned)VAR28)
            {
                FUN13(VAR2, VAR45, "");
                return -1;
            }
            if (VAR28 >= 1)
            {
                FUN6(VAR4);
                if ((VAR12 = FUN15(VAR4, VAR6->VAR15, VAR28 - 1)) < 0)
                    return VAR12;
            }
            break;
        default:
            FUN16(VAR6->VAR15->VAR53, VAR10, sizeof(VAR6->VAR15->VAR53));
        }
        if (VAR9)
        {
            FUN6(VAR4);
            FUN6(VAR4);
            FUN6(VAR4);
            FUN5(VAR2, 0);
        }
    }
    return 0;
}