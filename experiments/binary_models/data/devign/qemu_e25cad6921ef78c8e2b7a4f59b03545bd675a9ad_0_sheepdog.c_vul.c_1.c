static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 **VAR6)
{
    unsigned long VAR7 = 0;
    char VAR8[VAR9];
    VAR5 *VAR10 = NULL;
    int VAR11, VAR12;
    char VAR13[VAR14 + VAR9];
    VAR15 *VAR16 = VAR2->VAR17;
    unsigned int VAR18 = VAR14 + VAR9, VAR19 = 0;
    uint32_t VAR20;
    SheepdogVdiReq VAR21 = {
        .VAR22 = VAR23,
        .VAR24 = VAR18,
        .VAR25 = VAR26,
    };
    VAR27 *VAR28 = (VAR27 *)&VAR21;
    if (!FUN2(VAR16))
    {
        return -1;
    }
    memset(VAR13, 0, sizeof(VAR13));
    memset(VAR8, 0, sizeof(VAR8));
    FUN3(VAR13, VAR14, VAR16->VAR4);
    VAR12 = FUN4(VAR3, NULL, 10, &VAR7);
    if (VAR12 || VAR7 > VAR29)
    {
        FUN5(VAR6, "", VAR3 ? VAR3 : "");
        return -VAR30;
    }
    if (VAR7)
    {
        VAR21.VAR31 = (VAR32)VAR7;
    }
    else
    {
        FUN3(VAR8, sizeof(VAR8), VAR3);
        FUN3(VAR13 + VAR14, VAR9, VAR8);
    }
    VAR12 = FUN6(VAR16, VAR16->VAR4, VAR7, VAR8, &VAR20, true, &VAR10);
    if (VAR12)
    {
        return VAR12;
    }
    VAR11 = FUN7(VAR16, &VAR10);
    if (VAR11 < 0)
    {
        FUN8(VAR10);
        return -1;
    }
    VAR12 = FUN9(VAR11, VAR16->VAR2, (VAR33 *)&VAR21, VAR13, &VAR18, &VAR19);
    FUN10(VAR11);
    if (VAR12)
    {
        return VAR12;
    }
    switch (VAR28->VAR34)
    {
    case VAR35:
        FUN11("", VAR16->VAR4);
    case VAR36:
        break;
    default:
        FUN11("", FUN12(VAR28->VAR34), VAR16->VAR4);
        return -1;
    }
    return VAR12;
}