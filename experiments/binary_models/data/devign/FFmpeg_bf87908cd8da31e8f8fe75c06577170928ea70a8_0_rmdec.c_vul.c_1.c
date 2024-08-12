static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9)
{
    char VAR10[256];
    uint32_t VAR11;
    int VAR12;
    VAR11 = FUN2(VAR4);
    if (VAR11 == 3)
    {
        unsigned VAR13;
        int VAR14 = FUN2(VAR4);
        int64_t VAR15 = FUN3(VAR4);
        FUN4(VAR4, 8);
        VAR13 = FUN2(VAR4);
        FUN4(VAR4, 4);
        FUN5(VAR2, 0);
        if ((VAR15 + VAR14) >= FUN3(VAR4) + 2)
        {
            FUN6(VAR4);
            FUN7(VAR4, VAR10, sizeof(VAR10));
        }
        if ((VAR15 + VAR14) > FUN3(VAR4))
            FUN4(VAR4, VAR14 + VAR15 - FUN3(VAR4));
        if (VAR13)
            VAR6->VAR16->VAR17 = 8LL * VAR13 / 60;
        VAR6->VAR16->VAR18 = 8000;
        VAR6->VAR16->VAR19 = 1;
        VAR6->VAR16->VAR20 = VAR21;
        VAR6->VAR16->VAR22 = VAR23;
        VAR6->VAR16->VAR24 = VAR25;
        VAR8->VAR26 = VAR27;
    }
    else
    {
        int VAR28, VAR29, VAR30, VAR31;
        int VAR32;
        unsigned VAR13;
        FUN4(VAR4, 2);
        FUN8(VAR4);
        FUN8(VAR4);
        FUN2(VAR4);
        FUN8(VAR4);
        VAR28 = FUN2(VAR4);
        VAR8->VAR30 = VAR30 = FUN8(VAR4);
        FUN8(VAR4);
        VAR13 = FUN8(VAR4);
        if (VAR11 == 4)
        {
            if (VAR13)
                VAR6->VAR16->VAR17 = 8LL * VAR13 / 60;
        }
        FUN8(VAR4);
        VAR8->VAR29 = VAR29 = FUN2(VAR4);
        VAR6->VAR16->VAR33 = FUN2(VAR4);
        VAR8->VAR31 = VAR31 = FUN2(VAR4);
        FUN2(VAR4);
        if (VAR11 == 5)
        {
            FUN2(VAR4);
            FUN2(VAR4);
            FUN2(VAR4);
        }
        VAR6->VAR16->VAR18 = FUN2(VAR4);
        FUN8(VAR4);
        VAR6->VAR16->VAR19 = FUN2(VAR4);
        if (VAR11 == 5)
        {
            VAR8->VAR26 = FUN9(VAR4);
            FUN10(VAR4, VAR10, 4);
            VAR10[4] = 0;
        }
        else
        {
            FUN7(VAR4, VAR10, sizeof(VAR10));
            VAR8->VAR26 = FUN11(VAR10);
            FUN7(VAR4, VAR10, sizeof(VAR10));
        }
        VAR6->VAR16->VAR22 = VAR23;
        VAR6->VAR16->VAR34 = FUN11(VAR10);
        VAR6->VAR16->VAR24 = FUN12(VAR35, VAR6->VAR16->VAR34);
        switch (VAR6->VAR16->VAR24)
        {
        case VAR36:
            VAR6->VAR37 = VAR38;
            break;
        case VAR39:
            VAR6->VAR16->VAR40 = 0;
            VAR8->VAR41 = VAR6->VAR16->VAR33;
            VAR6->VAR16->VAR33 = VAR30;
            break;
        case VAR42:
            VAR6->VAR37 = VAR43;
        case VAR44:
        case VAR45:
            if (VAR9)
            {
                VAR32 = 0;
            }
            else
            {
                FUN2(VAR4);
                FUN6(VAR4);
                if (VAR11 == 5)
                    FUN6(VAR4);
                VAR32 = FUN8(VAR4);
                if (VAR32 + VAR46 <= (unsigned)VAR32)
                {
                    FUN13(VAR2, VAR47, "");
                    return -1;
                }
            }
            VAR8->VAR41 = VAR6->VAR16->VAR33;
            if (VAR6->VAR16->VAR24 == VAR45)
            {
                if (VAR28 > 3)
                {
                    FUN13(VAR2, VAR47, "", VAR28);
                    return -1;
                }
                VAR6->VAR16->VAR33 = VAR48[VAR28];
            }
            else
            {
                if (VAR31 <= 0)
                {
                    FUN13(VAR2, VAR47, "");
                    return -1;
                }
                VAR6->VAR16->VAR33 = VAR8->VAR31;
            }
            if ((VAR12 = FUN14(VAR4, VAR6->VAR16, VAR32)) < 0)
                return VAR12;
            break;
        case VAR49:
            FUN2(VAR4);
            FUN6(VAR4);
            if (VAR11 == 5)
                FUN6(VAR4);
            VAR32 = FUN8(VAR4);
            if (VAR32 + VAR46 <= (unsigned)VAR32)
            {
                FUN13(VAR2, VAR47, "");
                return -1;
            }
            if (VAR32 >= 1)
            {
                FUN6(VAR4);
                if ((VAR12 = FUN14(VAR4, VAR6->VAR16, VAR32 - 1)) < 0)
                    return VAR12;
            }
            break;
        default:
            FUN15(VAR6->VAR16->VAR50, VAR10, sizeof(VAR6->VAR16->VAR50));
        }
        if (VAR8->VAR26 == VAR51 || VAR8->VAR26 == VAR52 || VAR8->VAR26 == VAR53)
        {
            if (VAR6->VAR16->VAR33 <= 0 || VAR8->VAR41 * VAR29 > (unsigned)VAR54 || VAR8->VAR41 * VAR29 < VAR6->VAR16->VAR33)
                return VAR55;
            if (FUN16(&VAR8->VAR56, VAR8->VAR41 * VAR29) < 0)
                return FUN17(VAR57);
        }
        switch (VAR8->VAR26)
        {
        case VAR51:
            if (VAR8->VAR30 > VAR8->VAR41 || VAR29 <= 1 || VAR8->VAR30 * VAR29 > (2 + (VAR29 & 1)) * VAR8->VAR41)
                return VAR55;
            break;
        case VAR52:
            if (VAR8->VAR31 <= 0 || VAR8->VAR31 > VAR8->VAR41)
                return VAR55;
            break;
        case VAR53:
        case VAR27:
        case VAR58:
        case VAR59:
            break;
        default:
            FUN13(VAR2, VAR47, "", VAR8->VAR26);
            return VAR55;
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