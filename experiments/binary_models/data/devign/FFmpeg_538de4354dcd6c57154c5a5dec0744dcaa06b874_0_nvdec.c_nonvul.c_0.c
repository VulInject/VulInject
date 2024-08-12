int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    const VAR11 *VAR12;
    CUVIDDECODECREATEINFO VAR13 = {0};
    int VAR14, VAR15;
    int VAR16 = 0;
    VAR12 = FUN2(VAR2->VAR17);
    if (!VAR12)
        return VAR18;
    VAR14 = FUN3(VAR2->VAR19);
    if (VAR14 < 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR18;
    }
    VAR15 = FUN5(VAR2->VAR17);
    if (VAR15 < 0)
    {
        FUN4(VAR2, VAR20, "");
        return FUN6(VAR21);
    }
    if (!VAR2->VAR22)
    {
        VAR16 = FUN7(VAR2, VAR23);
        if (VAR16 < 0)
            return VAR16;
    }
    VAR10 = (VAR9 *)VAR2->VAR22->VAR24;
    VAR13.VAR25 = VAR2->VAR26;
    VAR13.VAR27 = VAR2->VAR28;
    VAR13.VAR29 = VAR2->VAR26;
    VAR13.VAR30 = VAR2->VAR28;
    VAR13.VAR31 = VAR12->VAR32[0].VAR33 - 8;
    VAR13.VAR34 = VAR13.VAR31 ? VAR35 : VAR36;
    VAR13.VAR37 = VAR14;
    VAR13.VAR38 = VAR15;
    VAR13.VAR39 = VAR10->VAR40;
    VAR13.VAR41 = 1;
    VAR16 = FUN8(&VAR4->VAR42, VAR10->VAR43, &VAR13, VAR2);
    if (VAR16 < 0)
    {
        if (VAR13.VAR39 > 32)
        {
            FUN4(VAR2, VAR44, "", (int)VAR13.VAR39);
            FUN4(VAR2, VAR44, "", VAR2->VAR45);
        }
        return VAR16;
    }
    VAR8 = FUN9(sizeof(*VAR8));
    if (!VAR8)
    {
        VAR16 = FUN6(VAR46);
        goto VAR47;
    }
    VAR8->VAR48 = VAR10->VAR40;
    VAR4->VAR49 = FUN10(sizeof(int), VAR8, VAR50, VAR51);
    if (!VAR4->VAR49)
    {
        VAR16 = FUN6(VAR46);
        goto VAR47;
    }
    return 0;
VAR47:
    FUN11(VAR2);
    return VAR16;
}