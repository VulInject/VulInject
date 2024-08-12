static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    X86CPUTopoInfo VAR12;
    VAR13 *VAR14 = FUN2(VAR4);
    VAR15 *VAR16 = FUN3(VAR2);
    if (VAR14->VAR17 == VAR18)
    {
        int VAR19 = (VAR20 - 1) / VAR21 / VAR22;
        if (VAR14->VAR23 < 0)
        {
            FUN4(VAR6, "");
            return;
        }
        else if (VAR14->VAR23 > VAR19)
        {
            FUN4(VAR6, "", VAR14->VAR23, VAR19);
            return;
        }
        if (VAR14->VAR24 < 0)
        {
            FUN4(VAR6, "");
            return;
        }
        else if (VAR14->VAR24 > (VAR22 - 1))
        {
            FUN4(VAR6, "", VAR14->VAR24, VAR22 - 1);
            return;
        }
        if (VAR14->VAR25 < 0)
        {
            FUN4(VAR6, "");
            return;
        }
        else if (VAR14->VAR25 > (VAR21 - 1))
        {
            FUN4(VAR6, "", VAR14->VAR25, VAR21 - 1);
            return;
        }
        VAR12.VAR26 = VAR14->VAR23;
        VAR12.VAR24 = VAR14->VAR24;
        VAR12.VAR27 = VAR14->VAR25;
        VAR14->VAR17 = FUN5(VAR22, VAR21, &VAR12);
    }
    VAR11 = FUN6(FUN7(VAR16), VAR14->VAR17, &VAR7);
    if (!VAR11)
    {
        VAR28 *VAR29 = FUN7(VAR16);
        FUN8(VAR14->VAR17, VAR22, VAR21, &VAR12);
        FUN4(VAR6, ""
                         "" VAR30 "",
                   VAR12.VAR26, VAR12.VAR24, VAR12.VAR27, VAR14->VAR17, VAR29->VAR31->VAR32 - 1);
        return;
    }
    if (VAR11->VAR14)
    {
        FUN4(VAR6, "" VAR30 "", VAR7, VAR14->VAR17);
        return;
    }
    FUN8(VAR14->VAR17, VAR22, VAR21, &VAR12);
    if (VAR14->VAR23 != -1 && VAR14->VAR23 != VAR12.VAR26)
    {
        FUN4(VAR6, ""
                         "",
                   VAR14->VAR23, VAR14->VAR17, VAR12.VAR26);
        return;
    }
    VAR14->VAR23 = VAR12.VAR26;
    if (VAR14->VAR24 != -1 && VAR14->VAR24 != VAR12.VAR24)
    {
        FUN4(VAR6, ""
                         "",
                   VAR14->VAR24, VAR14->VAR17, VAR12.VAR24);
        return;
    }
    VAR14->VAR24 = VAR12.VAR24;
    if (VAR14->VAR25 != -1 && VAR14->VAR25 != VAR12.VAR27)
    {
        FUN4(VAR6, ""
                         "",
                   VAR14->VAR25, VAR14->VAR17, VAR12.VAR27);
        return;
    }
    VAR14->VAR25 = VAR12.VAR27;
    VAR9 = FUN9(VAR14);
    VAR9->VAR33 = VAR7;
    FUN10(VAR11, VAR4, VAR6);
}