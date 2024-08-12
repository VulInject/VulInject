static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    char VAR6[1024], VAR7[1024], VAR8[1024], VAR9[50] = "";
    char *VAR10;
    int VAR11 = 9875, VAR12 = 5004, VAR13, VAR14 = 0, VAR15 = 0, VAR16 = 255;
    VAR1 **VAR17 = NULL;
    int VAR18 = 0;
    struct sockaddr_storage VAR19;
    socklen_t VAR20 = sizeof(VAR19);
    int VAR21;
    VAR22 *VAR23 = FUN2(VAR2->VAR24, "", NULL, 0);
    if (!FUN3())
        return FUN4(VAR25);
    FUN5(NULL, 0, NULL, 0, VAR6, sizeof(VAR6), &VAR12, VAR7, sizeof(VAR7), VAR2->VAR26);
    if (VAR12 < 0)
        VAR12 = 5004;
    VAR10 = strrchr(VAR7, '');
    if (VAR10)
    {
        char VAR27[50];
        if (FUN6(VAR27, sizeof(VAR27), "", VAR10))
        {
            VAR11 = FUN7(VAR27, NULL, 10);
        }
        if (FUN6(VAR27, sizeof(VAR27), "", VAR10))
        {
            VAR15 = FUN7(VAR27, NULL, 10);
        }
        if (FUN6(VAR27, sizeof(VAR27), "", VAR10))
        {
            VAR16 = FUN7(VAR27, NULL, 10);
        }
        if (FUN6(VAR27, sizeof(VAR27), "", VAR10))
        {
            FUN8(VAR9, VAR27, sizeof(VAR9));
        }
    }
    if (!VAR9[0])
    {
        struct addrinfo VAR28 = {0}, *VAR29 = NULL;
        VAR28.VAR30 = VAR31;
        if (getaddrinfo(VAR6, NULL, &VAR28, &VAR29))
        {
            FUN9(VAR2, VAR32, "", VAR6);
            VAR18 = FUN4(VAR25);
            goto VAR33;
        }
        if (VAR29->VAR30 == VAR34)
        {
            FUN8(VAR9, "", sizeof(VAR9));
        }
        else if (VAR29->VAR30 == VAR35)
        {
            FUN8(VAR9, "", sizeof(VAR9));
        }
        else
        {
            FUN10(VAR29);
            FUN9(VAR2, VAR32, ""
                                    "",
                   VAR6);
            VAR18 = FUN4(VAR25);
            goto VAR33;
        }
        FUN10(VAR29);
    }
    VAR4->VAR36 = FUN11(NULL, NULL);
    if (!VAR4->VAR36)
    {
        VAR18 = FUN4(VAR37);
        goto VAR33;
    }
    VAR17 = FUN12(sizeof(VAR1 *) * VAR2->VAR38);
    if (!VAR17)
    {
        VAR18 = FUN4(VAR37);
        goto VAR33;
    }
    VAR2->VAR39 = FUN13();
    for (VAR13 = 0; VAR13 < VAR2->VAR38; VAR13++)
    {
        VAR40 *VAR41;
        FUN14(VAR8, sizeof(VAR8), "", NULL, VAR6, VAR12, "", VAR16);
        if (!VAR15)
            VAR12 += 2;
        VAR18 = FUN15(&VAR41, VAR8, VAR42, &VAR2->VAR43, NULL, VAR4->VAR36);
        if (VAR18)
        {
            VAR18 = FUN4(VAR25);
            goto VAR33;
        }
        VAR18 = FUN16(&VAR17[VAR13], VAR2, VAR2->VAR44[VAR13], VAR41, 0, VAR13);
        if (VAR18 < 0)
            goto VAR33;
        VAR2->VAR44[VAR13]->VAR5 = VAR17[VAR13];
        VAR2->VAR44[VAR13]->VAR45 = VAR17[VAR13]->VAR44[0]->VAR45;
        FUN8(VAR17[VAR13]->VAR26, VAR8, sizeof(VAR17[VAR13]->VAR26));
    }
    if (VAR2->VAR38 > 0 && VAR23)
        FUN17(&VAR17[0]->VAR24, "", VAR23->VAR46, 0);
    FUN14(VAR8, sizeof(VAR8), "", NULL, VAR9, VAR11, "", VAR16);
    VAR18 = FUN15(&VAR4->VAR47, VAR8, VAR42, &VAR2->VAR43, NULL, VAR4->VAR36);
    if (VAR18)
    {
        VAR18 = FUN4(VAR25);
        goto VAR33;
    }
    VAR21 = FUN18(VAR4->VAR47);
    if (FUN19(VAR21, (struct VAR48 *)&VAR19, &VAR20))
    {
        VAR18 = FUN4(VAR25);
        goto VAR33;
    }
    if (VAR19.VAR49 != VAR34 && VAR19.VAR49 != VAR35)
    {
        FUN9(VAR2, VAR32, "");
        VAR18 = FUN4(VAR25);
        goto VAR33;
    }
    VAR4->VAR50 = 8192;
    VAR4->VAR51 = FUN12(VAR4->VAR50);
    if (!VAR4->VAR51)
    {
        VAR18 = FUN4(VAR25);
        goto VAR33;
    }
    VAR4->VAR51[VAR14] = (1 << 5);
    if (VAR19.VAR49 == VAR35)
        VAR4->VAR51[VAR14] |= 0x10;
    VAR14++;
    VAR4->VAR51[VAR14++] = 0;
    FUN20(&VAR4->VAR51[VAR14], FUN21());
    VAR14 += 2;
    if (VAR19.VAR49 == VAR34)
    {
        memcpy(&VAR4->VAR51[VAR14], &((struct VAR52 *)&VAR19)->VAR53, sizeof(struct VAR54));
        VAR14 += sizeof(struct VAR54);
    }
    else
    {
        memcpy(&VAR4->VAR51[VAR14], &((struct VAR55 *)&VAR19)->VAR56, sizeof(struct VAR57));
        VAR14 += sizeof(struct VAR57);
    }
    FUN8(&VAR4->VAR51[VAR14], "", VAR4->VAR50 - VAR14);
    VAR14 += strlen(&VAR4->VAR51[VAR14]) + 1;
    if (FUN22(VAR17, VAR2->VAR38, &VAR4->VAR51[VAR14], VAR4->VAR50 - VAR14))
    {
        VAR18 = VAR58;
        goto VAR33;
    }
    FUN23(&VAR17);
    FUN9(VAR2, VAR59, "", &VAR4->VAR51[VAR14]);
    VAR14 += strlen(&VAR4->VAR51[VAR14]);
    VAR4->VAR50 = VAR14;
    if (VAR4->VAR50 > VAR4->VAR47->VAR60)
    {
        FUN9(VAR2, VAR32, ""
                                "");
        goto VAR33;
    }
    return 0;
VAR33:
    FUN24(VAR17);
    FUN25(VAR2);
    return VAR18;
}