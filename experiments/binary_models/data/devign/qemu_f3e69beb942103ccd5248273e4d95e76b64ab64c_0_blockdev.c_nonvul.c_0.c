void FUN1(const char *VAR1, bool VAR2, const char *VAR3, bool VAR4, const char *VAR5, bool VAR6, int64_t VAR7, bool VAR8, BlockdevOnError VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    VAR12 *VAR14 = NULL;
    VAR15 *VAR16;
    VAR10 *VAR17 = NULL;
    const char *VAR18 = NULL;
    if (!VAR8)
    {
        VAR9 = VAR19;
    }
    VAR13 = FUN2(VAR1);
    if (!VAR13)
    {
        FUN3(VAR11, VAR20, VAR1);
        return;
    }
    VAR16 = FUN4(VAR13);
    FUN5(VAR16);
    if (FUN6(VAR13, VAR21, VAR11))
    {
        goto VAR22;
    }
    if (VAR2)
    {
        VAR14 = FUN7(VAR13, VAR3);
        if (VAR14 == NULL)
        {
            FUN3(VAR11, VAR23, VAR3);
            goto VAR22;
        }
        assert(FUN4(VAR14) == VAR16);
        VAR18 = VAR3;
    }
    if (VAR14 == NULL && VAR4)
    {
        FUN8(VAR11, ""
                         "");
        goto VAR22;
    }
    VAR18 = VAR4 ? VAR5 : VAR18;
    FUN9(VAR13, VAR14, VAR18, VAR6 ? VAR7 : 0, VAR9, VAR24, VAR13, &VAR17);
    if (VAR17)
    {
        FUN10(VAR11, VAR17);
        goto VAR22;
    }
    FUN11(VAR13, VAR13->VAR25);
VAR22:
    FUN12(VAR16);
}