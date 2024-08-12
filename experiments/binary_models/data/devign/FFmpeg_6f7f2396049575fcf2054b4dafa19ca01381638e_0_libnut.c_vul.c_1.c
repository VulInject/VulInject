static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    nut_demuxer_opts_tt VAR11 = {
        .VAR12 = {
            .VAR6 = VAR9,
            .VAR13 = VAR14,
            .read = VAR15,
            .VAR16 = NULL,
            .VAR17 = 0,
        },
        .VAR18 = {VAR19, VAR20, VAR21},
        .VAR22 = 1,
        .VAR23 = 1,
    };
    VAR24 *VAR25 = VAR6->VAR25 = FUN2(&VAR11);
    VAR26 *VAR27;
    int VAR28, VAR29;
    if ((VAR28 = FUN3(VAR25, &VAR27, NULL)))
    {
        FUN4(VAR2, VAR30, "", FUN5(VAR28));
        return -1;
        VAR6->VAR27 = VAR27;
        for (VAR29 = 0; VAR27[VAR29].VAR31 != -1 && VAR29 < 2; VAR29++)
        {
            VAR32 *VAR33 = FUN6(VAR2, NULL);
            int VAR34;
            for (VAR34 = 0; VAR34 < VAR27[VAR29].VAR35 && VAR34 < 8; VAR34++)
                VAR33->VAR36->VAR37 |= VAR27[VAR29].VAR38[VAR34] << (VAR34 * 8);
            VAR33->VAR36->VAR39 = VAR27[VAR29].VAR40;
            VAR33->VAR36->VAR41 = VAR27[VAR29].VAR42;
            if (VAR33->VAR36->VAR41)
            {
                VAR33->VAR36->VAR43 = FUN7(VAR33->VAR36->VAR41);
                memcpy(VAR33->VAR36->VAR43, VAR27[VAR29].VAR44, VAR33->VAR36->VAR41);
                FUN8(VAR2->VAR45[VAR29], 60, VAR27[VAR29].VAR46.VAR47, VAR27[VAR29].VAR46.VAR48);
                VAR33->VAR49 = 0;
                VAR33->VAR50 = VAR27[VAR29].VAR51;
                VAR33->VAR36->VAR52 = FUN9(VAR53, VAR33->VAR36->VAR37);
                switch (VAR27[VAR29].VAR31)
                {
                case VAR54:
                    VAR33->VAR36->VAR55 = VAR56;
                    if (VAR33->VAR36->VAR52 == VAR57)
                        VAR33->VAR36->VAR52 = FUN9(VAR58, VAR33->VAR36->VAR37);
                    VAR33->VAR36->VAR59 = VAR27[VAR29].VAR60;
                    VAR33->VAR36->VAR61 = VAR27[VAR29].VAR62 / VAR27[VAR29].VAR63;
                    break;
                case VAR64:
                    VAR33->VAR36->VAR55 = VAR65;
                    if (VAR33->VAR36->VAR52 == VAR57)
                        VAR33->VAR36->VAR52 = FUN9(VAR66, VAR33->VAR36->VAR37);
                    VAR33->VAR36->VAR67 = VAR27[VAR29].VAR67;
                    VAR33->VAR36->VAR68 = VAR27[VAR29].VAR68;
                    VAR33->VAR69.VAR47 = VAR27[VAR29].VAR70;
                    VAR33->VAR69.VAR48 = VAR27[VAR29].VAR71;
                    break;
                    if (VAR33->VAR36->VAR52 == VAR57)
                        FUN4(VAR2, VAR30, "");
                    return 0;