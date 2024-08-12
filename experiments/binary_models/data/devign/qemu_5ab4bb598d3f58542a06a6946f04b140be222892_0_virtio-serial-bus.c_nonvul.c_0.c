VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7;
    uint32_t VAR8, VAR9;
    if (!VAR4)
        return NULL;
    VAR9 = VAR10 / 2 - 1;
    if (VAR4 > VAR9)
    {
        FUN2("", VAR9);
        return NULL;
    }
    VAR7 = FUN3("", VAR11, sizeof(struct VAR12), sizeof(VAR5));
    VAR6 = FUN4(VAR5, VAR7, VAR7);
    VAR6->VAR13 = FUN5(VAR3);
    VAR6->VAR13->VAR6 = VAR6;
    FUN6(&VAR6->VAR14);
    VAR6->VAR13->VAR4 = VAR4;
    VAR6->VAR15 = FUN7(VAR4 * sizeof(VAR16 *));
    VAR6->VAR17 = FUN7(VAR4 * sizeof(VAR16 *));
    VAR6->VAR15[0] = FUN8(VAR7, 128, VAR18);
    VAR6->VAR17[0] = FUN8(VAR7, 128, VAR19);
    VAR6->VAR20 = FUN8(VAR7, 16, VAR21);
    VAR6->VAR22 = FUN8(VAR7, 16, VAR23);
    for (VAR8 = 1; VAR8 < VAR6->VAR13->VAR4; VAR8++)
    {
        VAR6->VAR15[VAR8] = FUN8(VAR7, 128, VAR18);
        VAR6->VAR17[VAR8] = FUN8(VAR7, 128, VAR19);
    }
    VAR6->VAR24.VAR4 = VAR4;
    VAR6->VAR25 = FUN9(((VAR4 + 31) / 32) * sizeof(VAR6->VAR25[0]));
    FUN10(VAR6, 0);
    VAR6->VAR7.VAR26 = VAR26;
    VAR6->VAR7.VAR27 = VAR27;
    VAR6->VAR7.VAR28 = VAR28;
    FUN11(VAR3, "", -1, 2, VAR29, VAR30, VAR6);
    return VAR7;
}