static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = NULL, *VAR10 = NULL;
    int VAR11, VAR12;
    FUN2(VAR7, 4);
    VAR11 = FUN3(VAR7);
    if (VAR11 == 2)
    {
        uint64_t VAR13;
        int VAR14;
        FUN2(VAR7, 22);
        VAR9 = FUN4(VAR2, NULL);
        if (!VAR9)
            return FUN5(VAR15);
        VAR10 = FUN4(VAR2, NULL);
        if (!VAR10)
            return FUN5(VAR15);
        VAR10->VAR16->VAR17 = VAR18;
        VAR10->VAR19 = (VAR20){1, 15};
        VAR10->VAR21 = FUN6(VAR7);
        VAR14 = FUN6(VAR7);
        switch (VAR14)
        {
        case 1:
            VAR10->VAR16->VAR22 = VAR23;
            break;
        case 2:
            VAR10->VAR16->VAR24 = VAR25;
            VAR10->VAR16->VAR22 = VAR26;
            break;
        default:
            FUN7(VAR2, "", VAR14);
            break;
        }
        VAR10->VAR16->VAR27 = 0;
        VAR10->VAR16->VAR28 = FUN6(VAR7);
        VAR10->VAR16->VAR29 = FUN6(VAR7);
        FUN2(VAR7, 12);
        VAR9->VAR16->VAR17 = VAR30;
        VAR9->VAR21 = VAR10->VAR21;
        VAR9->VAR16->VAR31 = FUN6(VAR7);
        FUN8(VAR9, 33, 1, VAR9->VAR16->VAR31);
        VAR9->VAR16->VAR32 = FUN6(VAR7);
        VAR9->VAR16->VAR33 = (VAR9->VAR16->VAR32 == 1) ? VAR34 : VAR35;
        VAR14 = FUN6(VAR7);
        if (VAR14 == VAR36)
        {
            VAR9->VAR16->VAR22 = VAR37;
        }
        else
        {
            FUN7(VAR2, "", VAR14);
        }
        FUN2(VAR7, 12);
        FUN9(VAR2, "", 0x80);
        FUN9(VAR2, "", 0x100);
        FUN2(VAR7, 0x80);
        VAR13 = 0;
        for (VAR12 = 0; VAR12 < VAR10->VAR21; VAR12++)
        {
            uint32_t VAR38 = FUN6(VAR7);
            uint32_t VAR39 = FUN6(VAR7);
            uint32_t VAR40 = FUN6(VAR7);
            FUN2(VAR7, 8);
            FUN10(VAR9, VAR38, VAR13, VAR39, 0, VAR41);
            FUN10(VAR10, VAR38 + VAR39, VAR12, VAR40, 0, VAR41);
            VAR13 += VAR39 / (VAR9->VAR16->VAR32 * 2);
        }
    }
    else if (!VAR11 && FUN3(VAR7) == 3)
    {
        FUN2(VAR7, 4);
        FUN11(VAR2, NULL, VAR42);
        if (VAR4->VAR43 > 1)
        {
            FUN7(VAR2, "");
            return VAR44;
        }
        else if (VAR4->VAR43)
        {
            VAR9 = FUN4(VAR2, NULL);
            if (!VAR9)
                return FUN5(VAR15);
            VAR9->VAR16->VAR17 = VAR30;
            FUN11(VAR2, VAR9, VAR45);
            if (VAR9->VAR16->VAR27 == 100 && VAR9->VAR16->VAR22 == VAR36 && VAR9->VAR16->VAR46 == 16)
            {
                VAR9->VAR16->VAR22 = VAR37;
            }
            else
            {
                FUN7(VAR2, "", VAR9->VAR16->VAR27, VAR9->VAR16->VAR22, VAR9->VAR16->VAR46);
                VAR9->VAR16->VAR22 = VAR47;
            }
            VAR9->VAR16->VAR27 = 0;
        }
        if (VAR4->VAR48 > 1)
        {
            FUN7(VAR2, "");
            return VAR44;
        }
        else if (VAR4->VAR48)
        {
            VAR10 = FUN4(VAR2, NULL);
            if (!VAR10)
                return FUN5(VAR15);
            VAR10->VAR16->VAR17 = VAR18;
            FUN11(VAR2, VAR10, VAR49);
        }
        if (VAR4->VAR43)
            FUN12(VAR7, VAR9);
        if (VAR4->VAR48)
            FUN12(VAR7, VAR10);
    }
    else
    {
        FUN7(VAR2, "", VAR11);
        return VAR44;
    }
    return 0;
}