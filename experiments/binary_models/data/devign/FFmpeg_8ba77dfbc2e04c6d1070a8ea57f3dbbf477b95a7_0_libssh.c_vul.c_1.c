static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    static const int VAR5 = VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    char VAR10[10], VAR11[VAR12], VAR13[1024], VAR14[1024];
    int VAR15 = 22, VAR16, VAR17;
    long VAR18 = VAR8->VAR19 * 1000;
    const char *VAR20 = NULL, *VAR21 = NULL;
    char *VAR22 = NULL;
    sftp_attributes VAR23;
    FUN2(VAR10, sizeof(VAR10), VAR14, sizeof(VAR14), VAR13, sizeof(VAR13), &VAR15, VAR11, sizeof(VAR11), VAR3);
    if (VAR15 <= 0 || VAR15 > 65535)
        VAR15 = 22;
    if (!(VAR8->VAR24 = FUN3()))
    {
        VAR17 = FUN4(VAR25);
        goto VAR26;
    }
    VAR20 = FUN5(VAR14, "", &VAR22);
    VAR21 = FUN5(VAR22, "", &VAR22);
    FUN6(VAR8->VAR24, VAR27, VAR13);
    FUN6(VAR8->VAR24, VAR28, &VAR15);
    FUN6(VAR8->VAR24, VAR29, &VAR5);
    if (VAR18 > 0)
        FUN6(VAR8->VAR24, VAR30, &VAR18);
    if (VAR20)
        FUN6(VAR8->VAR24, VAR31, VAR20);
    if (FUN7(VAR8->VAR24) != VAR32)
    {
        FUN8(VAR2, VAR33, "", FUN9(VAR8->VAR24));
        VAR17 = FUN4(VAR34);
        goto VAR26;
    }
    if (VAR21 && FUN10(VAR8->VAR24, NULL, VAR21) != VAR35)
    {
        FUN8(VAR2, VAR33, "", FUN9(VAR8->VAR24));
        VAR17 = FUN4(VAR36);
        goto VAR26;
    }
    if (!(VAR8->VAR37 = FUN11(VAR8->VAR24)))
    {
        FUN8(VAR2, VAR33, "", FUN9(VAR8->VAR24));
        VAR17 = FUN4(VAR25);
        goto VAR26;
    }
    if (FUN12(VAR8->VAR37) != VAR32)
    {
        FUN8(VAR2, VAR33, "", FUN9(VAR8->VAR24));
        VAR17 = FUN4(VAR34);
        goto VAR26;
    }
    if ((VAR4 & VAR38) && (VAR4 & VAR39))
    {
        VAR16 = VAR40 | VAR41;
        if (VAR8->VAR42)
            VAR16 |= VAR43;
    }
    else if (VAR4 & VAR38)
    {
        VAR16 = VAR40 | VAR44;
        if (VAR8->VAR42)
            VAR16 |= VAR43;
    }
    else
    {
        VAR16 = VAR45;
    }
    if (!(VAR8->VAR46 = FUN13(VAR8->VAR37, VAR11, VAR16, 0666)))
    {
        FUN8(VAR2, VAR33, "", FUN9(VAR8->VAR24));
        VAR17 = FUN4(VAR34);
        goto VAR26;
    }
    if (!(VAR23 = FUN14(VAR8->VAR46)))
    {
        FUN8(VAR2, VAR47, "", VAR11);
        VAR8->VAR48 = -1;
    }
    else
    {
        VAR8->VAR48 = VAR23->VAR49;
        FUN15(VAR23);
    }
    return 0;
VAR26:
    FUN16(VAR2);
    return VAR17;
}