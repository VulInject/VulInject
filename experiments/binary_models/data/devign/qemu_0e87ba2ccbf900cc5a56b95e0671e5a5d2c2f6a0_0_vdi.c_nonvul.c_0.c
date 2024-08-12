static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VdiHeader VAR7;
    size_t VAR8;
    int VAR9;
    FUN2("");
    VAR9 = FUN3(VAR2->VAR10, 0, (VAR11 *)&VAR7, 1);
    if (VAR9 < 0)
    {
        goto VAR12;
    }
    FUN4(&VAR7);
    FUN5(&VAR7);
    if (VAR7.VAR13 % VAR14 != 0)
    {
        FUN2("" VAR15 "", VAR7.VAR13);
        VAR7.VAR13 += VAR14 - 1;
        VAR7.VAR13 &= ~(VAR14 - 1);
    }
    if (VAR7.VAR16 != VAR17)
    {
        FUN2("", VAR7.VAR16);
        VAR9 = -VAR18;
        goto VAR12;
    }
    else if (VAR7.VAR19 != VAR20)
    {
        FUN2("", VAR7.VAR19 >> 16, VAR7.VAR19 & 0xffff);
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (VAR7.VAR22 % VAR14 != 0)
    {
        FUN2("", VAR7.VAR22);
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (VAR7.VAR23 % VAR14 != 0)
    {
        FUN2("", VAR7.VAR23);
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (VAR7.VAR24 != VAR14)
    {
        FUN2("", VAR7.VAR24);
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (VAR7.VAR25 != 1 * VAR26)
    {
        FUN2("", VAR7.VAR25);
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (VAR7.VAR13 > (VAR27)VAR7.VAR28 * VAR7.VAR25)
    {
        FUN2("" VAR15 "", VAR7.VAR13);
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (!FUN6(VAR7.VAR29))
    {
        FUN2("");
        VAR9 = -VAR21;
        goto VAR12;
    }
    else if (!FUN6(VAR7.VAR30))
    {
        FUN2("");
        VAR9 = -VAR21;
        goto VAR12;
    }
    VAR2->VAR31 = VAR7.VAR13 / VAR14;
    VAR5->VAR25 = VAR7.VAR25;
    VAR5->VAR32 = VAR7.VAR25 / VAR14;
    VAR5->VAR33 = VAR7.VAR22 / VAR14;
    VAR5->VAR7 = VAR7;
    VAR8 = VAR7.VAR28 * sizeof(VAR34);
    VAR8 = (VAR8 + VAR14 - 1) / VAR14;
    if (VAR8 > 0)
    {
        VAR5->VAR35 = FUN7(VAR8 * VAR14);
    }
    VAR9 = FUN3(VAR2->VAR10, VAR5->VAR33, (VAR11 *)VAR5->VAR35, VAR8);
    if (VAR9 < 0)
    {
        goto VAR36;
    }
    FUN8(&VAR5->VAR37, VAR38, "", VAR2->VAR39, "");
    FUN9(VAR5->VAR37);
    return 0;
VAR36:
    FUN10(VAR5->VAR35);
VAR12:
    return VAR9;
}