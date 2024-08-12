int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    x86_def_t VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9 = NULL;
    memset(VAR7, 0, sizeof(*VAR7));
    if (FUN2(VAR7, VAR3) < 0)
        return -1;
    if (VAR7->VAR10)
    {
        VAR5->VAR11 = VAR7->VAR10;
        VAR5->VAR12 = VAR7->VAR13;
        VAR5->VAR14 = VAR7->VAR15;
    }
    else
    {
        VAR5->VAR11 = VAR16;
        VAR5->VAR12 = VAR17;
        VAR5->VAR14 = VAR18;
    }
    VAR5->VAR19 = VAR7->VAR20;
    FUN3(FUN4(VAR2), VAR7->VAR21, "", &VAR9);
    FUN3(FUN4(VAR2), VAR7->VAR22, "", &VAR9);
    FUN3(FUN4(VAR2), VAR7->VAR23, "", &VAR9);
    FUN3(FUN4(VAR2), VAR7->VAR24, "", &VAR9);
    VAR5->VAR25 = VAR7->VAR26;
    VAR5->VAR27 = VAR7->VAR28;
    VAR5->VAR29 = VAR7->VAR30;
    VAR5->VAR31 = VAR7->VAR32;
    FUN3(FUN4(VAR2), VAR7->VAR33, "", &VAR9);
    VAR5->VAR34 = VAR7->VAR35;
    VAR5->VAR36 = VAR7->VAR37;
    VAR5->VAR38 = VAR7->VAR39;
    VAR5->VAR40 = VAR7->VAR40;
    VAR5->VAR41 = VAR7->VAR42;
    FUN3(FUN4(VAR2), (VAR43)VAR7->VAR44 * 1000, "", &VAR9);
    if (VAR5->VAR11 == VAR45 && VAR5->VAR12 == VAR46 && VAR5->VAR14 == VAR47)
    {
        VAR5->VAR29 &= ~VAR48;
        VAR5->VAR29 |= (VAR7->VAR26 & VAR48);
    }
    if (!FUN5())
    {
        VAR5->VAR25 &= VAR49;
        VAR5->VAR27 &= VAR50;
        VAR5->VAR29 &= (VAR51 | VAR52 | VAR53);
        VAR5->VAR31 &= VAR54;
        VAR5->VAR36 &= VAR55;
    }
    FUN6(FUN4(VAR2), VAR7->VAR56, "", &VAR9);
    if (FUN7(&VAR9))
    {
        FUN8(VAR9);
        return -1;
    }
    return 0;
}