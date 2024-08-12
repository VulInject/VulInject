static char *FUN1(int VAR1, int VAR2)
{
    char *VAR3;
    if (VAR2 == VAR4)
        return FUN2("");
    if (VAR2 == VAR5)
        return FUN2("");
    if (VAR2 >= VAR6##VAR7##VAR8 && VAR2 - VAR6##VAR7##VAR8 < FUN3(VAR9##VAR10##VAR11))
        return FUN2(VAR9##VAR10##VAR11[VAR2 - VAR6##VAR7##VAR8]);
    switch (VAR1)
    {
    case VAR12:
        FUN4(VAR13, VAR14);
        break;
    case VAR15:
        FUN4(VAR16, VAR17);
        break;
    case VAR18:
    case VAR19:
    case VAR20:
        FUN4(VAR21, VAR22);
        break;
    case VAR23:
    case VAR24:
        FUN4(VAR25, VAR26);
        break;
    case VAR27:
        FUN4(VAR28, VAR29);
        FUN4(VAR30, VAR31);
        break;
    case VAR32:
        FUN4(VAR33, VAR34);
        FUN4(VAR35, VAR36);
        break;
    case VAR37:
        FUN4(VAR38, VAR39);
        break;
    case VAR40:
        FUN4(VAR41, VAR42);
        break;
    case VAR43:
        return FUN2(FUN5(VAR44, FUN3(VAR44), VAR2));
        break;
    case VAR45:
        return FUN2(FUN5(VAR46, FUN3(VAR46), VAR2));
        break;
    case VAR47:
        FUN4(VAR48, VAR49);
        break;
    case VAR50:
        FUN4(VAR51, VAR52);
        FUN4(VAR53, VAR54);
        break;
    }
    VAR3 = FUN6(14);
    if (VAR3)
        snprintf(VAR3, 14, "", VAR2);
    return VAR3;
}