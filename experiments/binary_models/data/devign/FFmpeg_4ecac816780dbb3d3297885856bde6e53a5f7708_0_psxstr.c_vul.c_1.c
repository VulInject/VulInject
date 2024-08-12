static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    unsigned char VAR10[VAR11];
    int VAR12;
    VAR3 *VAR13;
    VAR14 *VAR15;
    while (1)
    {
        if (FUN2(VAR6, VAR10, VAR11) != VAR11)
            return FUN3(VAR16);
        VAR12 = VAR10[0x11];
        if (VAR12 >= 32)
            return VAR17;
        switch (VAR10[0x12] & VAR18)
        {
        case VAR19:
        case VAR20:
        {
            int VAR21 = FUN4(&VAR10[0x1C]);
            int VAR22 = FUN4(&VAR10[0x1E]);
            int VAR23 = FUN5(&VAR10[0x24]);
            if (!(VAR23 >= 0 && VAR21 < VAR22 && VAR22 * VAR24 >= VAR23))
            {
                FUN6(VAR2, VAR25, "", VAR21, VAR22, VAR23);
                break;
            }
            if (VAR8->VAR26[VAR12].VAR27 < 0)
            {
                VAR15 = FUN7(VAR2, NULL);
                if (!VAR15)
                    return FUN3(VAR28);
                FUN8(VAR15, 64, 1, 15);
                VAR8->VAR26[VAR12].VAR27 = VAR15->VAR29;
                VAR15->VAR30->VAR31 = VAR32;
                VAR15->VAR30->VAR33 = VAR34;
                VAR15->VAR30->VAR35 = 0;
                VAR15->VAR30->VAR36 = FUN4(&VAR10[0x28]);
                VAR15->VAR30->VAR37 = FUN4(&VAR10[0x2A]);
            }
            VAR13 = &VAR8->VAR26[VAR12].VAR38;
            if (VAR13->VAR39 != VAR22 * VAR24)
            {
                if (VAR13->VAR40)
                    FUN6(VAR2, VAR25, "");
                FUN9(VAR13);
                if (FUN10(VAR13, VAR22 * VAR24))
                    return FUN3(VAR16);
                VAR13->VAR41 = FUN11(VAR6) - VAR11;
                VAR13->VAR42 = VAR8->VAR26[VAR12].VAR27;
            }
            memcpy(VAR13->VAR40 + VAR21 * VAR24, VAR10 + VAR43, VAR24);
            if (VAR21 == VAR22 - 1)
            {
                VAR13->VAR39 = VAR23;
                *VAR4 = *VAR13;
                VAR13->VAR40 = NULL;
                VAR13->VAR39 = -1;
                VAR13->VAR44 = NULL;
                FF_DISABLE_DEPRECATION_WARNINGS VAR13->VAR45 = NULL;
                FF_ENABLE_DEPRECATION_WARNINGS return 0;
            }
        }
        break;
        case VAR46:
            if (VAR8->VAR26[VAR12].VAR47 < 0)
            {
                int VAR48 = VAR10[0x13];
                VAR15 = FUN7(VAR2, NULL);
                if (!VAR15)
                    return FUN3(VAR28);
                VAR8->VAR26[VAR12].VAR47 = VAR15->VAR29;
                VAR15->VAR30->VAR31 = VAR49;
                VAR15->VAR30->VAR33 = VAR50;
                VAR15->VAR30->VAR35 = 0;
                if (VAR48 & 1)
                {
                    VAR15->VAR30->VAR26 = 2;
                    VAR15->VAR30->VAR51 = VAR52;
                }
                else
                {
                    VAR15->VAR30->VAR26 = 1;
                    VAR15->VAR30->VAR51 = VAR53;
                }
                VAR15->VAR30->VAR54 = (VAR48 & 4) ? 18900 : 37800;
                VAR15->VAR30->VAR55 = 128;
                FUN8(VAR15, 64, 18 * 224 / VAR15->VAR30->VAR26, VAR15->VAR30->VAR54);
                VAR15->VAR56 = 0;
            }
            VAR13 = VAR4;
            if (FUN10(VAR13, 2304))
                return FUN3(VAR16);
            memcpy(VAR13->VAR40, VAR10 + 24, 2304);
            VAR13->VAR42 = VAR8->VAR26[VAR12].VAR47;
            VAR13->VAR57 = 1;
            return 0;
        default:
            FUN6(VAR2, VAR58, "", VAR10[0x12]);
            break;
        }
        if (FUN12(VAR6))
            return FUN3(VAR16);
    }