int FUN1(VAR1 *VAR2, int VAR3, off_t VAR4, uint64_t VAR5, uint32_t VAR6, VAR7 *VAR8)
{
    struct nbd_request VAR9;
    struct nbd_reply VAR10;
    int VAR11;
    FUN2("");
    if (FUN3(VAR3, &VAR9) == -1)
        return -1;
    if (VAR9.VAR12 > VAR13)
    {
        FUN4("", VAR9.VAR12, VAR13);
        VAR14 = VAR15;
        return -1;
    }
    if ((VAR9.VAR16 + VAR9.VAR12) < VAR9.VAR16)
    {
        FUN4(""
            "");
        VAR14 = VAR15;
        return -1;
    }
    if ((VAR9.VAR16 + VAR9.VAR12) > VAR4)
    {
        FUN4("" VAR17 "" VAR17 "" VAR17 "", VAR9.VAR16, VAR9.VAR12, (VAR18)VAR4, VAR5);
        FUN4("");
        VAR14 = VAR15;
        return -1;
    }
    FUN2("");
    VAR10.VAR19 = VAR9.VAR19;
    VAR10.VAR20 = 0;
    switch (VAR9.VAR21 & VAR22)
    {
    case VAR23:
        FUN2("");
        VAR11 = FUN5(VAR2, (VAR9.VAR16 + VAR5) / 512, VAR8, VAR9.VAR12 / 512);
        if (VAR11 < 0)
        {
            FUN4("");
            VAR10.VAR20 = -VAR11;
            VAR9.VAR12 = 0;
        }
        FUN2("", VAR9.VAR12);
        if (FUN6(VAR3, &VAR10, VAR8, VAR9.VAR12) < 0)
            return -1;
        break;
    case VAR24:
        FUN2("");
        FUN2("", VAR9.VAR12);
        if (FUN7(VAR3, VAR8, VAR9.VAR12) != VAR9.VAR12)
        {
            FUN4("");
            VAR14 = VAR15;
            return -1;
        }
        if (VAR6 & VAR25)
        {
            FUN2("");
            VAR10.VAR20 = 1;
        }
        else
        {
            FUN2("");
            VAR11 = FUN8(VAR2, (VAR9.VAR16 + VAR5) / 512, VAR8, VAR9.VAR12 / 512);
            if (VAR11 < 0)
            {
                FUN4("");
                VAR10.VAR20 = -VAR11;
                VAR9.VAR12 = 0;
            }
            if (VAR9.VAR21 & VAR26)
            {
                VAR11 = FUN9(VAR2);
                if (VAR11 < 0)
                {
                    FUN4("");
                    VAR10.VAR20 = -VAR11;
                }
            }
        }
        if (FUN6(VAR3, &VAR10, NULL, 0) < 0)
            return -1;
        break;
    case VAR27:
        FUN2("");
        VAR14 = 0;
        return 1;
    case VAR28:
        FUN2("");
        VAR11 = FUN9(VAR2);
        if (VAR11 < 0)
        {
            FUN4("");
            VAR10.VAR20 = -VAR11;
        }
        if (FUN6(VAR3, &VAR10, NULL, 0) < 0)
            return -1;
        break;
    case VAR29:
        FUN2("");
        VAR11 = FUN10(VAR2, (VAR9.VAR16 + VAR5) / 512, VAR9.VAR12 / 512);
        if (VAR11 < 0)
        {
            FUN4("");
            VAR10.VAR20 = -VAR11;
        }
        if (FUN6(VAR3, &VAR10, NULL, 0) < 0)
            return -1;
        break;
    default:
        FUN4("", VAR9.VAR21);
        VAR14 = VAR15;
        return -1;
    }
    FUN2("");
    return 0;
}