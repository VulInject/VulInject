static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR10->VAR14[0];
    int VAR15, VAR16 = 0, VAR17 = 0;
    VAR16 = VAR6->VAR18 % VAR10->VAR19;
    if (!VAR16)
    {
        FUN2(VAR13);
        VAR17 = FUN3(VAR10->VAR2, VAR13, &VAR10->VAR20, VAR6);
        if (VAR17 < 0)
        {
            VAR10->VAR20 = 0;
            return VAR17;
        }
    }
    else if (!VAR10->VAR20)
        return FUN4(VAR21);
    VAR8 = FUN5(VAR10->VAR2->VAR22);
    if (VAR8 && VAR13->VAR23 % (VAR10->VAR19 << VAR8->VAR24))
    {
        FUN6(VAR2, VAR25, "");
        return VAR26;
    }
    *VAR4 = VAR10->VAR20;
    VAR2->VAR22 = VAR10->VAR2->VAR22;
    VAR17 = FUN7(VAR2, VAR13->VAR27, VAR13->VAR23 / VAR10->VAR19);
    if (VAR17 < 0)
    {
        FUN6(VAR10, VAR25, "");
        return VAR17;
    }
    if (*VAR4)
    {
        VAR10->VAR14[1]->VAR28 = NULL;
        VAR10->VAR14[1]->VAR27 = VAR2->VAR27;
        VAR10->VAR14[1]->VAR23 = VAR2->VAR23;
        VAR10->VAR14[1]->VAR29 = VAR2->VAR22;
        FUN8(VAR10->VAR14[1]->VAR3, VAR13->VAR3, VAR13->VAR30, VAR2->VAR22, VAR2->VAR27, VAR2->VAR23, VAR16);
        for (VAR15 = 0; VAR15 < VAR31; VAR15++)
            VAR10->VAR14[1]->VAR30[VAR15] = VAR13->VAR30[VAR15];
        VAR17 = FUN9(VAR3, VAR10->VAR14[1]);
    }
    return VAR17;
}