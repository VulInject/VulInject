static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VdiHeader VAR11;
    size_t VAR12;
    int VAR13;
    FUN2("");
    VAR13 = FUN3(VAR2->VAR14, 0, (VAR15 *)&VAR11, 1);
    if (VAR13 < 0)
    {
        goto VAR16;
    }
    FUN4(&VAR11);
    FUN5(&VAR11);
    if (VAR11.VAR17 % VAR18 != 0)
    {
        FUN2("" VAR19 "", VAR11.VAR17);
        VAR11.VAR17 += VAR18 - 1;
        VAR11.VAR17 &= ~(VAR18 - 1);
    }
    if (VAR11.VAR20 != VAR21)
    {
        FUN6(VAR7, "", VAR11.VAR20);
        VAR13 = -VAR22;
        goto VAR16;
    }
    else if (VAR11.VAR23 != VAR24)
    {
        FUN6(VAR7, "", VAR11.VAR23 >> 16, VAR11.VAR23 & 0xffff);
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (VAR11.VAR26 % VAR18 != 0)
    {
        FUN6(VAR7, ""
                         "",
                   VAR11.VAR26);
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (VAR11.VAR27 % VAR18 != 0)
    {
        FUN6(VAR7, "", VAR11.VAR27);
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (VAR11.VAR28 != VAR18)
    {
        FUN6(VAR7, "", VAR11.VAR28, VAR18);
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (VAR11.VAR29 != 1 * VAR30)
    {
        FUN6(VAR7, "", VAR11.VAR29, 1 * VAR30);
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (VAR11.VAR17 > (VAR31)VAR11.VAR32 * VAR11.VAR29)
    {
        FUN6(VAR7, "" VAR19 ""
                         "" VAR19 "",
                   VAR11.VAR17, (VAR31)VAR11.VAR32 * VAR11.VAR29);
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (!FUN7(VAR11.VAR33))
    {
        FUN6(VAR7, "");
        VAR13 = -VAR25;
        goto VAR16;
    }
    else if (!FUN7(VAR11.VAR34))
    {
        FUN6(VAR7, "");
        VAR13 = -VAR25;
        goto VAR16;
    }
    VAR2->VAR35 = VAR11.VAR17 / VAR18;
    VAR9->VAR29 = VAR11.VAR29;
    VAR9->VAR36 = VAR11.VAR29 / VAR18;
    VAR9->VAR37 = VAR11.VAR26 / VAR18;
    VAR9->VAR11 = VAR11;
    VAR12 = VAR11.VAR32 * sizeof(VAR38);
    VAR12 = (VAR12 + VAR18 - 1) / VAR18;
    VAR9->VAR39 = FUN8(VAR12 * VAR18);
    VAR13 = FUN3(VAR2->VAR14, VAR9->VAR37, (VAR15 *)VAR9->VAR39, VAR12);
    if (VAR13 < 0)
    {
        goto VAR40;
    }
    FUN9(&VAR9->VAR41, VAR42, "", VAR2->VAR43, "");
    FUN10(VAR9->VAR41);
    return 0;
VAR40:
    FUN11(VAR9->VAR39);
VAR16:
    return VAR13;
}