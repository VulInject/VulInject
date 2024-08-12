VAR1 *FUN1(const char *VAR2, bool VAR3, const char *VAR4, bool VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    QEMUSnapshotInfo VAR11;
    VAR7 *VAR12 = NULL;
    VAR1 *VAR13 = NULL;
    int VAR14;
    if (!VAR10)
    {
        FUN3(VAR8, VAR15, VAR2);
        return NULL;
    }
    if (!VAR3)
    {
        VAR4 = NULL;
    }
    if (!VAR5)
    {
        VAR6 = NULL;
    }
    if (!VAR4 && !VAR6)
    {
        FUN4(VAR8, "");
        return NULL;
    }
    VAR14 = FUN5(VAR10, VAR4, VAR6, &VAR11, &VAR12);
    if (VAR12)
    {
        FUN6(VAR8, VAR12);
        return NULL;
    }
    if (!VAR14)
    {
        FUN4(VAR8, ""
                         "",
                   FUN7(VAR4), FUN7(VAR6), VAR2);
        return NULL;
    }
    FUN8(VAR10, VAR4, VAR6, &VAR12);
    if (VAR12)
    {
        FUN6(VAR8, VAR12);
        return NULL;
    }
    VAR13 = FUN9(sizeof(VAR1));
    VAR13->VAR4 = FUN10(VAR11.VAR16);
    VAR13->VAR6 = FUN10(VAR11.VAR6);
    VAR13->VAR17 = VAR11.VAR17;
    VAR13->VAR18 = VAR11.VAR18;
    VAR13->VAR19 = VAR11.VAR19;
    VAR13->VAR20 = VAR11.VAR20 % 1000000000;
    VAR13->VAR21 = VAR11.VAR20 / 1000000000;
    return VAR13;
}