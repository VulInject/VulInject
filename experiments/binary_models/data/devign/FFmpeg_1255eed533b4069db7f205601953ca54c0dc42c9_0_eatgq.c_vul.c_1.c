static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    const VAR7 *VAR11 = VAR8;
    const VAR7 *VAR12 = VAR8 + VAR9;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16, VAR17;
    int VAR18 = FUN2(&VAR8[4]) > 0x000FFFFF;
    VAR8 += 8;
    if (8 > VAR12 - VAR8)
    {
        FUN3(VAR2, VAR19, "");
        return -1;
    }
    VAR14->VAR20 = VAR18 ? FUN4(&VAR8[0]) : FUN5(&VAR8[0]);
    VAR14->VAR21 = VAR18 ? FUN4(&VAR8[2]) : FUN5(&VAR8[2]);
    if (VAR14->VAR2->VAR20 != VAR14->VAR20 || VAR14->VAR2->VAR21 != VAR14->VAR21)
    {
        FUN6(VAR14->VAR2, VAR14->VAR20, VAR14->VAR21);
        if (VAR14->VAR22.VAR3[0])
            VAR2->FUN7(VAR2, &VAR14->VAR22);
    }
    FUN8(VAR14, VAR8[4]);
    VAR8 += 8;
    if (!VAR14->VAR22.VAR3[0])
    {
        VAR14->VAR22.VAR23 = 1;
        VAR14->VAR22.VAR24 = VAR25;
        VAR14->VAR22.VAR26 = VAR27;
        if (VAR2->FUN9(VAR2, &VAR14->VAR22))
        {
            FUN3(VAR2, VAR28, "");
            return -1;
        }
    }
    for (VAR17 = 0; VAR17 < (VAR2->VAR21 + 15) / 16; VAR17++)
        for (VAR16 = 0; VAR16 < (VAR2->VAR20 + 15) / 16; VAR16++)
            FUN10(VAR14, VAR17, VAR16, &VAR8, VAR12);
    *VAR4 = sizeof(VAR29);
    *(VAR29 *)VAR3 = VAR14->VAR22;
    return VAR8 - VAR11;
}