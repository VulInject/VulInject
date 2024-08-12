void *FUN1(VAR1)(VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR3);
    VAR6 *VAR7;
    target_ulong VAR8, VAR9;
    uint32_t VAR10, VAR11;
    FUN3(VAR3, &VAR9, &VAR8, &VAR10);
    VAR11 = FUN4(VAR9);
    VAR7 = FUN5(&VAR5->VAR12[VAR11]);
    if (FUN6(!(VAR7 && VAR7->VAR9 == VAR9 && VAR7->VAR8 == VAR8 && VAR7->VAR10 == VAR10 && VAR7->VAR13 == *VAR5->VAR14)))
    {
        VAR7 = FUN7(VAR5, VAR9, VAR8, VAR10);
        if (!VAR7)
        {
            return VAR15.VAR16;
        }
        FUN8(&VAR5->VAR12[VAR11], VAR7);
    }
    FUN9(VAR17, VAR9, "" VAR18 "", VAR7->VAR19, VAR5->VAR20, VAR9, FUN10(VAR9));
    return VAR7->VAR19;
}