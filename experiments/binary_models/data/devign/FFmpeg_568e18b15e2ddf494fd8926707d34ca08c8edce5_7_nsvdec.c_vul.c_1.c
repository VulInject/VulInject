static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    uint32_t VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    unsigned int VAR19, VAR20, VAR21;
    int64_t VAR22;
    int VAR23;
    int VAR24;
    int VAR25;
    int VAR26, VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    FUN2(("", VAR32));
    VAR6->VAR33 = VAR34;
    VAR20 = FUN3(VAR9);
    if (VAR20 < 28)
        VAR6->VAR35 = VAR20;
    VAR19 = (VAR36)FUN3(VAR9);
    FUN2(("", VAR20));
    FUN2(("", VAR19));
    VAR22 = FUN3(VAR9);
    VAR6->VAR22 = VAR22 * VAR37 / 1000;
    FUN2(("", VAR22));
    VAR23 = FUN3(VAR9);
    VAR24 = FUN3(VAR9);
    VAR25 = FUN3(VAR9);
    FUN2(("", VAR23, VAR24, VAR25));
    if (FUN4(VAR9))
        FUN2(("", FUN5(VAR9)));
    if (VAR23 > 0)
    {
        char *VAR38;
        char *VAR39, *VAR40;
        char *VAR41, *VAR42;
        char VAR43;
        VAR39 = VAR38 = FUN6(VAR23 + 1);
        VAR40 = VAR38 + VAR23;
        FUN7(VAR9, VAR38, VAR23);
        while (VAR39 < VAR40)
        {
            while (*VAR39 == '')
                VAR39++;
            if (VAR39 >= VAR40 - 2)
                break;
            VAR41 = VAR39;
            VAR39 = strchr(VAR39, '');
            if (!VAR39 || VAR39 >= VAR40 - 2)
                break;
            *VAR39++ = '';
            VAR43 = *VAR39++;
            VAR42 = VAR39;
            VAR39 = strchr(VAR39, VAR43);
            if (!VAR39 || VAR39 >= VAR40)
                break;
            *VAR39++ = '';
            FUN2(("", VAR41, VAR42));
            if (!strcmp(VAR41, ""))
            {
            }
            else if (!strcmp(VAR41, "") || !strcmp(VAR41, ""))
            {
                strncpy(VAR2->VAR44, VAR42, 512 - 1);
            }
            else if (!strcmp(VAR41, ""))
            {
                strncpy(VAR2->VAR45, VAR42, 512 - 1);
            }
            else if (!strcmp(VAR41, "") || !strcmp(VAR41, ""))
            {
                strncpy(VAR2->VAR46, VAR42, 512 - 1);
            }
        }
        FUN8(VAR38);
    }
    if (FUN4(VAR9))
        FUN2(("", FUN5(VAR9)));
    if (VAR25 > 0)
    {
        VAR6->VAR47 = VAR25;
        VAR6->VAR48 = FUN9(VAR24 * sizeof(VAR36));
        FUN7(VAR9, VAR6->VAR48, VAR24 * sizeof(VAR36));
    }
    FUN2(("", FUN5(VAR9)));
    FUN2(("", VAR24));
    FUN2(("", VAR24));
    for (VAR26 = 0; VAR26 < VAR24; VAR26++)
    {
        unsigned char VAR49[8];
        FUN10(VAR9, VAR20 + VAR6->VAR48[VAR26], VAR50);
        FUN7(VAR9, VAR49, 8);
        FUN2((""
               "",
               VAR6->VAR48[VAR26], VAR20 + VAR6->VAR48[VAR26], VAR49[0], VAR49[1], VAR49[2], VAR49[3], VAR49[4], VAR49[5], VAR49[6], VAR49[7], FUN11(VAR49[0]), FUN11(VAR49[1]), FUN11(VAR49[2]), FUN11(VAR49[3]), FUN11(VAR49[4]), FUN11(VAR49[5]), FUN11(VAR49[6]), FUN11(VAR49[7])));
    }
    FUN10(VAR9, VAR6->VAR51 + VAR20, VAR50);
    if (FUN4(VAR9))
        VAR6->VAR33 = VAR52;
    return 0;