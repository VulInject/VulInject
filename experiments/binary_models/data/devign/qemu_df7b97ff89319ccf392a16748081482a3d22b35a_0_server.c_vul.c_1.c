static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7;
    struct nbd_request VAR8;
    struct nbd_reply VAR9;
    ssize_t VAR10;
    uint32_t VAR11;
    FUN2("");
    if (VAR3->VAR12)
    {
        return;
    }
    VAR7 = FUN3(VAR3);
    VAR10 = FUN4(VAR7, &VAR8);
    if (VAR10 == -VAR13)
    {
        goto VAR14;
    }
    if (VAR10 == -VAR15)
    {
        goto VAR16;
    }
    VAR9.VAR17 = VAR8.VAR17;
    VAR9.VAR18 = 0;
    if (VAR10 < 0)
    {
        VAR9.VAR18 = -VAR10;
        goto VAR19;
    }
    VAR11 = VAR8.VAR20 & VAR21;
    if (VAR11 != VAR22 && (VAR8.VAR23 + VAR8.VAR24) > VAR5->VAR25)
    {
        FUN5("" VAR26 "" VAR26 "" VAR26 "", VAR8.VAR23, VAR8.VAR24, (VAR27)VAR5->VAR25, (VAR27)VAR5->VAR28);
        FUN5("");
        goto VAR29;
    }
    if (VAR3->VAR12)
    {
        goto VAR14;
    }
    switch (VAR11)
    {
    case VAR30:
        FUN2("");
        if (VAR8.VAR20 & VAR31)
        {
            VAR10 = FUN6(VAR5->VAR32);
            if (VAR10 < 0)
            {
                FUN5("");
                VAR9.VAR18 = -VAR10;
                goto VAR19;
            }
        }
        VAR10 = FUN7(VAR5->VAR32, (VAR8.VAR23 + VAR5->VAR28) / VAR33, VAR7->VAR34, VAR8.VAR24 / VAR33);
        if (VAR10 < 0)
        {
            FUN5("");
            VAR9.VAR18 = -VAR10;
            goto VAR19;
        }
        FUN2("", VAR8.VAR24);
        if (FUN8(VAR7, &VAR9, VAR8.VAR24) < 0)
            goto VAR16;
        break;
    case VAR35:
        FUN2("");
        if (VAR5->VAR36 & VAR37)
        {
            FUN2("");
            VAR9.VAR18 = VAR38;
            goto VAR19;
        }
        FUN2("");
        VAR10 = FUN9(VAR5->VAR32, (VAR8.VAR23 + VAR5->VAR28) / VAR33, VAR7->VAR34, VAR8.VAR24 / VAR33);
        if (VAR10 < 0)
        {
            FUN5("");
            VAR9.VAR18 = -VAR10;
            goto VAR19;
        }
        if (VAR8.VAR20 & VAR31)
        {
            VAR10 = FUN6(VAR5->VAR32);
            if (VAR10 < 0)
            {
                FUN5("");
                VAR9.VAR18 = -VAR10;
                goto VAR19;
            }
        }
        if (FUN8(VAR7, &VAR9, 0) < 0)
        {
            goto VAR16;
        }
        break;
    case VAR22:
        FUN2("");
        VAR39 = 0;
        goto VAR16;
    case VAR40:
        FUN2("");
        VAR10 = FUN6(VAR5->VAR32);
        if (VAR10 < 0)
        {
            FUN5("");
            VAR9.VAR18 = -VAR10;
        }
        if (FUN8(VAR7, &VAR9, 0) < 0)
        {
            goto VAR16;
        }
        break;
    case VAR41:
        FUN2("");
        VAR10 = FUN10(VAR5->VAR32, (VAR8.VAR23 + VAR5->VAR28) / VAR33, VAR8.VAR24 / VAR33);
        if (VAR10 < 0)
        {
            FUN5("");
            VAR9.VAR18 = -VAR10;
        }
        if (FUN8(VAR7, &VAR9, 0) < 0)
        {
            goto VAR16;
        }
        break;
    default:
        FUN5("", VAR8.VAR20);
    VAR29:
        VAR9.VAR18 = VAR42;
    VAR19:
        if (FUN8(VAR7, &VAR9, 0) < 0)
        {
            goto VAR16;
        }
        break;
    }
    FUN2("");
VAR14:
    FUN11(VAR7);
    return;
VAR16:
    FUN11(VAR7);
    FUN12(VAR3);
}