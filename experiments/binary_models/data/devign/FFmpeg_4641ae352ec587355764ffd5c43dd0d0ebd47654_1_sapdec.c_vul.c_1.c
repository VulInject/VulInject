static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    char VAR6[1024], VAR7[1024], VAR8[1024];
    uint8_t VAR9[VAR10];
    int VAR11;
    int VAR12, VAR13;
    VAR14 *VAR15;
    if (!FUN2())
        return FUN3(VAR16);
    FUN4(NULL, 0, NULL, 0, VAR6, sizeof(VAR6), &VAR11, VAR7, sizeof(VAR7), VAR2->VAR17);
    if (VAR11 < 0)
        VAR11 = 9875;
    if (!VAR6[0])
    {
        FUN5(VAR6, "", sizeof(VAR6));
    }
    FUN6(VAR8, sizeof(VAR8), "", NULL, VAR6, VAR11, "", VAR11);
    VAR12 = FUN7(&VAR4->VAR18, VAR8, VAR19, &VAR2->VAR20, NULL);
    if (VAR12)
        goto VAR21;
    while (1)
    {
        int VAR22, VAR23;
        int VAR24;
        VAR12 = FUN8(VAR4->VAR18, VAR9, sizeof(VAR9) - 1);
        if (VAR12 == FUN3(VAR25))
            continue;
        if (VAR12 < 0)
            goto VAR21;
        VAR9[VAR12] = '';
        if (VAR12 < 8)
        {
            FUN9(VAR2, VAR26, "");
            continue;
        }
        if ((VAR9[0] & 0xe0) != 0x20)
        {
            FUN9(VAR2, VAR26, ""
                                      "");
            continue;
        }
        if (VAR9[0] & 0x04)
        {
            FUN9(VAR2, VAR26, ""
                                      "");
            continue;
        }
        VAR22 = VAR9[0] & 0x10;
        VAR23 = VAR9[1];
        VAR4->VAR27 = FUN10(&VAR9[2]);
        VAR24 = 4;
        if (VAR22)
            VAR24 += 16;
        else
            VAR24 += 4;
        VAR24 += VAR23 * 4;
        if (VAR24 + 4 >= VAR12)
        {
            FUN9(VAR2, VAR26, "");
            continue;
        }
        if (strcmp(&VAR9[VAR24], VAR28) == 0)
        {
            VAR24 += strlen(VAR28) + 1;
        }
        else if (FUN11(&VAR9[VAR24], "", 5) == 0)
        {
        }
        else
        {
            FUN9(VAR2, VAR26, "", &VAR9[VAR24]);
            continue;
        }
        VAR4->VAR29 = FUN12(&VAR9[VAR24]);
        break;
    }
    FUN9(VAR2, VAR30, "", VAR4->VAR29);
    FUN13(&VAR4->VAR31, VAR4->VAR29, strlen(VAR4->VAR29), 0, NULL, NULL, NULL, NULL);
    VAR15 = FUN14("");
    if (!VAR15)
        goto VAR21;
    VAR4->VAR32 = FUN15();
    if (!VAR4->VAR32)
    {
        VAR12 = FUN3(VAR33);
        goto VAR21;
    }
    VAR4->VAR32->VAR34 = VAR2->VAR34;
    VAR4->VAR32->VAR35 = &VAR4->VAR31;
    VAR4->VAR32->VAR20 = VAR2->VAR20;
    FUN16(!VAR4->VAR32->VAR36 && !VAR4->VAR32->VAR37);
    VAR4->VAR32->VAR36 = FUN12(VAR2->VAR36);
    VAR4->VAR32->VAR37 = FUN12(VAR2->VAR37);
    VAR12 = FUN17(&VAR4->VAR32, "", VAR15, NULL);
    if (VAR12 < 0)
        goto VAR21;
    if (VAR4->VAR32->VAR38 & VAR39)
        VAR2->VAR38 |= VAR39;
    for (VAR13 = 0; VAR13 < VAR4->VAR32->VAR40; VAR13++)
    {
        VAR41 *VAR42 = FUN18(VAR2, NULL);
        if (!VAR42)
        {
            VAR12 = FUN3(VAR33);
            goto VAR21;
        }
        VAR42->VAR43 = VAR13;
        FUN19(VAR42->VAR44, VAR4->VAR32->VAR45[VAR13]->VAR44);
        VAR42->VAR46 = VAR4->VAR32->VAR45[VAR13]->VAR46;
    }
    return 0;
VAR21:
    FUN20(VAR2);
    return VAR12;
}