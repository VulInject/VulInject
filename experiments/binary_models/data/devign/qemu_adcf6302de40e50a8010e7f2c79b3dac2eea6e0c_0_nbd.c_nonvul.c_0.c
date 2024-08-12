int FUN1(VAR1 *VAR2, int VAR3, off_t VAR4, uint64_t VAR5, VAR6 *VAR7, uint32_t VAR8, VAR9 *VAR10, int VAR11)
{
    struct nbd_request VAR12;
    struct nbd_reply VAR13;
    int VAR14;
    FUN2("");
    if (FUN3(VAR3, &VAR12) == -1)
        return -1;
    if (VAR12.VAR15 + VAR16 > VAR11)
    {
        FUN4("", VAR12.VAR15 + VAR16, VAR11);
        VAR17 = VAR18;
        return -1;
    }
    if ((VAR12.VAR19 + VAR12.VAR15) < VAR12.VAR19)
    {
        FUN4(""
            "");
        VAR17 = VAR18;
        return -1;
    }
    if ((VAR12.VAR19 + VAR12.VAR15) > VAR4)
    {
        FUN4("" VAR20 "" VAR20 "" VAR20 "", VAR12.VAR19, VAR12.VAR15, (VAR21)VAR4, VAR5);
        FUN4("");
        VAR17 = VAR18;
        return -1;
    }
    FUN2("");
    VAR13.VAR22 = VAR12.VAR22;
    VAR13.VAR23 = 0;
    switch (VAR12.VAR24)
    {
    case VAR25:
        FUN2("");
        VAR14 = FUN5(VAR2, (VAR12.VAR19 + VAR5) / 512, VAR10 + VAR16, VAR12.VAR15 / 512);
        if (VAR14 < 0)
        {
            FUN4("");
            VAR13.VAR23 = -VAR14;
            VAR12.VAR15 = 0;
        }
        *VAR7 += VAR12.VAR15;
        FUN2("", VAR12.VAR15);
        FUN6((VAR26 *)VAR10, VAR27);
        FUN6((VAR26 *)(VAR10 + 4), VAR13.VAR23);
        FUN7((VAR21 *)(VAR10 + 8), VAR13.VAR22);
        FUN2("");
        if (FUN8(VAR3, VAR10, VAR12.VAR15 + VAR16) != VAR12.VAR15 + VAR16)
        {
            FUN4("");
            VAR17 = VAR18;
            return -1;
        }
        break;
    case VAR28:
        FUN2("");
        FUN2("", VAR12.VAR15);
        if (FUN9(VAR3, VAR10, VAR12.VAR15) != VAR12.VAR15)
        {
            FUN4("");
            VAR17 = VAR18;
            return -1;
        }
        if (VAR8 & VAR29)
        {
            FUN2("");
            VAR13.VAR23 = 1;
        }
        else
        {
            FUN2("");
            VAR14 = FUN10(VAR2, (VAR12.VAR19 + VAR5) / 512, VAR10, VAR12.VAR15 / 512);
            if (VAR14 < 0)
            {
                FUN4("");
                VAR13.VAR23 = -VAR14;
                VAR12.VAR15 = 0;
            }
            *VAR7 += VAR12.VAR15;
        }
        if (FUN11(VAR3, &VAR13) == -1)
            return -1;
        break;
    case VAR30:
        FUN2("");
        VAR17 = 0;
        return 1;
    default:
        FUN4("", VAR12.VAR24);
        VAR17 = VAR18;
        return -1;
    }
    FUN2("");
    return 0;
}