int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    const VAR8 *VAR9;
    VAR10 *VAR11;
    VAR4 *VAR12;
    int VAR13 = -1, VAR14;
    struct addrinfo VAR15;
    struct VAR16 *VAR17 = NULL;
    char *VAR18, *VAR19;
    VAR12 = FUN2(&VAR20, VAR5, "", VAR3);
    VAR11 = FUN3(VAR10, VAR12, VAR12);
    VAR11->VAR21 = 0;
    VAR11->VAR22 = 0;
    VAR11->VAR23 = false;
    assert(VAR2->VAR24 == VAR25);
    VAR9 = VAR2->VAR26.VAR9.VAR27;
    if (VAR9->VAR28 && VAR9->VAR29)
    {
        VAR11->VAR29 = VAR9->VAR29;
    }
    else
    {
        VAR11->VAR29 = false;
    }
    if ((VAR9->VAR30) && (VAR9->VAR31 > 256))
    {
        FUN4("");
        goto VAR32;
    }
    if (VAR9->VAR33 || VAR9->VAR34)
    {
        if (VAR9->VAR33 && VAR9->VAR34)
        {
            VAR11->VAR35 = true;
        }
        else
        {
            goto VAR32;
        }
    }
    else
    {
        VAR11->VAR35 = false;
    }
    if (VAR9->VAR36 || VAR9->VAR37)
    {
        VAR11->VAR38 = true;
    }
    else
    {
        VAR11->VAR38 = false;
    }
    if (VAR9->VAR39 && VAR9->VAR40)
    {
        VAR11->VAR40 = true;
        if (!(VAR9->VAR41 && VAR9->VAR42))
        {
            FUN4("");
            goto VAR32;
        }
        else
        {
            VAR18 = VAR9->VAR18;
            VAR19 = VAR9->VAR19;
        }
    }
    else
    {
        VAR11->VAR40 = false;
        VAR18 = NULL;
        VAR19 = NULL;
    }
    VAR11->VAR31 = 4;
    VAR11->VAR43 = 0;
    VAR11->VAR44 = 4;
    VAR11->VAR45 = 4;
    VAR11->VAR46 = VAR9->VAR47;
    if (VAR9->VAR48)
    {
        VAR11->VAR49 = VAR9->VAR50;
    }
    else
    {
        VAR11->VAR49 = VAR11->VAR46;
    }
    if (VAR11->VAR35)
    {
        VAR11->VAR51 = VAR9->VAR52;
        VAR11->VAR53 = VAR9->VAR54;
        if (VAR11->VAR38 == true)
        {
            VAR11->VAR31 += 8;
            VAR11->VAR45 += 8;
        }
        else
        {
            VAR11->VAR31 += 4;
            VAR11->VAR45 += 4;
        }
    }
    memset(&VAR15, 0, sizeof(VAR15));
    if (VAR11->VAR29)
    {
        VAR15.VAR55 = VAR56;
    }
    else
    {
        VAR15.VAR55 = VAR57;
    }
    if (VAR11->VAR40)
    {
        VAR15.VAR58 = VAR59;
        VAR15.VAR60 = 0;
        VAR11->VAR31 += 4;
        VAR11->VAR45 += 4;
        VAR11->VAR43 += 4;
        VAR11->VAR44 += 4;
    }
    else
    {
        VAR15.VAR58 = VAR61;
        VAR15.VAR60 = VAR62;
    }
    VAR14 = getaddrinfo(VAR9->VAR63, VAR18, &VAR15, &VAR17);
    if ((VAR14 != 0) || (VAR17 == NULL))
    {
        FUN4("", FUN5(VAR14));
        goto VAR32;
    }
    VAR13 = socket(VAR17->VAR55, VAR17->VAR58, VAR17->VAR60);
    if (VAR13 == -1)
    {
        VAR13 = -VAR64;
        FUN4("", -VAR13);
        goto VAR32;
    }
    if (FUN6(VAR13, (struct VAR65 *)VAR17->VAR66, VAR17->VAR67))
    {
        FUN4("", VAR64);
        goto VAR32;
    }
    if (VAR17)
    {
        FUN7(VAR17);
    }
    memset(&VAR15, 0, sizeof(VAR15));
    if (VAR11->VAR29)
    {
        VAR15.VAR55 = VAR56;
    }
    else
    {
        VAR15.VAR55 = VAR57;
    }
    if (VAR11->VAR40)
    {
        VAR15.VAR58 = VAR59;
        VAR15.VAR60 = 0;
    }
    else
    {
        VAR15.VAR58 = VAR61;
        VAR15.VAR60 = VAR62;
    }
    VAR17 = NULL;
    VAR14 = getaddrinfo(VAR9->VAR68, VAR19, &VAR15, &VAR17);
    if ((VAR14 != 0) || (VAR17 == NULL))
    {
        FUN4("", FUN5(VAR14));
        goto VAR32;
    }
    VAR11->VAR69 = FUN8(struct VAR70, 1);
    memcpy(VAR11->VAR69, VAR17->VAR66, VAR17->VAR67);
    VAR11->VAR71 = VAR17->VAR67;
    if (VAR17)
    {
        FUN7(VAR17);
    }
    if (VAR9->VAR72 && VAR9->VAR73)
    {
        VAR11->VAR72 = true;
        VAR11->VAR31 += 4;
    }
    else
    {
        VAR11->VAR72 = false;
    }
    if (VAR9->VAR74 && VAR9->VAR75)
    {
        VAR11->VAR72 = true;
        VAR11->VAR76 = true;
    }
    else
    {
        VAR11->VAR76 = false;
    }
    if (VAR9->VAR30)
    {
        VAR11->VAR31 += VAR9->VAR31;
    }
    if ((VAR11->VAR29) || (VAR11->VAR40))
    {
        VAR11->VAR77 = VAR11->VAR31;
    }
    else
    {
        VAR11->VAR77 = VAR11->VAR31 + sizeof(struct VAR78);
    }
    VAR11->VAR79 = FUN9(VAR11, VAR80);
    VAR11->VAR81 = FUN10(struct VAR82, VAR83);
    VAR11->VAR84 = FUN11(VAR11->VAR77);
    FUN12(VAR13);
    VAR11->VAR13 = VAR13;
    VAR11->VAR73 = 0;
    FUN13(VAR11, true);
    snprintf(VAR11->VAR12.VAR85, sizeof(VAR11->VAR12.VAR85), "");
    return 0;
VAR32:
    FUN14(VAR12);
    if (VAR13 >= 0)
    {
        close(VAR13);
    }
    if (VAR17)
    {
        FUN7(VAR17);
    }
    return -1;
}