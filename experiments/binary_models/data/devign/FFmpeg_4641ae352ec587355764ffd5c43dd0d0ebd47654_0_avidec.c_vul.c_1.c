static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    if (VAR6->VAR7 >= 7 && VAR6->VAR7 < VAR8 - VAR9 && !strcmp(VAR6->VAR10, "") && FUN2(VAR6->VAR10 + 5) == 2)
    {
        uint8_t VAR11[256];
        int VAR12 = VAR13, VAR14;
        VAR15 *VAR16 = VAR4->VAR17;
        VAR18 *VAR19;
        AVRational VAR20;
        int VAR7;
        VAR21 *VAR22 = FUN3(VAR6->VAR10 + 7, VAR6->VAR7 - 7, 0, NULL, NULL, NULL, NULL);
        AVProbeData VAR23;
        unsigned int VAR24 = FUN4(VAR22);
        if (VAR24 > VAR22->VAR25 - VAR22->VAR26)
            goto VAR27;
        VAR14 = FUN5(VAR22, VAR24, VAR11, sizeof(VAR11));
        FUN6(VAR22, VAR24 - VAR14);
        if (*VAR11)
            FUN7(&VAR4->VAR28, "", VAR11, 0);
        FUN8(VAR22);
        FUN4(VAR22);
        VAR7 = VAR22->VAR25 - VAR22->VAR26;
        VAR23 = (VAR29){.VAR30 = FUN9(VAR7 + VAR9), .VAR31 = VAR7};
        if (!VAR23.VAR30)
            goto VAR27;
        memcpy(VAR23.VAR30, VAR22->VAR26, VAR7);
        VAR19 = FUN10(&VAR23, 1, &VAR12);
        FUN11(&VAR23.VAR30);
        if (!VAR19)
            goto VAR27;
        if (!(VAR16->VAR32 = FUN12()))
            goto VAR27;
        VAR16->VAR32->VAR22 = VAR22;
        FUN13(!VAR16->VAR32->VAR33 && !VAR16->VAR32->VAR34);
        VAR16->VAR32->VAR33 = FUN14(VAR2->VAR33);
        VAR16->VAR32->VAR34 = FUN14(VAR2->VAR34);
        if (!FUN15(&VAR16->VAR32, "", VAR19, NULL))
        {
            FUN16(VAR16->VAR32, &VAR16->VAR35);
            *VAR4->VAR36 = *VAR16->VAR32->VAR37[0]->VAR36;
            VAR16->VAR32->VAR37[0]->VAR36->VAR38 = NULL;
            VAR20 = VAR16->VAR32->VAR37[0]->VAR20;
            FUN17(VAR4, 64, VAR20.VAR39, VAR20.VAR40);
        }
        VAR16->VAR41 = VAR6->VAR10;
        memset(VAR6, 0, sizeof(*VAR6));
        return 1;
    VAR27:
        FUN11(&VAR22);
    }
    return 0;
}