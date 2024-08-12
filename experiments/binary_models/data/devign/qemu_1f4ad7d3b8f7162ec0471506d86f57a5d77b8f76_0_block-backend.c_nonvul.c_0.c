VAR1 *FUN1(const char *VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    uint64_t VAR12 = 0;
    if ((VAR6 & VAR13) == 0)
    {
        VAR12 |= VAR14;
        if (VAR6 & VAR15)
        {
            VAR12 |= VAR16;
        }
    }
    if (VAR6 & VAR17)
    {
        VAR12 |= VAR18;
    }
    VAR9 = FUN2(VAR12, VAR19);
    VAR11 = FUN3(VAR2, VAR3, VAR5, VAR6, VAR8);
    if (!VAR11)
    {
        FUN4(VAR9);
        return NULL;
    }
    VAR9->VAR20 = FUN5(VAR11, "", &VAR21, VAR12, VAR19, VAR9, VAR8);
    if (!VAR9->VAR20)
    {
        FUN6(VAR11);
        FUN4(VAR9);
        return NULL;
    }
    return VAR9;
}