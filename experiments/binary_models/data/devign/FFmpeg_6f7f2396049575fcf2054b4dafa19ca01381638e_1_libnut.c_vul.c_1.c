static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    nut_muxer_opts_tt VAR9 = {
        .VAR10 = {
            .VAR4 = VAR7,
            .write = VAR11,
        },
        .VAR12 = {VAR13, VAR14, VAR15},
        .VAR16 = 1,
        .VAR17 = 0,
        .VAR18 = 32768,
        .VAR19 = NULL,
    };
    VAR20 *VAR21;
    int VAR22;
    VAR4->VAR21 = VAR21 = FUN2((VAR2->VAR23 + 1) * sizeof *VAR21);
    for (VAR22 = 0; VAR22 < VAR2->VAR23; VAR22++)
    {
        VAR24 *VAR25 = VAR2->VAR26[VAR22]->VAR25;
        int VAR27;
        int VAR28 = 0;
        int VAR29, VAR30, VAR31;
        VAR21[VAR22].VAR32 = VAR25->VAR33 == VAR34 ? VAR35 : VAR36;
        if (VAR25->VAR37)
            VAR28 = VAR25->VAR37;
        else
            VAR28 = FUN3(VAR38, VAR25->VAR39);
        if (!VAR28)
        {
            if (VAR25->VAR33 == VAR34)
                VAR28 = FUN3(VAR40, VAR25->VAR39);
            if (VAR25->VAR33 == VAR41)
                VAR28 = FUN3(VAR42, VAR25->VAR39);
        }
        VAR21[VAR22].VAR43 = 4;
        VAR21[VAR22].VAR28 = FUN4(VAR21[VAR22].VAR43);
        for (VAR27 = 0; VAR27 < VAR21[VAR22].VAR43; VAR27++)
            VAR21[VAR22].VAR28[VAR27] = (VAR28 >> (VAR27 * 8)) & 0xFF;
        FUN5(VAR25, &VAR29, &VAR31, &VAR30);
        FUN6(VAR2->VAR26[VAR22], 60, VAR30, VAR29);
        VAR21[VAR22].VAR44.VAR29 = VAR30;
        VAR21[VAR22].VAR44.VAR45 = VAR29;
        VAR21[VAR22].VAR46 = 0;
        VAR21[VAR22].VAR47 = VAR25->VAR48;
        VAR21[VAR22].VAR49 = VAR25->VAR50;
        VAR21[VAR22].VAR51 = VAR25->VAR52;
        if (VAR25->VAR33 == VAR34)
        {
            VAR21[VAR22].VAR53 = VAR25->VAR53;
            VAR21[VAR22].VAR54 = VAR25->VAR54;
            VAR21[VAR22].VAR55 = 0;
            VAR21[VAR22].VAR56 = 0;
            VAR21[VAR22].VAR57 = 0;
        }
        else
        {
            VAR21[VAR22].VAR58 = VAR25->VAR59;
            VAR21[VAR22].VAR60 = 1;
            VAR21[VAR22].VAR61 = VAR25->VAR62;
        }
    }
    VAR21[VAR2->VAR23].VAR32 = -1;
    VAR4->VAR63 = FUN7(&VAR9, VAR21, NULL);
    return 0;