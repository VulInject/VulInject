VAR1 *FUN1(int64_t VAR2, const char *VAR3, bool VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10;
    gsize VAR11;
    int VAR12;
    VAR13 *VAR14 = FUN2(VAR2, VAR7);
    VAR15 *VAR16;
    if (!VAR14)
    {
        return NULL;
    }
    VAR16 = VAR14->VAR16;
    if (VAR14->VAR17 == VAR18)
    {
        int VAR19 = FUN3(VAR16, 0, VAR20);
        if (VAR19 == -1)
        {
            FUN4(VAR7, VAR21, "");
            return NULL;
        }
        VAR14->VAR17 = VAR22;
    }
    VAR10 = FUN5(VAR3, -1, &VAR11, VAR7);
    if (!VAR10)
    {
        return NULL;
    }
    if (!VAR4)
    {
        VAR5 = VAR11;
    }
    else if (VAR5 < 0 || VAR5 > VAR11)
    {
        FUN6(VAR7, "" VAR23 "", VAR5);
        FUN7(VAR10);
        return NULL;
    }
    VAR12 = fwrite(VAR10, 1, VAR5, VAR16);
    if (FUN8(VAR16))
    {
        FUN4(VAR7, VAR21, "");
        FUN9("" VAR23, VAR2);
    }
    else
    {
        VAR8 = FUN10(VAR1, 1);
        VAR8->VAR5 = VAR12;
        VAR8->VAR24 = FUN11(VAR16);
        VAR14->VAR17 = VAR25;
    }
    FUN7(VAR10);
    FUN12(VAR16);
    return VAR8;
}