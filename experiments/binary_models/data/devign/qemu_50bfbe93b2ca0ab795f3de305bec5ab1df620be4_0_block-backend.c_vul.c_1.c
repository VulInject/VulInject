VAR1 *FUN1(const char *VAR2, const char *VAR3, VAR4 *VAR5, int VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    uint64_t VAR12;
    VAR12 = VAR13;
    if (VAR6 & VAR14)
    {
        VAR12 |= VAR15;
    }
    if (VAR6 & VAR16)
    {
        VAR12 |= VAR17;
    }
    VAR9 = FUN2(VAR12, VAR18);
    VAR11 = FUN3(VAR2, VAR3, VAR5, VAR6, VAR8);
    if (!VAR11)
    {
        FUN4(VAR9);
        return NULL;
    }
    VAR9->VAR19 = FUN5(VAR11, "", &VAR20, VAR12, VAR18, VAR9, &VAR21);
    return VAR9;
}