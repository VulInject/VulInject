static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    VAR4 *VAR5 = (VAR4 *)FUN2(FUN3(VAR2), VAR6);
    for (;;)
    {
        int VAR7;
        uint8_t VAR8 = 0;
        uint8_t VAR9[FUN4(VAR2)];
        uint8_t VAR10 = 0;
        uint8_t VAR11;
        if (FUN5(&VAR2->VAR12))
        {
            if (!(VAR2->VAR13[VAR14] & VAR15))
            {
                VAR2->VAR13[VAR16] |= VAR17;
            }
            FUN6(VAR2);
            return;
        }
        else if (VAR2->VAR18 == VAR19)
        {
            for (VAR7 = 0; VAR7 < FUN4(VAR2); ++VAR7)
            {
                VAR9[VAR7] = FUN7(&VAR2->VAR12);
            }
            FUN8(VAR9, FUN4(VAR2), false);
        }
        else if (VAR2->VAR18 >= VAR20)
        {
            VAR8 = FUN7(&VAR2->VAR12);
            for (VAR7 = 0; VAR7 < FUN4(VAR2); ++VAR7)
            {
                VAR9[VAR7] = VAR8;
            }
        }
        else
        {
            VAR8 = FUN7(&VAR2->VAR12);
            VAR10 = 8 / VAR2->VAR21;
        }
        for (VAR7 = 0; VAR7 < FUN4(VAR2); ++VAR7)
        {
            int VAR22 = FUN4(VAR2) - 1 - VAR7;
            if (VAR10)
            {
                int VAR23;
                for (VAR23 = 0; VAR23 < VAR10; ++VAR23)
                {
                    VAR9[0] = FUN9(VAR2->VAR24[VAR22], (VAR25)VAR9[0]);
                }
            }
            else
            {
                FUN10(VAR3, "", VAR9[VAR7]);
                VAR9[VAR7] = FUN9(VAR2->VAR24[VAR22], (VAR25)VAR9[VAR7]);
                FUN10(VAR3, "", VAR9[VAR7]);
            }
        }
        if (VAR2->VAR13[VAR26] & VAR27)
        {
            FUN10(VAR3, "");
        }
        else if (VAR2->VAR28)
        {
            FUN10(VAR3, "");
            VAR2->VAR28 -= 8 / VAR2->VAR21;
        }
        else if (FUN11(&VAR2->VAR29))
        {
            VAR2->VAR13[VAR16] |= VAR30;
            FUN10(0, "");
        }
        else if (VAR2->VAR18 == VAR19)
        {
            FUN8(VAR9, FUN4(VAR2), true);
            for (VAR7 = 0; VAR7 < FUN4(VAR2); ++VAR7)
            {
                FUN12(&VAR2->VAR29, (VAR31)VAR9[VAR7]);
                FUN10(VAR3, "");
            }
        }
        else
        {
            FUN10(VAR3, "");
            FUN12(&VAR2->VAR29, (VAR31)VAR9[0]);
        }
        if (VAR2->VAR32)
        {
            VAR2->VAR32--;
            if (!VAR2->VAR32)
            {
                VAR2->VAR21 = VAR2->VAR33;
            }
        }
        FUN10(VAR3, "", (unsigned)VAR2->VAR18);
        switch (VAR2->VAR18)
        {
        case (VAR34):
            VAR2->VAR35 = FUN13(VAR5, VAR8);
            VAR11 = FUN14(VAR2, VAR8);
            if (VAR2->VAR35 < 0)
            {
                VAR2->VAR18 = VAR36;
            }
            else
            {
                VAR2->VAR18 = VAR20 + VAR11 - 1;
            }
            switch (VAR8)
            {
            case VAR37:
            case VAR38:
            case VAR39:
                VAR2->VAR33 = 2;
                VAR2->VAR32 = VAR11 + VAR2->VAR35;
                break;
            case VAR40:
            case VAR41:
            case VAR42:
            case VAR43:
                VAR2->VAR33 = 4;
                VAR2->VAR32 = VAR11 + VAR2->VAR35;
                break;
            case VAR44:
            case VAR45:
                VAR2->VAR21 = 2;
                break;
            case VAR46:
            case VAR47:
                VAR2->VAR21 = 4;
                break;
            }
            break;
        case (VAR20):
            if (VAR2->VAR35 < 0)
            {
                VAR2->VAR18 = VAR36;
            }
            else
            {
                VAR2->VAR18 = VAR2->VAR35;
            }
            break;
        case (VAR19):
        case (VAR36):
            if (!VAR3)
            {
                FUN10(0, "");
                VAR3 = 1;
            }
            break;
        default:
            VAR2->VAR18--;
        }
        FUN10(VAR3, "", (unsigned)VAR2->VAR18);
    }
}