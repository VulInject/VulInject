static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    uint32_t VAR12;
    VAR13 *VAR14;
    unsigned int VAR15;
    FUN2("" VAR16 ""
            "",
            VAR4->VAR17, VAR4->VAR18, VAR8->VAR17, VAR4->VAR19, VAR8->VAR20);
    if (VAR8->VAR20)
    {
        FUN3(""
                     "" VAR21 "",
                     VAR8->VAR17, VAR8->VAR14.VAR22);
        return -VAR23;
    }
    FUN2("", VAR4->VAR17, VAR4->VAR18);
    VAR8->VAR14.VAR19 = VAR4->VAR19;
    VAR8->VAR14.VAR24 = VAR4->VAR24;
    strncpy(VAR8->VAR14.VAR25, VAR4->VAR17, sizeof(VAR8->VAR14.VAR25));
    VAR15 = VAR26 - sizeof(VAR8->VAR14.VAR27);
    VAR11 = FUN4(VAR8, &VAR6);
    if (VAR11 < 0)
    {
        FUN3("", FUN5(VAR6));
        ;
        FUN6(VAR6);
        VAR10 = VAR11;
        goto VAR28;
    }
    VAR10 = FUN7(VAR11, (char *)&VAR8->VAR14, FUN8(VAR8->VAR14.VAR22), VAR8->VAR14.VAR29, VAR15, 0, false, VAR8->VAR30);
    if (VAR10 < 0)
    {
        FUN3("");
        goto VAR28;
    }
    VAR10 = FUN9(VAR8, &VAR12, 1, &VAR6);
    if (VAR10 < 0)
    {
        FUN3("", FUN5(VAR6));
        ;
        FUN6(VAR6);
        FUN3("", strerror(VAR31));
        goto VAR28;
    }
    VAR14 = (VAR13 *)FUN10(VAR15);
    VAR10 = FUN11(VAR11, (char *)VAR14, FUN8(VAR12), VAR8->VAR14.VAR29, VAR15, 0, VAR8->VAR30);
    if (VAR10 < 0)
    {
        FUN3("", strerror(VAR31));
        goto VAR28;
    }
    memcpy(&VAR8->VAR14, VAR14, VAR15);
    FUN2("", VAR8->VAR14.VAR17, VAR8->VAR14.VAR32, VAR8->VAR14.VAR22);
VAR28:
    FUN12(VAR11);
    return VAR10;
}