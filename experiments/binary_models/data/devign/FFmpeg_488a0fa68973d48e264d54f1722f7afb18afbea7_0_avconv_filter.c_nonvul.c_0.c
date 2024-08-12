static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    const VAR9 *VAR10 = FUN2("");
    VAR11 *VAR12 = VAR4->VAR12;
    VAR13 *VAR14 = VAR15[VAR12->VAR16];
    AVRational VAR17 = VAR12->VAR18.VAR19 ? FUN3(VAR12->VAR18) : VAR12->VAR20->VAR21;
    AVRational VAR22;
    char VAR23[255], VAR24[255];
    int VAR25, VAR26 = 0;
    VAR22 = VAR12->VAR20->VAR27.VAR19 ? VAR12->VAR20->VAR27 : VAR12->VAR20->VAR28->VAR27;
    snprintf(VAR23, sizeof(VAR23), "", VAR12->VAR20->VAR28->VAR29, VAR12->VAR20->VAR28->VAR30, VAR12->VAR20->VAR28->VAR31, VAR17.VAR19, VAR17.VAR32, VAR22.VAR19, VAR22.VAR32);
    snprintf(VAR24, sizeof(VAR24), "", VAR2->VAR33, VAR12->VAR16, VAR12->VAR20->VAR33);
    if ((VAR25 = FUN4(&VAR4->VAR34, VAR10, VAR24, VAR23, NULL, VAR2->VAR35)) < 0)
        return VAR25;
    VAR8 = VAR4->VAR34;
    if (VAR12->VAR18.VAR19)
    {
        VAR7 *VAR36;
        snprintf(VAR24, sizeof(VAR24), "", VAR12->VAR16, VAR12->VAR20->VAR33);
        if ((VAR25 = FUN4(&VAR36, FUN2(""), VAR24, "", NULL, VAR2->VAR35)) < 0)
            return VAR25;
        if ((VAR25 = FUN5(VAR8, 0, VAR36, 0)) < 0)
            return VAR25;
        VAR8 = VAR36;
    }
    snprintf(VAR24, sizeof(VAR24), "", VAR12->VAR16, VAR12->VAR20->VAR33);
    VAR25 = FUN6(((VAR14->VAR37 == VAR38) || !VAR14->VAR39) ? VAR38 : 0, VAR14->VAR40, &VAR8, &VAR26, VAR24);
    if (VAR25 < 0)
        return VAR25;
    if ((VAR25 = FUN5(VAR8, 0, VAR6->VAR41, VAR6->VAR26)) < 0)
        return VAR25;
    return 0;
}