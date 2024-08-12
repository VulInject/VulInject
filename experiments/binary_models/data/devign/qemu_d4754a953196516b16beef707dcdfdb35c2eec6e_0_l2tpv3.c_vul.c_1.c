int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    const VAR6 *VAR7;
    VAR8 *VAR9;
    VAR4 *VAR10;
    int VAR11 = -1, VAR12;
    struct addrinfo VAR13;
    struct VAR14 *VAR15 = NULL;
    char *VAR16, *VAR17;
    VAR10 = FUN2(&VAR18, VAR5, "", VAR3);
    VAR9 = FUN3(VAR8, VAR10, VAR10);
    VAR9->VAR19 = 0;
    VAR9->VAR20 = 0;
    VAR9->VAR21 = false;
    assert(VAR2->VAR22 == VAR23);
    VAR7 = VAR2->VAR7;
    if (VAR7->VAR24 && VAR7->VAR25)
    {
        VAR9->VAR25 = VAR7->VAR25;
    }
    else
    {
        VAR9->VAR25 = false;
    }
    if ((VAR7->VAR26) && (VAR7->VAR27 > 256))
    {
        FUN4("");
        goto VAR28;
    }
    if (VAR7->VAR29 || VAR7->VAR30)
    {
        if (VAR7->VAR29 && VAR7->VAR30)
        {
            VAR9->VAR31 = true;
        }
        else
        {
            goto VAR28;
        }
    }
    else
    {
        VAR9->VAR31 = false;
    }
    if (VAR7->VAR32 || VAR7->VAR33)
    {
        VAR9->VAR34 = true;
    }
    else
    {
        VAR9->VAR34 = false;
    }
    if (VAR7->VAR35 && VAR7->VAR36)
    {
        VAR9->VAR36 = true;
        if (!(VAR7->VAR37 && VAR7->VAR38))
        {
            FUN4("");
            goto VAR28;
        }
        else
        {
            VAR16 = VAR7->VAR16;
            VAR17 = VAR7->VAR17;
        }
    }
    else
    {
        VAR9->VAR36 = false;
        VAR16 = NULL;
        VAR17 = NULL;
    }
    VAR9->VAR27 = 4;
    VAR9->VAR39 = 0;
    VAR9->VAR40 = 4;
    VAR9->VAR41 = 4;
    VAR9->VAR42 = VAR7->VAR43;
    if (VAR7->VAR44)
    {
        VAR9->VAR45 = VAR7->VAR46;
    }
    else
    {
        VAR9->VAR45 = VAR9->VAR42;
    }
    if (VAR9->VAR31)
    {
        VAR9->VAR47 = VAR7->VAR48;
        VAR9->VAR49 = VAR7->VAR50;
        if (VAR9->VAR34 == true)
        {
            VAR9->VAR27 += 8;
            VAR9->VAR41 += 8;
        }
        else
        {
            VAR9->VAR27 += 4;
            VAR9->VAR41 += 4;
        }
    }
    memset(&VAR13, 0, sizeof(VAR13));
    if (VAR9->VAR25)
    {
        VAR13.VAR51 = VAR52;
    }
    else
    {
        VAR13.VAR51 = VAR53;
    }
    if (VAR9->VAR36)
    {
        VAR13.VAR54 = VAR55;
        VAR13.VAR56 = 0;
        VAR9->VAR27 += 4;
        VAR9->VAR41 += 4;
        VAR9->VAR39 += 4;
        VAR9->VAR40 += 4;
    }
    else
    {
        VAR13.VAR54 = VAR57;
        VAR13.VAR56 = VAR58;
    }
    VAR12 = getaddrinfo(VAR7->VAR59, VAR16, &VAR13, &VAR15);
    if ((VAR12 != 0) || (VAR15 == NULL))
    {
        FUN4("", FUN5(VAR12));
        goto VAR28;
    }
    VAR11 = socket(VAR15->VAR51, VAR15->VAR54, VAR15->VAR56);
    if (VAR11 == -1)
    {
        VAR11 = -VAR60;
        FUN4("", -VAR11);
        goto VAR28;
    }
    if (FUN6(VAR11, (struct VAR61 *)VAR15->VAR62, VAR15->VAR63))
    {
        FUN4("", VAR60);
        goto VAR28;
    }
    if (VAR15)
    {
        FUN7(VAR15);
    }
    memset(&VAR13, 0, sizeof(VAR13));
    if (VAR9->VAR25)
    {
        VAR13.VAR51 = VAR52;
    }
    else
    {
        VAR13.VAR51 = VAR53;
    }
    if (VAR9->VAR36)
    {
        VAR13.VAR54 = VAR55;
        VAR13.VAR56 = 0;
    }
    else
    {
        VAR13.VAR54 = VAR57;
        VAR13.VAR56 = VAR58;
    }
    VAR15 = NULL;
    VAR12 = getaddrinfo(VAR7->VAR64, VAR17, &VAR13, &VAR15);
    if ((VAR12 != 0) || (VAR15 == NULL))
    {
        FUN4("", FUN5(VAR12));
        goto VAR28;
    }
    VAR9->VAR65 = FUN8(sizeof(struct VAR66));
    memset(VAR9->VAR65, '', sizeof(struct VAR66));
    memcpy(VAR9->VAR65, VAR15->VAR62, VAR15->VAR63);
    VAR9->VAR67 = VAR15->VAR63;
    if (VAR15)
    {
        FUN7(VAR15);
    }
    if (VAR7->VAR68 && VAR7->VAR69)
    {
        VAR9->VAR68 = true;
        VAR9->VAR27 += 4;
    }
    else
    {
        VAR9->VAR68 = false;
    }
    if (VAR7->VAR70 && VAR7->VAR71)
    {
        VAR9->VAR68 = true;
        VAR9->VAR72 = true;
    }
    else
    {
        VAR9->VAR72 = false;
    }
    if (VAR7->VAR26)
    {
        VAR9->VAR27 += VAR7->VAR27;
    }
    if ((VAR9->VAR25) || (VAR9->VAR36))
    {
        VAR9->VAR73 = VAR9->VAR27;
    }
    else
    {
        VAR9->VAR73 = VAR9->VAR27 + sizeof(struct VAR74);
    }
    VAR9->VAR75 = FUN9(VAR9, VAR76);
    VAR9->VAR77 = FUN8(sizeof(struct VAR78) * VAR79);
    VAR9->VAR80 = FUN8(VAR9->VAR73);
    FUN10(VAR11);
    VAR9->VAR11 = VAR11;
    VAR9->VAR69 = 0;
    FUN11(VAR9, true);
    snprintf(VAR9->VAR10.VAR81, sizeof(VAR9->VAR10.VAR81), "");
    return 0;
VAR28:
    FUN12(VAR10);
    if (VAR11 > 0)
    {
        close(VAR11);
    }
    if (VAR15)
    {
        FUN7(VAR15);
    }
    return -1;
}