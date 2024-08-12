static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const int VAR11 = 5;
    VAR5 *VAR12, *VAR13, *VAR14;
    int VAR15 = 0, VAR16 = 0;
    if (!VAR2->VAR17 || !VAR2->VAR18)
        return -1;
    VAR12 = VAR6;
    VAR13 = VAR6 + VAR7;
    VAR14 = FUN2(VAR7 + 1024);
    if (!VAR14)
        return -1;
    VAR14[VAR16++] = 0xFF;
    VAR14[VAR16++] = 0xD8;
    memcpy(VAR14 + VAR16, &VAR19[0], sizeof(VAR19));
    memcpy(VAR14 + VAR16 + 5, &VAR20[VAR11 * 2], 64);
    memcpy(VAR14 + VAR16 + 70, &VAR20[(VAR11 * 2) + 1], 64);
    VAR16 += sizeof(VAR19);
    memcpy(VAR14 + VAR16, &VAR21[0], sizeof(VAR21));
    VAR16 += sizeof(VAR21);
    memcpy(VAR14 + VAR16, &VAR22[0], sizeof(VAR22));
    VAR14[VAR16 + 5] = (VAR2->VAR23 >> 8) & 0xFF;
    VAR14[VAR16 + 6] = VAR2->VAR23 & 0xFF;
    VAR14[VAR16 + 7] = (VAR2->VAR24 >> 8) & 0xFF;
    VAR14[VAR16 + 8] = VAR2->VAR24 & 0xFF;
    VAR16 += sizeof(VAR22);
    memcpy(VAR14 + VAR16, &VAR25[0], sizeof(VAR25));
    VAR16 += sizeof(VAR25);
    for (VAR15 = 14; VAR15 < VAR7 && VAR16 < VAR7 + 1024 - 2; VAR15++)
    {
        VAR14[VAR16++] = VAR6[VAR15];
        if (VAR6[VAR15] == 0xff)
            VAR14[VAR16++] = 0;
    }
    VAR14[VAR16++] = 0xFF;
    VAR14[VAR16++] = 0xD9;
    VAR15 = FUN3(VAR2, VAR3, VAR4, VAR14, VAR16);
    FUN4(VAR14);
    VAR9->VAR26 = 8;
    VAR9->VAR17 = VAR2->VAR24;
    VAR9->VAR18 = VAR2->VAR23;
    VAR9->VAR27 = 3;
    VAR9->VAR28[0] = 0;
    VAR9->VAR29[0] = 2;
    VAR9->VAR30[0] = 2;
    VAR9->VAR31[0] = 0;
    VAR9->VAR28[1] = 1;
    VAR9->VAR29[1] = 1;
    VAR9->VAR30[1] = 1;
    VAR9->VAR31[1] = 1;
    VAR9->VAR28[2] = 2;
    VAR9->VAR29[2] = 1;
    VAR9->VAR30[2] = 1;
    VAR9->VAR31[2] = 1;
    VAR9->VAR32 = 2;
    VAR9->VAR33 = 2;
    VAR9->VAR34 = FUN2((VAR9->VAR17 + 15) / 16);
    VAR2->VAR35 = VAR9->VAR36 ? VAR37 : VAR38;
    VAR9->VAR39 = 0;
    VAR9->VAR40.VAR41 = 0;
    if (VAR2->FUN5(VAR2, &VAR9->VAR40) < 0)
    {
        fprintf(VAR42, "");
        return -1;
    }
    VAR9->VAR40.VAR43 = VAR44;
    VAR9->VAR40.VAR45 = 1;
    for (VAR15 = 0; VAR15 < 3; VAR15++)
        VAR9->VAR46[VAR15] = VAR9->VAR40.VAR46[VAR15] << VAR9->VAR39;
    for (VAR15 = 0; VAR15 < 64; VAR15++)
    {
        VAR16 = VAR9->VAR47.VAR48[VAR15];
        VAR9->VAR49[0][VAR16] = VAR20[(VAR11 * 2) + VAR15];
    }
    VAR9->VAR11[0] = FUN6(VAR9->VAR49[0][VAR9->VAR47.VAR48[1]], VAR9->VAR49[0][VAR9->VAR47.VAR48[8]]) >> 1;
    for (VAR15 = 0; VAR15 < 64; VAR15++)
    {
        VAR16 = VAR9->VAR47.VAR48[VAR15];
        VAR9->VAR49[1][VAR16] = VAR20[(VAR11 * 2) + 1 + VAR15];
    }
    VAR9->VAR11[1] = FUN6(VAR9->VAR49[1][VAR9->VAR47.VAR48[1]], VAR9->VAR49[1][VAR9->VAR47.VAR48[8]]) >> 1;
    VAR9->VAR50[0] = 0;
    VAR9->VAR51[0] = VAR9->VAR29[0] * VAR9->VAR30[0];
    VAR9->VAR52[0] = VAR9->VAR29[0];
    VAR9->VAR53[0] = VAR9->VAR30[0];
    VAR9->VAR54[0] = 0;
    VAR9->VAR55[0] = 0;
    VAR9->VAR50[1] = 1;
    VAR9->VAR51[1] = VAR9->VAR29[1] * VAR9->VAR30[1];
    VAR9->VAR52[1] = VAR9->VAR29[1];
    VAR9->VAR53[1] = VAR9->VAR30[1];
    VAR9->VAR54[1] = 1;
    VAR9->VAR55[1] = 1;
    VAR9->VAR50[2] = 2;
    VAR9->VAR51[2] = VAR9->VAR29[2] * VAR9->VAR30[2];
    VAR9->VAR52[2] = VAR9->VAR29[2];
    VAR9->VAR53[2] = VAR9->VAR30[2];
    VAR9->VAR54[2] = 1;
    VAR9->VAR55[2] = 1;
    for (VAR15 = 0; VAR15 < 3; VAR15++)
        VAR9->VAR56[VAR15] = 1024;
    VAR9->VAR57 = (VAR9->VAR17 * VAR9->VAR32 * 8 - 1) / (VAR9->VAR32 * 8);
    VAR9->VAR58 = (VAR9->VAR18 * VAR9->VAR33 * 8 - 1) / (VAR9->VAR33 * 8);
    FUN7(&VAR9->VAR59, VAR6 + 14, (VAR7 - 14) * 8);
    return FUN8(VAR9);
    return VAR15;
}