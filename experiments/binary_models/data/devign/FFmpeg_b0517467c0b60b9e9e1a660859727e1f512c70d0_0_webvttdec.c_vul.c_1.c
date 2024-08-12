static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    AVBPrint VAR6, VAR7;
    int VAR8 = 0;
    VAR9 *VAR10 = FUN2(VAR2, NULL);
    if (!VAR10)
        return FUN3(VAR11);
    FUN4(VAR10, 64, 1, 1000);
    VAR10->VAR12->VAR13 = VAR14;
    VAR10->VAR12->VAR15 = VAR16;
    VAR10->VAR17 |= VAR4->VAR18;
    FUN5(&VAR6, 0, VAR19);
    FUN5(&VAR7, 0, VAR19);
    for (;;)
    {
        int VAR20;
        int64_t VAR21;
        VAR22 *VAR23;
        const char *VAR24, *VAR25, *VAR26;
        int VAR27, VAR28;
        int64_t VAR29, VAR30;
        FUN6(VAR2->VAR31, &VAR7);
        if (!VAR7.VAR32)
            break;
        VAR24 = VAR25 = VAR7.VAR33;
        VAR21 = FUN7(VAR2->VAR31);
        if (!FUN8(VAR24, "", 9) || !FUN8(VAR24, "", 6))
            continue;
        for (VAR20 = 0; VAR24[VAR20] && VAR24[VAR20] != '' && VAR24[VAR20] != ''; VAR20++)
        {
            if (!FUN8(VAR24 + VAR20, "", 3))
            {
                VAR25 = NULL;
                break;
            }
        }
        if (!VAR25)
            VAR27 = 0;
        else
        {
            VAR27 = strcspn(VAR24, "");
            VAR24 += VAR27;
            if (*VAR24 == '')
                VAR24++;
            if (*VAR24 == '')
                VAR24++;
        }
        if ((VAR29 = FUN9(VAR24)) == VAR34)
            break;
        if (!(VAR24 = strstr(VAR24, "")))
            break;
        VAR24 += 3;
        do
            VAR24++;
        while (*VAR24 == '' || *VAR24 == '');
        if ((VAR30 = FUN9(VAR24)) == VAR34)
            break;
        VAR24 += strcspn(VAR24, "");
        while (*VAR24 == '' || *VAR24 == '')
            VAR24++;
        VAR26 = VAR24;
        VAR28 = strcspn(VAR24, "");
        VAR24 += VAR28;
        if (*VAR24 == '')
            VAR24++;
        if (*VAR24 == '')
            VAR24++;
        VAR23 = FUN10(&VAR4->VAR35, VAR24, strlen(VAR24), 0);
        if (!VAR23)
        {
            VAR8 = FUN3(VAR11);
            goto VAR36;
        }
        VAR23->VAR21 = VAR21;
        VAR23->VAR37 = VAR29;
        VAR23->VAR38 = VAR30 - VAR29;
        if (VAR39##VAR40)
        {
            VAR41 *VAR42 = FUN11(VAR23, VAR43, VAR39##VAR40);
            if (!VAR42)
            {
                VAR8 = FUN3(VAR11);
                goto VAR36;
            }
            memcpy(VAR42, VAR39, VAR39##VAR40);
        }
    }
    while (0)
        FUN12(VAR25, VAR44);
    FUN12(VAR26, VAR45);
}
FUN13(&VAR4->VAR35);
VAR36 : FUN14(&VAR7, NULL);
FUN14(&VAR6, NULL);
return VAR8;
}