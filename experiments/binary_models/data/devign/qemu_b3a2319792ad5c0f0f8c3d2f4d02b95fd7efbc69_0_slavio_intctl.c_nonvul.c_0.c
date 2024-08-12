void *FUN1(target_phys_addr_t VAR1, target_phys_addr_t VAR2, const VAR3 *VAR4, VAR5 **VAR6, VAR5 **VAR7, VAR5 **VAR8, unsigned int VAR9)
{
    int VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    VAR14 = FUN2(sizeof(VAR13));
    if (!VAR14)
        return NULL;
    VAR14->VAR4 = VAR4;
    for (VAR12 = 0; VAR12 < VAR15; VAR12++)
    {
        VAR10 = FUN3(0, VAR16, VAR17, VAR14);
        FUN4(VAR1 + VAR12 * VAR18, VAR19, VAR10);
        VAR14->VAR20[VAR12] = VAR8[VAR12];
    }
    VAR11 = FUN3(0, VAR21, VAR22, VAR14);
    FUN4(VAR2, VAR23, VAR11);
    FUN5("", VAR1, 1, VAR24, VAR25, VAR14);
    FUN6(VAR26, VAR14);
    *VAR6 = FUN7(VAR27, VAR14, 32);
    *VAR7 = FUN7(VAR28, VAR14, VAR15);
    VAR14->VAR29 = 1 << VAR14->VAR4[VAR9];
    FUN8(VAR14);
    return VAR14;
}