static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    uint32_t VAR10;
    VAR11 *VAR12;
    unsigned int VAR13;
    FUN2("" VAR14 ""
            "",
            VAR4->VAR15, VAR4->VAR16, VAR6->VAR15, VAR4->VAR17, VAR6->VAR18);
    if (VAR6->VAR18)
    {
        FUN3(""
                     "" VAR19 "",
                     VAR6->VAR15, VAR6->VAR12.VAR20);
        return -VAR21;
    }
    FUN2("", VAR4->VAR15, VAR4->VAR16);
    VAR6->VAR12.VAR17 = VAR4->VAR17;
    VAR6->VAR12.VAR22 = VAR4->VAR22;
    strncpy(VAR6->VAR12.VAR23, VAR4->VAR15, sizeof(VAR6->VAR12.VAR23));
    VAR13 = VAR24 - sizeof(VAR6->VAR12.VAR25);
    VAR9 = FUN4(VAR6->VAR26, VAR6->VAR27);
    if (VAR9 < 0)
    {
        VAR8 = VAR9;
        goto VAR28;
    }
    VAR8 = FUN5(VAR9, (char *)&VAR6->VAR12, FUN6(VAR6->VAR12.VAR20), VAR6->VAR12.VAR29, VAR13, 0, false, VAR6->VAR30);
    if (VAR8 < 0)
    {
        FUN3("");
        goto VAR28;
    }
    VAR8 = FUN7(VAR6->VAR15, VAR6->VAR12.VAR31, VAR6->VAR12.VAR20, &VAR10, 1, VAR6->VAR26, VAR6->VAR27);
    if (VAR8 < 0)
    {
        FUN3("", strerror(VAR32));
        goto VAR28;
    }
    VAR12 = (VAR11 *)FUN8(VAR13);
    VAR8 = FUN9(VAR9, (char *)VAR12, FUN6(VAR10), VAR6->VAR12.VAR29, VAR13, 0, VAR6->VAR30);
    if (VAR8 < 0)
    {
        FUN3("", strerror(VAR32));
        goto VAR28;
    }
    memcpy(&VAR6->VAR12, VAR12, VAR13);
    FUN2("", VAR6->VAR12.VAR15, VAR6->VAR12.VAR33, VAR6->VAR12.VAR20);
VAR28:
    FUN10(VAR9);
    return VAR8;
}