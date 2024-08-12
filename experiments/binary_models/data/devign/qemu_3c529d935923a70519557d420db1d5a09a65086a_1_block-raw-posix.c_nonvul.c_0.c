static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, const VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12;
    VAR13 *VAR14 = VAR3->VAR10;
    if (FUN2(VAR14->VAR15 != NULL && ((VAR16)VAR6 % 512)))
    {
        VAR17 *VAR18;
        VAR12 = FUN3(VAR3, VAR9, VAR10);
        VAR12->VAR19 = FUN4(VAR3, 512 * VAR4, VAR6, 512 * VAR7);
        VAR18 = FUN5(VAR20, VAR12);
        FUN6(VAR18);
        return &VAR12->VAR21;
    }
    VAR12 = FUN7(VAR3, VAR4, (VAR5 *)VAR6, VAR7, VAR9, VAR10);
    if (!VAR12)
        return NULL;
    if (FUN8(&VAR12->VAR22) < 0)
    {
        FUN9(VAR12);
        return NULL;
    }
    return &VAR12->VAR21;
}