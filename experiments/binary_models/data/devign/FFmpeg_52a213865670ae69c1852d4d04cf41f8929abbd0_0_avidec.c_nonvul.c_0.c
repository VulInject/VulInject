static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR4->VAR5 >= 7 && VAR4->VAR5 < VAR6 - VAR7 && !strcmp(VAR4->VAR8, "") && FUN2(VAR4->VAR8 + 5) == 2)
    {
        uint8_t VAR9[256];
        int VAR10 = VAR11, VAR12;
        VAR13 *VAR14 = VAR2->VAR15;
        VAR16 *VAR17;
        AVRational VAR18;
        int VAR5;
        VAR19 *VAR20 = FUN3(VAR4->VAR8 + 7, VAR4->VAR5 - 7, 0, NULL, NULL, NULL, NULL);
        AVProbeData VAR21;
        unsigned int VAR22 = FUN4(VAR20);
        if (VAR22 > VAR20->VAR23 - VAR20->VAR24)
            goto VAR25;
        VAR12 = FUN5(VAR20, VAR22, VAR9, sizeof(VAR9));
        FUN6(VAR20, VAR22 - VAR12);
        if (*VAR9)
            FUN7(&VAR2->VAR26, "", VAR9, 0);
        FUN8(VAR20);
        FUN4(VAR20);
        VAR5 = VAR20->VAR23 - VAR20->VAR24;
        VAR21 = (VAR27){.VAR28 = FUN9(VAR5 + VAR7), .VAR29 = VAR5};
        if (!VAR21.VAR28)
            goto VAR25;
        memcpy(VAR21.VAR28, VAR20->VAR24, VAR5);
        VAR17 = FUN10(&VAR21, 1, &VAR10);
        FUN11(&VAR21.VAR28);
        if (!VAR17)
            goto VAR25;
        if (!(VAR14->VAR30 = FUN12()))
            goto VAR25;
        VAR14->VAR30->VAR20 = VAR20;
        if (!FUN13(&VAR14->VAR30, "", VAR17, NULL))
        {
            FUN14(VAR14->VAR30, &VAR14->VAR31);
            *VAR2->VAR32 = *VAR14->VAR30->VAR33[0]->VAR32;
            VAR14->VAR30->VAR33[0]->VAR32->VAR34 = NULL;
            VAR18 = VAR14->VAR30->VAR33[0]->VAR18;
            FUN15(VAR2, 64, VAR18.VAR35, VAR18.VAR36);
        }
        VAR14->VAR37 = VAR4->VAR8;
        memset(VAR4, 0, sizeof(*VAR4));
        return 1;
    VAR25:
        FUN11(&VAR20);
    }
    return 0;
}