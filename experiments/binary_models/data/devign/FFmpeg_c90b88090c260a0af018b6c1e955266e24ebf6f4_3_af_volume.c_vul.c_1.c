static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR7->VAR10;
    VAR1 *VAR11 = VAR2->VAR7->VAR12[0];
    int VAR13 = VAR4->VAR13;
    VAR3 *VAR14;
    int64_t VAR15;
    VAR16 *VAR17 = FUN2(VAR4, VAR18);
    int VAR19;
    if (VAR17 && VAR9->VAR20 != VAR21)
    {
        if (VAR9->VAR20 != VAR22)
        {
            VAR23 *VAR20 = (VAR23 *)VAR17->VAR24;
            int32_t VAR25 = 100000;
            uint32_t VAR26 = 100000;
            float VAR27, VAR28;
            if (VAR9->VAR20 == VAR29 && VAR20->VAR30 != VAR31)
            {
                VAR25 = VAR20->VAR30;
                if (VAR20->VAR32 != 0)
                    VAR26 = VAR20->VAR32;
            }
            else if (VAR20->VAR33 != VAR31)
            {
                VAR25 = VAR20->VAR33;
                if (VAR20->VAR34 != 0)
                    VAR26 = VAR20->VAR34;
            }
            else
            {
                FUN3(VAR2->VAR7, VAR35, ""
                                                    "");
            }
            VAR27 = VAR25 / 100000.0f;
            VAR28 = VAR26 / 100000.0f;
            FUN3(VAR2->VAR7, VAR36, "", VAR27);
            VAR9->VAR37 = FUN4((VAR27 + VAR9->VAR38) / 20);
            if (VAR9->VAR39)
                VAR9->VAR37 = FUN5(VAR9->VAR37, 1.0 / VAR28);
            VAR9->VAR40 = (int)(VAR9->VAR37 * 256 + 0.5);
            FUN6(VAR9);
        }
        FUN7(VAR4, VAR18);
    }
    if (FUN8(VAR9->VAR41[VAR42]))
    {
        VAR9->VAR41[VAR42] = FUN9(VAR4->VAR43);
        VAR9->VAR41[VAR44] = FUN10(VAR4->VAR43, VAR2->VAR45);
    }
    VAR9->VAR41[VAR46] = FUN9(VAR4->VAR43);
    VAR9->VAR41[VAR47] = FUN10(VAR4->VAR43, VAR2->VAR45);
    VAR9->VAR41[VAR48] = VAR2->VAR49;
    VAR15 = VAR4->VAR50;
    VAR9->VAR41[VAR51] = VAR15 == -1 ? VAR52 : VAR15;
    if (VAR9->VAR53 == VAR54)
        FUN11(VAR6);
    if (VAR9->VAR37 == 1.0 || VAR9->VAR40 == 256)
    {
        VAR14 = VAR4;
        goto VAR55;
    }
    if (FUN12(VAR4) && (VAR9->VAR56 != VAR57 || VAR9->VAR40 > 0))
    {
        VAR14 = VAR4;
    }
    else
    {
        VAR14 = FUN13(VAR2, VAR13);
        if (!VAR14)
            return FUN14(VAR58);
        VAR19 = FUN15(VAR14, VAR4);
        if (VAR19 < 0)
        {
            FUN16(&VAR14);
            FUN16(&VAR4);
            return VAR19;
        }
    }
    if (VAR9->VAR56 != VAR57 || VAR9->VAR40 > 0)
    {
        int VAR28, VAR59;
        if (FUN17(VAR4->VAR60))
            VAR59 = FUN18(VAR13, VAR9->VAR61);
        else
            VAR59 = FUN18(VAR13 * VAR9->VAR62, VAR9->VAR61);
        if (VAR9->VAR56 == VAR57)
        {
            for (VAR28 = 0; VAR28 < VAR9->VAR63; VAR28++)
            {
                VAR9->FUN19(VAR14->VAR64[VAR28], VAR4->VAR64[VAR28], VAR59, VAR9->VAR40);
            }
        }
        else if (FUN20(VAR9->VAR65) == VAR66)
        {
            for (VAR28 = 0; VAR28 < VAR9->VAR63; VAR28++)
            {
                VAR9->VAR67->FUN21((float *)VAR14->VAR64[VAR28], (const float *)VAR4->VAR64[VAR28], VAR9->VAR37, VAR59);
            }
        }
        else
        {
            for (VAR28 = 0; VAR28 < VAR9->VAR63; VAR28++)
            {
                VAR9->VAR67->FUN22((double *)VAR14->VAR64[VAR28], (const double *)VAR4->VAR64[VAR28], VAR9->VAR37, VAR59);
            }
        }
    }
    FUN23();
    if (VAR4 != VAR14)
        FUN16(&VAR4);
VAR55:
    VAR9->VAR41[VAR68] += VAR14->VAR13;
    return FUN24(VAR11, VAR14);
}