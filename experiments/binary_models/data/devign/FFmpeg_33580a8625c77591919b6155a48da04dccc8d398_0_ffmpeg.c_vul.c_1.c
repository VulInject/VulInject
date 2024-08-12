static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6->VAR11;
    int VAR12;
    if (!VAR2->VAR13)
    {
        AVPacket VAR14;
        if (!FUN2(VAR6->VAR15))
        {
            int VAR16 = FUN3(2 * FUN4(VAR6->VAR15), VAR6->VAR17);
            if (VAR16 <= FUN4(VAR6->VAR15))
            {
                FUN5(NULL, VAR18, "", VAR6->VAR19, VAR6->VAR11->VAR20);
                FUN6(1);
            }
            VAR12 = FUN7(VAR6->VAR15, VAR16);
            if (VAR12 < 0)
                FUN6(1);
        }
        FUN8(&VAR14, VAR4);
        FUN9(VAR6->VAR15, &VAR14, sizeof(VAR14), NULL);
        return;
    }
    if ((VAR11->VAR21->VAR22 == VAR23 && VAR24 == VAR25) || (VAR11->VAR21->VAR22 == VAR26 && VAR27 < 0))
        VAR4->VAR28 = VAR4->VAR29 = VAR30;
    if (!(VAR11->VAR21->VAR22 == VAR23 && VAR6->VAR31))
    {
        if (VAR6->VAR32 >= VAR6->VAR33)
        {
            FUN10(VAR4);
            return;
        }
        VAR6->VAR32++;
    }
    if (VAR11->VAR21->VAR22 == VAR23)
    {
        int VAR34;
        VAR35 *VAR36 = FUN11(VAR4, VAR37, NULL);
        VAR6->VAR38 = VAR36 ? FUN12(VAR36) : -1;
        VAR6->VAR39 = VAR36 ? VAR36[4] : VAR40;
        for (VAR34 = 0; VAR34 < FUN13(VAR6->VAR41); VAR34++)
        {
            if (VAR36 && VAR34 < VAR36[5])
                VAR6->VAR41[VAR34] = FUN14(VAR36 + 8 + 8 * VAR34);
            else
                VAR6->VAR41[VAR34] = -1;
        }
        if (VAR6->VAR42.VAR43 && VAR6->VAR44)
        {
            if (VAR4->VAR45 > 0)
                FUN5(NULL, VAR46, "");
            VAR4->VAR45 = FUN15(1, FUN16(VAR6->VAR42), VAR6->VAR11->VAR47);
        }
    }
    if (!(VAR8->VAR48->VAR49 & VAR50))
    {
        if (VAR4->VAR29 != VAR30 && VAR4->VAR28 != VAR30 && VAR4->VAR29 > VAR4->VAR28)
        {
            FUN5(VAR8, VAR46, "" VAR51 "" VAR51 "", VAR4->VAR29, VAR4->VAR28, VAR6->VAR19, VAR6->VAR11->VAR20);
            VAR4->VAR28 = VAR4->VAR29 = VAR4->VAR28 + VAR4->VAR29 + VAR6->VAR52 + 1 - FUN17(VAR4->VAR28, VAR4->VAR29, VAR6->VAR52 + 1) - FUN18(VAR4->VAR28, VAR4->VAR29, VAR6->VAR52 + 1);
        }
        if ((VAR11->VAR21->VAR22 == VAR26 || VAR11->VAR21->VAR22 == VAR23) && VAR4->VAR29 != VAR30 && !(VAR11->VAR21->VAR53 == VAR54 && VAR6->VAR55) && VAR6->VAR52 != VAR30)
        {
            int64_t VAR56 = VAR6->VAR52 + !(VAR8->VAR48->VAR49 & VAR57);
            if (VAR4->VAR29 < VAR56)
            {
                int VAR58 = VAR56 - VAR4->VAR29 > 2 || VAR11->VAR21->VAR22 == VAR23 ? VAR46 : VAR59;
                FUN5(VAR8, VAR58, ""
                                    "" VAR51 "" VAR51 "",
                       VAR6->VAR19, VAR6->VAR11->VAR20, VAR6->VAR52, VAR4->VAR29);
                if (VAR60)
                {
                    FUN5(NULL, VAR61, "");
                    FUN6(1);
                }
                FUN5(VAR8, VAR58, "" VAR51 ""
                                    "",
                       VAR56);
                if (VAR4->VAR28 >= VAR4->VAR29)
                    VAR4->VAR28 = FUN19(VAR4->VAR28, VAR56);
                VAR4->VAR29 = VAR56;
            }
        }
    }
    VAR6->VAR52 = VAR4->VAR29;
    VAR6->VAR62 += VAR4->VAR63;
    VAR6->VAR64++;
    VAR4->VAR65 = VAR6->VAR20;
    if (VAR66)
    {
        FUN5(NULL, VAR67, ""
                                  "",
               FUN20(VAR6->VAR68->VAR22), FUN21(VAR4->VAR28), FUN22(VAR4->VAR28, &VAR6->VAR11->VAR47), FUN21(VAR4->VAR29), FUN22(VAR4->VAR29, &VAR6->VAR11->VAR47), VAR4->VAR63);
    }
    VAR12 = FUN23(VAR8, VAR4);
    if (VAR12 < 0)
    {
        FUN24("", VAR12);
        VAR69 = 1;
        FUN25(VAR6, VAR70 | VAR71, VAR71);
    }
    FUN10(VAR4);
}