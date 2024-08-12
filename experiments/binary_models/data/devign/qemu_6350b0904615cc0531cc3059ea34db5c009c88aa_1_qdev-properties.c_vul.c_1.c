static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR5;
    VAR13 *VAR14 = FUN3(VAR10, VAR12);
    VAR7 *VAR15 = NULL;
    int64_t VAR16;
    if (VAR10->VAR17 != VAR18)
    {
        FUN4(VAR8, VAR19);
        return;
    }
    FUN5(VAR4, &VAR16, VAR6, &VAR15);
    if (VAR15)
    {
        FUN6(VAR8, VAR15);
        return;
    }
    if (VAR16 > VAR12->VAR20->VAR21 && VAR16 <= VAR12->VAR20->VAR22)
    {
        *VAR14 = VAR16;
    }
    else
    {
        FUN4(VAR8, VAR23, VAR10->VAR24 ?: "", VAR6, VAR16, VAR12->VAR20->VAR21, VAR12->VAR20->VAR22);
    }
}