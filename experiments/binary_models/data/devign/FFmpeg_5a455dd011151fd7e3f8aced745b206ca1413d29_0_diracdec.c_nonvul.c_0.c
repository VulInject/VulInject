static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    int VAR11, VAR12, VAR13;
    unsigned VAR14;
    if (VAR5 < VAR15)
        return -1;
    VAR13 = VAR4[4];
    FUN2(&VAR7->VAR16, &VAR4[13], 8 * (VAR5 - VAR15));
    if (VAR13 == VAR17)
    {
        if (VAR7->VAR18)
            return 0;
        if (FUN3(VAR2, &VAR7->VAR16, &VAR7->VAR19))
            return -1;
        FUN4(VAR2->VAR20, &VAR7->VAR21, &VAR7->VAR22);
        if (FUN5(VAR7))
            return -1;
        VAR7->VAR18 = 1;
    }
    else if (VAR13 == VAR23)
    {
        FUN6(VAR7);
        VAR7->VAR18 = 0;
    }
    else if (VAR13 == VAR24)
    {
        if (VAR4[13] == 1)
        {
            int VAR25[3];
            if (sscanf(VAR4 + 14, "", VAR25, VAR25 + 1, VAR25 + 2) == 3)
                if (VAR25[0] == 1 && VAR25[1] == 0 && VAR25[2] <= 7)
                    VAR7->VAR26 = 1;
        }
    }
    else if (VAR13 & 0x8)
    {
        if (!VAR7->VAR18)
        {
            FUN7(VAR2, VAR27, "");
            return -1;
        }
        for (VAR12 = 0; VAR12 < VAR28; VAR12++)
            if (VAR7->VAR29[VAR12].VAR30->VAR31[0] == NULL)
                VAR10 = &VAR7->VAR29[VAR12];
        if (!VAR10)
        {
            FUN7(VAR2, VAR32, "");
            return -1;
        }
        FUN8(VAR10->VAR30);
        VAR14 = VAR13 & 0x03;
        if (VAR14 > 2)
        {
            FUN7(VAR2, VAR32, "");
            return -1;
        }
        VAR7->VAR33 = VAR14;
        VAR7->VAR34 = (VAR13 & 0x48) == 0x08;
        VAR7->VAR35 = (VAR13 & 0x88) == 0x88;
        VAR10->VAR30->VAR36 = (VAR13 & 0x0C) == 0x0C;
        VAR10->VAR30->VAR37 = VAR7->VAR33 == 0;
        VAR10->VAR30->VAR38 = VAR7->VAR33 + 1;
        if ((VAR11 = FUN9(VAR2, VAR10->VAR30, (VAR13 & 0x0C) == 0x0C ? VAR39 : 0)) < 0)
            return VAR11;
        VAR7->VAR40 = VAR10;
        VAR7->VAR41[0].VAR42 = VAR10->VAR30->VAR43[0];
        VAR7->VAR41[1].VAR42 = VAR10->VAR30->VAR43[1];
        VAR7->VAR41[2].VAR42 = VAR10->VAR30->VAR43[2];
        if (FUN10(VAR7, FUN11(FUN12(VAR7->VAR41[0].VAR42), FUN12(VAR7->VAR41[1].VAR42), FUN12(VAR7->VAR41[2].VAR42))) < 0)
            return FUN13(VAR44);
        if (FUN14(VAR7))
            return -1;
        if (FUN15(VAR7))
            return -1;
    }
    return 0;
}