VAR1 *FUN1(VAR2 **VAR3)
{
    VAR4 *VAR5 = FUN2(&VAR6.VAR7);
    int VAR8, VAR9;
    const char *VAR10;
    VAR1 *VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
    unsigned int VAR14;
    VAR11 = FUN3(sizeof(*VAR11));
    if (!VAR15 || !VAR5)
    {
        VAR11->VAR16 = false;
        return VAR11;
    }
    VAR11->VAR16 = true;
    VAR11->VAR17 = VAR18;
    VAR10 = FUN4(VAR5, "");
    VAR8 = FUN5(VAR5, "", 0);
    VAR9 = FUN5(VAR5, "", 0);
    VAR11->VAR19 = true;
    VAR11->VAR20 = FUN6(VAR20);
    VAR11->VAR21 = true;
    VAR11->VAR22 = FUN6(VAR10 ? VAR10 : "");
    VAR11->VAR23 = true;
    VAR12 = (VAR24 & 0xff0000) >> 16;
    VAR13 = (VAR24 & 0xff00) >> 8;
    VAR14 = VAR24 & 0xff;
    VAR11->VAR25 = FUN7("", VAR12, VAR13, VAR14);
    if (VAR8)
    {
        VAR11->VAR26 = true;
        VAR11->VAR8 = VAR8;
    }
    if (VAR9)
    {
        VAR11->VAR27 = true;
        VAR11->VAR9 = VAR9;
    }
    VAR11->VAR28 = FUN8(VAR15) ? VAR29 : VAR30;
    VAR11->VAR31 = true;
    VAR11->VAR32 = FUN9();
    return VAR11;
}