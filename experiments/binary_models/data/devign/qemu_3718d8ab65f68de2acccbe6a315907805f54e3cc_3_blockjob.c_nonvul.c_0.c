void *FUN1(const VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, VAR6 *VAR7, void *VAR8, VAR9 **VAR10)
{
    VAR11 *VAR12;
    if (VAR4->VAR12 || !FUN2(VAR4))
    {
        FUN3(VAR10, VAR13, FUN4(VAR4));
        return NULL;
    }
    FUN5(VAR4);
    VAR12 = FUN6(VAR2->VAR14);
    FUN7(&VAR12->VAR15, "", VAR16[VAR2->VAR17]);
    FUN8(VAR4, VAR12->VAR15);
    VAR12->VAR2 = VAR2;
    VAR12->VAR4 = VAR4;
    VAR12->VAR7 = VAR7;
    VAR12->VAR8 = VAR8;
    VAR12->VAR18 = true;
    VAR4->VAR12 = VAR12;
    if (VAR5 != 0)
    {
        VAR9 *VAR19 = NULL;
        FUN9(VAR12, VAR5, &VAR19);
        if (VAR19)
        {
            VAR4->VAR12 = NULL;
            FUN10(VAR4, VAR12->VAR15);
            FUN11(VAR12->VAR15);
            FUN12(VAR12);
            FUN13(VAR10, VAR19);
            return NULL;
        }
    }
    return VAR12;
}