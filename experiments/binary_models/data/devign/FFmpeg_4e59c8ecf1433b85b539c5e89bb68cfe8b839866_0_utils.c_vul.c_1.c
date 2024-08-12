int FUN1(VAR1 **VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    int VAR10;
    VAR11 *VAR12;
    VAR1 *VAR13;
    AVFormatParameters VAR14;
    if (!VAR9)
    {
        VAR9 = &VAR14;
        memset(VAR9, 0, sizeof(VAR14));
    }
    VAR12 = FUN2(VAR9);
    if (!VAR9->VAR15)
        VAR13 = FUN3();
    else
        VAR13 = *VAR2;
    if (!VAR13)
    {
        VAR10 = FUN4(VAR16);
        goto VAR17;
    }
    if (VAR4 && VAR7 && VAR7->VAR18 & VAR19)
        FUN5(VAR13, VAR20, ""
                                   "");
    else
        VAR13->VAR4 = VAR4;
    VAR10 = FUN6(&VAR13, VAR5, VAR7, &VAR12);
    VAR13->VAR4 = VAR13->VAR4 ? VAR13->VAR4 : VAR4;
    *VAR2 = VAR13;
VAR17:
    FUN7(&VAR12);
    return VAR10;
}