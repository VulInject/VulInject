static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR5 *VAR6;
    mfxSession VAR7 = NULL;
    int VAR8 = 0;
    mfxVideoParam VAR9 = {{0}};
    int VAR10 = VAR2->VAR11;
    int VAR12 = VAR2->VAR13;
    int VAR14;
    VAR6 = FUN2(VAR2->VAR15);
    if (!VAR6)
        return VAR16;
    if (!VAR4->VAR17)
    {
        VAR4->VAR17 = FUN3((1 + VAR4->VAR18) * (sizeof(VAR19 *) + sizeof(VAR20 *)));
        if (!VAR4->VAR17)
            return FUN4(VAR21);
    }
    if (VAR2->VAR22 == VAR23 && VAR2->VAR24)
    {
        VAR25 *VAR26 = VAR2->VAR24;
        VAR7 = VAR26->VAR7;
        VAR8 = VAR26->VAR8;
        VAR4->VAR27 = VAR26->VAR27;
        VAR4->VAR28 = VAR26->VAR28;
    }
    if (VAR2->VAR29)
    {
        VAR30 *VAR31 = (VAR30 *)VAR2->VAR29->VAR32;
        VAR33 *VAR34 = VAR31->VAR35;
        if (!VAR8)
        {
            if (VAR34->VAR36 & VAR37)
                VAR8 = VAR38;
            else if (VAR34->VAR36 & VAR39)
                VAR8 = VAR40;
        }
        VAR10 = VAR34->VAR41[0].VAR42.VAR43;
        VAR12 = VAR34->VAR41[0].VAR42.VAR44;
    }
    if (!VAR8)
        VAR8 = VAR45;
    VAR4->VAR8 = VAR8;
    VAR14 = FUN5(VAR2, VAR4, VAR7, VAR2->VAR29);
    if (VAR14 < 0)
    {
        FUN6(VAR2, VAR46, "");
        return VAR14;
    }
    VAR14 = FUN7(VAR2->VAR47);
    if (VAR14 < 0)
        return VAR14;
    VAR9.VAR48.VAR49 = VAR14;
    VAR9.VAR48.VAR50 = FUN8(VAR2->VAR47, VAR2->VAR51);
    VAR9.VAR48.VAR52 = VAR2->VAR53 == VAR54 ? VAR55 : VAR2->VAR53;
    VAR9.VAR48.VAR56.VAR57 = VAR6->VAR58[0].VAR59;
    VAR9.VAR48.VAR56.VAR60 = VAR6->VAR58[0].VAR59;
    VAR9.VAR48.VAR56.VAR61 = VAR6->VAR58[0].VAR59 > 8;
    VAR9.VAR48.VAR56.VAR62 = VAR4->VAR63;
    VAR9.VAR48.VAR56.VAR43 = VAR10;
    VAR9.VAR48.VAR56.VAR44 = VAR12;
    VAR9.VAR48.VAR56.VAR64 = VAR65;
    VAR9.VAR66 = VAR4->VAR8;
    VAR9.VAR67 = VAR4->VAR18;
    VAR9.VAR68 = VAR4->VAR27;
    VAR9.VAR69 = VAR4->VAR28;
    VAR14 = FUN9(VAR4->VAR7, &VAR9);
    if (VAR14 < 0)
        return FUN10(VAR2, VAR14, "");
    VAR4->VAR70 = VAR9.VAR48.VAR56;
    return 0;
}