static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    struct raw1394_portinfo VAR6[16];
    rom1394_directory VAR7;
    char *VAR8;
    int VAR9;
    int VAR10;
    int VAR11 = -1;
    int VAR12;
    int VAR13, VAR14 = 0;
    uint64_t VAR15 = 0;
    VAR4->VAR16 = -1;
    VAR4->VAR17 = -1;
    VAR4->VAR18 = -1;
    VAR4->VAR19 = FUN2();
    if (!VAR4->VAR19)
    {
        FUN3(VAR2, VAR20, "");
        return FUN4(VAR21);
    }
    if ((VAR10 = FUN5(VAR4->VAR19, VAR6, 16)) < 0)
    {
        FUN3(VAR2, VAR20, "");
        goto VAR22;
    }
    VAR9 = FUN6(VAR2->VAR23, &VAR8, 10);
    if (VAR8 != VAR2->VAR23 && *VAR8 == '')
    {
        FUN3(VAR2, VAR24, "", VAR9);
        VAR14 = VAR9;
        VAR10 = VAR9 + 1;
    }
    else if (strcmp(VAR2->VAR23, ""))
    {
        FUN3(VAR2, VAR20, ""%VAR25\""
                                      ""auto\"",
               VAR2->VAR23);
        goto VAR22;
    }
    if (VAR4->VAR26)
    {
        if (sscanf(VAR4->VAR26, "", (long long unsigned int *)&VAR15) != 1)
        {
            FUN3(VAR2, VAR24, "", VAR4->VAR26);
            goto VAR22;
        }
    }
    for (; VAR14 < VAR10 && VAR11 == -1; ++VAR14)
    {
        FUN7(VAR4->VAR19);
        if (!(VAR4->VAR19 = FUN8(VAR14)))
        {
            FUN3(VAR2, VAR20, "");
            goto VAR22;
        }
        for (VAR13 = 0; VAR13 < FUN9(VAR4->VAR19); ++VAR13)
        {
            if (VAR15 > 1)
            {
                if (VAR15 == FUN10(VAR4->VAR19, VAR13))
                {
                    VAR4->VAR27 = VAR13;
                    VAR11 = VAR14;
                    break;
                }
            }
            else
            {
                if (FUN11(VAR4->VAR19, VAR13, &VAR7) < 0)
                    continue;
                if (((FUN12(&VAR7) == VAR28) && FUN13(VAR4->VAR19, VAR13, VAR29)) || (VAR7.VAR30 == VAR31))
                {
                    FUN14(&VAR7);
                    VAR4->VAR27 = VAR13;
                    VAR11 = VAR14;
                    break;
                }
                FUN14(&VAR7);
            }
        }
    }
    if (VAR11 == -1)
    {
        FUN3(VAR2, VAR20, "");
        goto VAR22;
    }
    FUN15(VAR4->VAR19, 0xffc0 | VAR4->VAR27);
    if (VAR4->VAR32 == VAR33)
    {
        VAR12 = FUN16(VAR4->VAR19, VAR4->VAR27, VAR34 | VAR35 | VAR36 | VAR37 | 0xFF, 2);
        VAR12 = FUN17(VAR12);
        VAR4->VAR32 = (VAR12 == 0x10 || VAR12 == 0x90 || VAR12 == 0x1A || VAR12 == 0x9A) ? VAR38 : VAR39;
    }
    VAR4->VAR18 = FUN18(VAR4->VAR19, VAR4->VAR27, &VAR4->VAR17, FUN19(VAR4->VAR19), &VAR4->VAR16, &VAR4->VAR40);
    if (VAR4->VAR18 < 0)
        VAR4->VAR18 = 63;
    if (!VAR4->VAR41)
        VAR4->VAR41 = 100;
    if (VAR42 && VAR4->VAR32 == VAR38)
    {
        FUN20(VAR2, NULL);
        VAR4->VAR43 = FUN21(VAR2);
        if (!VAR4->VAR43)
            goto VAR22;
        VAR4->VAR44 = VAR45;
        VAR4->VAR46 = FUN22(VAR4->VAR19, (VAR47)VAR48, VAR4);
        VAR4->VAR41 *= 766;
    }
    else
    {
        VAR4->VAR49 = FUN23(VAR2);
        if (!VAR4->VAR49)
            goto VAR22;
        VAR4->VAR44 = VAR50;
        VAR4->VAR51 = FUN24(VAR4->VAR19, VAR48, VAR4);
    }
    VAR4->VAR52.VAR53 = FUN25(VAR4->VAR19);
    VAR4->VAR52.VAR54 = VAR55 | VAR56 | VAR57 | VAR58;
    if (VAR4->VAR32 == VAR38)
        FUN26(VAR4->VAR46, VAR4->VAR18);
    else
        FUN27(VAR4->VAR51, VAR4->VAR18);
    VAR4->VAR59 = 1;
    pthread_mutex_init(&VAR4->mutex, NULL);
    pthread_cond_init(&VAR4->VAR60, NULL);
    FUN28(&VAR4->VAR61, NULL, VAR62, VAR4);
    return 0;
VAR22:
    FUN7(VAR4->VAR19);
    return FUN4(VAR21);
}