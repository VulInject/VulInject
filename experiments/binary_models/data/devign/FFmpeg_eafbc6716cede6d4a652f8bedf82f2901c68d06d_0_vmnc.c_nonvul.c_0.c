static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR7 *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    if ((VAR26 = FUN2(VAR2, VAR12->VAR27)) < 0)
    {
        FUN3(VAR2, VAR28, "");
        return VAR26;
    }
    FUN4(VAR15, VAR8, VAR9);
    VAR12->VAR27->VAR29 = 0;
    VAR12->VAR27->VAR30 = VAR31;
    if (VAR12->VAR32)
    {
        int VAR33;
        VAR19 = VAR12->VAR34;
        if (VAR12->VAR35 < VAR12->VAR36 + VAR19)
            VAR19 = VAR12->VAR35 - VAR12->VAR36;
        VAR20 = VAR12->VAR37;
        if (VAR12->VAR38 < VAR12->VAR39 + VAR20)
            VAR20 = VAR12->VAR38 - VAR12->VAR39;
        VAR17 = VAR12->VAR36;
        if (VAR17 < 0)
        {
            VAR19 += VAR17;
            VAR17 = 0;
        }
        VAR18 = VAR12->VAR39;
        if (VAR18 < 0)
        {
            VAR20 += VAR18;
            VAR18 = 0;
        }
        if ((VAR19 > 0) && (VAR20 > 0))
        {
            VAR16 = VAR12->VAR27->VAR3[0] + VAR17 * VAR12->VAR40 + VAR18 * VAR12->VAR27->VAR41[0];
            for (VAR33 = 0; VAR33 < VAR20; VAR33++)
            {
                memcpy(VAR16, VAR12->VAR32 + VAR33 * VAR12->VAR34 * VAR12->VAR40, VAR19 * VAR12->VAR40);
                VAR16 += VAR12->VAR27->VAR41[0];
            }
        }
    }
    FUN5(VAR15, 2);
    VAR23 = FUN6(VAR15);
    while (VAR23--)
    {
        VAR17 = FUN6(VAR15);
        VAR18 = FUN6(VAR15);
        VAR19 = FUN6(VAR15);
        VAR20 = FUN6(VAR15);
        VAR22 = FUN7(VAR15);
        VAR16 = VAR12->VAR27->VAR3[0] + VAR17 * VAR12->VAR40 + VAR18 * VAR12->VAR27->VAR41[0];
        VAR25 = FUN8(VAR15);
        switch (VAR22)
        {
        case VAR42:
            if (VAR25 < 2 + VAR19 * VAR20 * VAR12->VAR40 * 2)
            {
                FUN3(VAR2, VAR28, "", 2 + VAR19 * VAR20 * VAR12->VAR40 * 2, VAR25);
                return VAR43;
            }
            FUN5(VAR15, 2);
            VAR12->VAR34 = VAR19;
            VAR12->VAR37 = VAR20;
            VAR12->VAR44 = VAR17;
            VAR12->VAR45 = VAR18;
            if ((VAR12->VAR44 > VAR12->VAR34) || (VAR12->VAR45 > VAR12->VAR37))
            {
                FUN3(VAR2, VAR28, ""
                                            "",
                       VAR12->VAR44, VAR12->VAR45, VAR12->VAR34, VAR12->VAR37);
                VAR12->VAR44 = VAR12->VAR45 = 0;
            }
            if (VAR12->VAR34 * VAR12->VAR37 >= VAR46 / VAR12->VAR40)
            {
                FUN9(VAR12);
                return FUN10(VAR47);
            }
            else
            {
                int VAR48 = VAR12->VAR34 * VAR12->VAR37 * VAR12->VAR40;
                if ((VAR26 = FUN11(&VAR12->VAR49, VAR48)) < 0 || (VAR26 = FUN11(&VAR12->VAR50, VAR48)) < 0 || (VAR26 = FUN11(&VAR12->VAR32, VAR48)) < 0)
                {
                    FUN9(VAR12);
                    return VAR26;
                }
            }
            FUN12(VAR12);
            break;
        case VAR51:
            FUN5(VAR15, 2);
            break;
        case VAR52:
            VAR12->VAR36 = VAR17 - VAR12->VAR44;
            VAR12->VAR39 = VAR18 - VAR12->VAR45;
            break;
        case VAR53:
            FUN5(VAR15, 10);
            break;
        case VAR54:
            FUN5(VAR15, 4);
            break;
        case VAR55:
            VAR12->VAR27->VAR29 = 1;
            VAR12->VAR27->VAR30 = VAR56;
            VAR21 = FUN13(VAR15);
            if (VAR21 != VAR12->VAR57)
            {
                FUN3(VAR2, VAR58, ""
                                              "",
                       VAR12->VAR57, VAR21);
                if (VAR21 != 8 && VAR21 != 16 && VAR21 != 32)
                {
                    FUN3(VAR2, VAR28, "", VAR21);
                    return VAR43;
                }
                VAR12->VAR57 = VAR21;
                VAR12->VAR40 = VAR12->VAR57 / 8;
            }
            FUN5(VAR15, 1);
            VAR12->VAR59 = FUN13(VAR15);
            if (VAR12->VAR59 & (~1))
            {
                FUN3(VAR2, VAR60, "", VAR12->VAR59);
                return VAR43;
            }
            FUN5(VAR15, 13);
            break;
        case VAR61:
            FUN5(VAR15, 2);
            break;
        case 0x00000000:
            if ((VAR17 + VAR19 > VAR12->VAR35) || (VAR18 + VAR20 > VAR12->VAR38))
            {
                FUN3(VAR2, VAR28, "", VAR19, VAR20, VAR17, VAR18, VAR12->VAR35, VAR12->VAR38);
                return VAR43;
            }
            if (VAR25 < VAR19 * VAR20 * VAR12->VAR40)
            {
                FUN3(VAR2, VAR28, "", VAR19 * VAR20 * VAR12->VAR40, VAR25);
                return VAR43;
            }
            FUN14(VAR16, VAR19, VAR20, VAR15, VAR12->VAR40, VAR12->VAR59, VAR12->VAR27->VAR41[0]);
            break;
        case 0x00000005:
            if ((VAR17 + VAR19 > VAR12->VAR35) || (VAR18 + VAR20 > VAR12->VAR38))
            {
                FUN3(VAR2, VAR28, "", VAR19, VAR20, VAR17, VAR18, VAR12->VAR35, VAR12->VAR38);
                return VAR43;
            }
            VAR24 = FUN15(VAR12, VAR16, VAR15, VAR19, VAR20, VAR12->VAR27->VAR41[0]);
            if (VAR24 < 0)
                return VAR24;
            break;
        default:
            FUN3(VAR2, VAR28, "", VAR22);
            VAR23 = 0;
        }
    }
    if (VAR12->VAR32)
    {
        int VAR33;
        VAR19 = VAR12->VAR34;
        if (VAR12->VAR35 < VAR12->VAR36 + VAR19)
            VAR19 = VAR12->VAR35 - VAR12->VAR36;
        VAR20 = VAR12->VAR37;
        if (VAR12->VAR38 < VAR12->VAR39 + VAR20)
            VAR20 = VAR12->VAR38 - VAR12->VAR39;
        VAR17 = VAR12->VAR36;
        if (VAR17 < 0)
        {
            VAR19 += VAR17;
            VAR17 = 0;
        }
        VAR18 = VAR12->VAR39;
        if (VAR18 < 0)
        {
            VAR20 += VAR18;
            VAR18 = 0;
        }
        if ((VAR19 > 0) && (VAR20 > 0))
        {
            VAR16 = VAR12->VAR27->VAR3[0] + VAR17 * VAR12->VAR40 + VAR18 * VAR12->VAR27->VAR41[0];
            for (VAR33 = 0; VAR33 < VAR20; VAR33++)
            {
                memcpy(VAR12->VAR32 + VAR33 * VAR12->VAR34 * VAR12->VAR40, VAR16, VAR19 * VAR12->VAR40);
                VAR16 += VAR12->VAR27->VAR41[0];
            }
            VAR16 = VAR12->VAR27->VAR3[0];
            FUN16(VAR16, VAR12->VAR27->VAR41[0], VAR12, VAR12->VAR36, VAR12->VAR39);
        }
    }
    *VAR4 = 1;
    if ((VAR26 = FUN17(VAR3, VAR12->VAR27)) < 0)
        return VAR26;
    return VAR9;
}