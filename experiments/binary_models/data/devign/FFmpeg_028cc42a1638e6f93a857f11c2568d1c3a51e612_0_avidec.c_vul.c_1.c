static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!strcmp(VAR4->VAR5, "") && FUN2(VAR4->VAR5 + 5) == 2)
    {
        uint8_t VAR6[256];
        int VAR7 = VAR8 / 2, VAR9;
        VAR10 *VAR11 = VAR2->VAR12;
        VAR13 *VAR14;
        AVRational VAR15;
        VAR16 *VAR17 = FUN3(VAR4->VAR5 + 7, VAR4->VAR18 - 7, 0, NULL, NULL, NULL, NULL);
        AVProbeData VAR19;
        unsigned int VAR20 = FUN4(VAR17);
        if (VAR20 > VAR17->VAR21 - VAR17->VAR22)
            goto VAR23;
        VAR9 = FUN5(VAR17, VAR20, VAR6, sizeof(VAR6));
        FUN6(VAR17, VAR20 - VAR9);
        if (*VAR6)
            FUN7(&VAR2->VAR24, "", VAR6, 0);
        FUN8(VAR17);
        FUN4(VAR17);
        VAR19 = (VAR25){.VAR26 = VAR17->VAR22, .VAR27 = VAR17->VAR21 - VAR17->VAR22};
        if (!(VAR14 = FUN9(&VAR19, 1, &VAR7)))
            goto VAR23;
        if (!(VAR11->VAR28 = FUN10()))
            goto VAR23;
        VAR11->VAR28->VAR17 = VAR17;
        if (!FUN11(&VAR11->VAR28, "", VAR14, NULL))
        {
            FUN12(VAR11->VAR28, &VAR11->VAR29);
            *VAR2->VAR30 = *VAR11->VAR28->VAR31[0]->VAR30;
            VAR11->VAR28->VAR31[0]->VAR30->VAR32 = NULL;
            VAR15 = VAR11->VAR28->VAR31[0]->VAR15;
            FUN13(VAR2, 64, VAR15.VAR33, VAR15.VAR34);
        }
        VAR11->VAR35 = VAR4->VAR5;
        memset(VAR4, 0, sizeof(*VAR4));
        return 1;
    VAR23:
        FUN14(&VAR17);
    }
    return 0;
}