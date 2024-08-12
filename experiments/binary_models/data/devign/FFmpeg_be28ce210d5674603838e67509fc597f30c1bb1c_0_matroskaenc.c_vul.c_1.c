static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7, *VAR8 = VAR2->VAR8;
    ebml_master VAR9;
    AVLFG VAR10;
    int VAR11, VAR12;
    if (!VAR4->VAR13)
        return 0;
    VAR4->VAR9 = FUN2(sizeof(*VAR4->VAR9));
    if (!VAR4->VAR9)
        return VAR12;
    FUN3(&VAR10, FUN4());
    VAR12 = FUN5(VAR4->VAR14, VAR15, FUN6(VAR8));
    if (VAR12 < 0)
        return VAR12;
    VAR12 = FUN7(VAR8, &VAR7, VAR4, &VAR9, VAR15, 0);
    if (VAR12 < 0)
        return VAR12;
    for (VAR11 = 0; VAR11 < VAR2->VAR16; VAR11++)
    {
        VAR17 *VAR18 = VAR2->VAR19[VAR11];
        ebml_master VAR20;
        VAR21 *VAR22 = VAR4->VAR9->VAR23;
        VAR24 *VAR25;
        const char *VAR26 = NULL;
        uint32_t VAR27;
        if (VAR18->VAR28->VAR29 != VAR30)
            continue;
        VAR22 = FUN8(VAR22, VAR4->VAR9->VAR31 + 1, sizeof(VAR21));
        if (!VAR22)
            return FUN9(VAR32);
        VAR4->VAR9->VAR23 = VAR22;
        VAR20 = FUN10(VAR7, VAR33, 0);
        if (VAR25 = FUN11(VAR18->VAR34, "", NULL, 0))
            FUN12(VAR7, VAR35, VAR25->VAR36);
        if (!(VAR25 = FUN11(VAR18->VAR34, "", NULL, 0)))
        {
            FUN13(VAR2, VAR37, "", VAR11);
            return FUN9(VAR38);
        }
        FUN12(VAR7, VAR39, VAR25->VAR36);
        if (VAR25 = FUN11(VAR18->VAR34, "", NULL, 0))
            VAR26 = VAR25->VAR36;
        else if (VAR18->VAR28->VAR40 != VAR41)
        {
            int VAR11;
            for (VAR11 = 0; VAR42[VAR11].VAR43 != VAR41; VAR11++)
                if (VAR42[VAR11].VAR43 == VAR18->VAR28->VAR40)
                {
                    VAR26 = VAR42[VAR11].VAR44;
                    break;
                }
            for (VAR11 = 0; VAR45[VAR11].VAR43 != VAR41; VAR11++)
                if (VAR45[VAR11].VAR43 == VAR18->VAR28->VAR40)
                {
                    VAR26 = VAR45[VAR11].VAR44;
                    break;
                }
        }
        if (!VAR26)
        {
            FUN13(VAR2, VAR37, ""
                                    "",
                   VAR11);
            return FUN9(VAR38);
        }
        if (VAR2->VAR46 & VAR47)
        {
            struct VAR48 *VAR49 = FUN14();
            uint8_t VAR50[20];
            if (!VAR49)
                return FUN9(VAR32);
            FUN15(VAR49, 160);
            FUN16(VAR49, VAR18->VAR28->VAR51, VAR18->VAR28->VAR52);
            FUN17(VAR49, VAR50);
            FUN18(VAR49);
            VAR27 = FUN19(VAR50);
        }
        else
        {
            VAR27 = FUN20(&VAR10);
        }
        FUN13(VAR2, VAR53, "" VAR54 "", VAR27, VAR4->VAR9->VAR31);
        FUN12(VAR7, VAR55, VAR26);
        FUN21(VAR7, VAR56, VAR18->VAR28->VAR51, VAR18->VAR28->VAR52);
        FUN22(VAR7, VAR57, VAR27);
        FUN23(VAR7, VAR20);
        VAR4->VAR9->VAR23[VAR4->VAR9->VAR31].VAR58 = VAR11;
        VAR4->VAR9->VAR23[VAR4->VAR9->VAR31++].VAR27 = VAR27;
    }
    FUN24(VAR8, &VAR7, VAR4, VAR9);
    return 0;
}