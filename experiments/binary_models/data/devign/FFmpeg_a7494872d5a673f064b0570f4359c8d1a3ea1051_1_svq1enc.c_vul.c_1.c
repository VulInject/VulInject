static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *const VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR5;
    VAR9 *const VAR11 = (VAR9 *)&VAR7->VAR12;
    AVFrame VAR13;
    int VAR14;
    if (VAR2->VAR15 != VAR16)
    {
        FUN2(VAR2, VAR17, "");
        return -1;
    }
    if (!VAR7->VAR18.VAR5[0])
    {
        VAR2->FUN3(VAR2, &VAR7->VAR18);
        VAR2->FUN3(VAR2, &VAR7->VAR19);
        VAR7->VAR20 = FUN4(VAR7->VAR18.VAR21[0] * 16);
    }
    VAR13 = VAR7->VAR18;
    VAR7->VAR18 = VAR7->VAR19;
    VAR7->VAR19 = VAR13;
    FUN5(&VAR7->VAR22, VAR3, VAR4);
    *VAR11 = *VAR10;
    VAR11->VAR23 = VAR2->VAR24 && VAR2->VAR25 % VAR2->VAR24 ? VAR26 : VAR27;
    VAR11->VAR28 = VAR11->VAR23 == VAR27;
    FUN6(VAR7, VAR11->VAR23);
    for (VAR14 = 0; VAR14 < 3; VAR14++)
    {
        if (FUN7(VAR7, VAR14, VAR7->VAR12.VAR5[VAR14], VAR7->VAR19.VAR5[VAR14], VAR7->VAR18.VAR5[VAR14], VAR7->VAR29 / (VAR14 ? 4 : 1), VAR7->VAR30 / (VAR14 ? 4 : 1), VAR7->VAR12.VAR21[VAR14], VAR7->VAR18.VAR21[VAR14]) < 0)
            return -1;
    }
    while (FUN8(&VAR7->VAR22) & 31)
        FUN9(&VAR7->VAR22, 1, 0);
    FUN10(&VAR7->VAR22);
    return FUN8(&VAR7->VAR22) / 8;
}