static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    int64_t VAR10;
    int VAR11, VAR12;
    int VAR13;
    for (VAR12 = 0; VAR12 < VAR4->VAR14; VAR12++)
    {
        VAR13 = VAR4->VAR15[VAR12];
        VAR7 = NULL;
        for (VAR11 = 0; VAR11 < VAR2->VAR16; VAR11++)
            if (VAR2->VAR17[VAR11]->VAR18 == VAR13)
            {
                VAR7 = VAR2->VAR17[VAR11];
                break;
            }
        if (!VAR7)
        {
            FUN2(VAR2, VAR19, "");
            continue;
        }
        VAR9 = VAR7->VAR5;
        VAR10 = FUN3(VAR9->VAR20);
        if (VAR7->VAR21->VAR22 == VAR23)
        {
            VAR7->VAR24 |= VAR25 | VAR26;
            if (VAR7->VAR27)
            {
                AVPacket VAR28;
                VAR29 *VAR30 = &VAR7->VAR31[0];
                if (FUN4(VAR9->VAR20, VAR30->VAR32, VAR33) != VAR30->VAR32)
                {
                    FUN2(VAR2, VAR19, "");
                    goto VAR34;
                }
                if (FUN5(VAR9->VAR20, &VAR28, VAR30->VAR35) < 0)
                    goto VAR34;
                VAR7->VAR36 = VAR28;
                VAR7->VAR36.VAR37 = VAR7->VAR38;
                VAR7->VAR36.VAR39 |= VAR40;
            }
        }
        else
        {
            VAR7->VAR21->VAR22 = VAR41;
            VAR7->VAR21->VAR42 = VAR43;
            VAR7->VAR44 = VAR45;
            for (VAR11 = 0; VAR11 < VAR7->VAR27; VAR11++)
            {
                VAR29 *VAR30 = &VAR7->VAR31[VAR11];
                int64_t VAR46 = VAR11 + 1 < VAR7->VAR27 ? VAR7->VAR31[VAR11 + 1].VAR47 : VAR7->VAR48;
                VAR49 *VAR50;
                uint16_t VAR51;
                int VAR52, VAR53;
                if (VAR46 < VAR30->VAR47)
                {
                    FUN2(VAR2, VAR54, "");
                    VAR46 = VAR55;
                }
                if (FUN4(VAR9->VAR20, VAR30->VAR32, VAR33) != VAR30->VAR32)
                {
                    FUN2(VAR2, VAR19, "", VAR11);
                    goto VAR34;
                }
                VAR52 = FUN6(VAR9->VAR20);
                if (VAR52 > VAR30->VAR35 - 2)
                    continue;
                VAR53 = 2 * VAR52 + 1;
                if (!(VAR50 = FUN7(VAR53)))
                    goto VAR34;
                if (!VAR52)
                {
                    VAR50[0] = 0;
                }
                else
                {
                    VAR51 = FUN6(VAR9->VAR20);
                    if (VAR51 == 0xfeff)
                        FUN8(VAR9->VAR20, VAR52, VAR50, VAR53);
                    else if (VAR51 == 0xfffe)
                        FUN9(VAR9->VAR20, VAR52, VAR50, VAR53);
                    else
                    {
                        FUN10(VAR50, VAR51);
                        if (VAR52 == 1 || VAR52 == 2)
                            VAR50[VAR52] = 0;
                        else
                            FUN11(VAR9->VAR20, VAR56, VAR50 + 2, VAR52 - 1);
                    }
                }
                FUN12(VAR2, VAR11, VAR7->VAR57, VAR30->VAR47, VAR46, VAR50);
                FUN13(&VAR50);
            }
        }
    VAR34:
        FUN4(VAR9->VAR20, VAR10, VAR33);
    }
}