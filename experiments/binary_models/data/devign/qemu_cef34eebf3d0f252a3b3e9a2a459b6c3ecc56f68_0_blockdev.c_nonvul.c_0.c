void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, enum MirrorSyncMode VAR4, bool VAR5, int64_t VAR6, bool VAR7, BlockdevOnError VAR8, bool VAR9, BlockdevOnError VAR10, VAR11 *VAR12, VAR13 **VAR14)
{
    VAR15 *VAR16;
    VAR15 *VAR17;
    VAR13 *VAR18 = NULL;
    VAR19 *VAR20;
    if (!VAR5)
    {
        VAR6 = 0;
    }
    if (!VAR7)
    {
        VAR8 = VAR21;
    }
    if (!VAR9)
    {
        VAR10 = VAR21;
    }
    VAR16 = FUN2(VAR2, VAR14);
    if (!VAR16)
    {
        return;
    }
    VAR20 = FUN3(VAR16);
    FUN4(VAR20);
    VAR17 = FUN5(VAR3, VAR3, VAR14);
    if (!VAR17)
    {
        goto VAR22;
    }
    if (FUN3(VAR17) != VAR20)
    {
        if (!FUN6(VAR17))
        {
            FUN7(VAR17, VAR20);
        }
        else
        {
            FUN8(VAR14, ""
                             "");
            goto VAR22;
        }
    }
    FUN9(VAR1, VAR16, VAR17, VAR6, VAR4, NULL, VAR8, VAR10, VAR23, VAR16, VAR12, &VAR18);
    if (VAR18 != NULL)
    {
        FUN10(VAR14, VAR18);
    }
VAR22:
    FUN11(VAR20);
}