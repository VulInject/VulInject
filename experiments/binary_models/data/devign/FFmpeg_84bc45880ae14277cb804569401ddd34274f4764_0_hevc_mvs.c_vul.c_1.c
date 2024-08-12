void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11, int VAR12, int VAR13)
{
    VAR14 *VAR15 = VAR2->VAR16;
    VAR10 *VAR17 = VAR2->VAR18->VAR17;
    int VAR19 = 0;
    int VAR20 = 1;
    int VAR21 = 1;
    int VAR22 = 0;
    int VAR23 = VAR2->VAR24->VAR23;
    int VAR25, VAR26;
    int VAR27;
    int VAR28, VAR29;
    int VAR30;
    int VAR31, VAR32;
    int VAR33;
    int VAR34, VAR35;
    int VAR36;
    int VAR37, VAR38;
    int VAR39;
    Mv VAR40[2] = {{0}};
    Mv VAR41;
    Mv VAR42;
    int VAR43 = 0;
    int VAR44 = 0;
    int VAR45;
    int VAR46;
    const int VAR47 = VAR15->VAR48.VAR47;
    const int VAR49 = VAR15->VAR48.VAR49;
    const int VAR50 = VAR15->VAR48.VAR50;
    const int VAR51 = VAR15->VAR48.VAR51;
    const int VAR52 = VAR15->VAR48.VAR53;
    VAR43 = VAR13;
    VAR44 = VAR11->VAR44[VAR13];
    VAR45 = VAR13;
    VAR46 = !VAR13;
    VAR25 = VAR3 - 1;
    VAR26 = VAR4 + VAR6;
    VAR27 = FUN2(VAR47, VAR54) && VAR26 < VAR2->VAR24->VAR55 && FUN3(VAR54);
    VAR28 = VAR3 - 1;
    VAR29 = VAR4 + VAR6 - 1;
    VAR30 = FUN2(VAR49, VAR56);
    if (VAR27 || VAR30)
        VAR19 = 1;
    if (VAR27)
    {
        if (FUN4(VAR54, VAR45, VAR41))
        {
            goto VAR57;
        }
        if (FUN4(VAR54, VAR46, VAR41))
        {
            goto VAR57;
        }
    }
    if (VAR30)
    {
        if (FUN4(VAR56, VAR45, VAR41))
        {
            goto VAR57;
        }
        if (FUN4(VAR56, VAR46, VAR41))
        {
            goto VAR57;
        }
    }
    if (VAR27)
    {
        if (FUN5(VAR54, VAR45, VAR41))
        {
            goto VAR57;
        }
        if (FUN5(VAR54, VAR46, VAR41))
        {
            goto VAR57;
        }
    }
    if (VAR30)
    {
        if (FUN5(VAR56, VAR45, VAR41))
        {
            goto VAR57;
        }
        if (FUN5(VAR56, VAR46, VAR41))
        {
            goto VAR57;
        }
    }
    VAR20 = 0;
VAR57:
    VAR31 = VAR3 + VAR5;
    VAR32 = VAR4 - 1;
    VAR33 = FUN2(VAR52, VAR58) && VAR31 < VAR2->VAR24->VAR59 && FUN3(VAR58);
    if (VAR33)
    {
        if (FUN4(VAR58, VAR45, VAR42))
        {
            goto VAR60;
        }
        if (FUN4(VAR58, VAR46, VAR42))
        {
            goto VAR60;
        }
    }
    VAR34 = VAR3 + VAR5 - 1;
    VAR35 = VAR4 - 1;
    VAR36 = FUN2(VAR51, VAR61);
    if (VAR36)
    {
        if (FUN4(VAR61, VAR45, VAR42))
        {
            goto VAR60;
        }
        if (FUN4(VAR61, VAR46, VAR42))
        {
            goto VAR60;
        }
    }
    VAR37 = VAR3 - 1;
    VAR38 = VAR4 - 1;
    VAR39 = FUN2(VAR50, VAR62);
    if (VAR39)
    {
        if (FUN4(VAR62, VAR45, VAR42))
        {
            goto VAR60;
        }
        if (FUN4(VAR62, VAR46, VAR42))
        {
            goto VAR60;
        }
    }
    VAR21 = 0;
VAR60:
    if (!VAR19)
    {
        if (VAR21)
        {
            VAR20 = 1;
            VAR41 = VAR42;
        }
        VAR21 = 0;
        if (VAR33)
        {
            VAR21 = FUN5(VAR58, VAR45, VAR42);
            if (!VAR21)
                VAR21 = FUN5(VAR58, VAR46, VAR42);
        }
        if (VAR36 && !VAR21)
        {
            VAR21 = FUN5(VAR61, VAR45, VAR42);
            if (!VAR21)
                VAR21 = FUN5(VAR61, VAR46, VAR42);
        }
        if (VAR39 && !VAR21)
        {
            VAR21 = FUN5(VAR62, VAR45, VAR42);
            if (!VAR21)
                VAR21 = FUN5(VAR62, VAR46, VAR42);
        }
    }
    if (VAR20)
        VAR40[VAR22++] = VAR41;
    if (VAR21 && (!VAR20 || VAR41.VAR63 != VAR42.VAR63 || VAR41.VAR64 != VAR42.VAR64))
        VAR40[VAR22++] = VAR42;
    if (VAR22 < 2 && VAR2->VAR65.VAR66 && VAR12 == VAR22)
    {
        Mv VAR67;
        int VAR68 = FUN6(VAR2, VAR3, VAR4, VAR5, VAR6, VAR44, &VAR67, VAR13);
        if (VAR68)
            VAR40[VAR22++] = VAR67;
    }
    VAR11->VAR11[VAR13] = VAR40[VAR12];
}