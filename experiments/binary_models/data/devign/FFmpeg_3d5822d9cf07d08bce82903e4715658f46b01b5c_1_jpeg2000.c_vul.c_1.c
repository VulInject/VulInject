static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR2->VAR13 + VAR7;
    int VAR14, VAR15;
    VAR13->VAR16 = 0;
    VAR13->VAR17[0][0] = ((VAR2->VAR17[0][0] >> VAR10) + VAR7 % VAR4->VAR18) * (1 << VAR10);
    VAR13->VAR17[1][0] = ((VAR2->VAR17[1][0] >> VAR11) + VAR7 / VAR4->VAR18) * (1 << VAR11);
    VAR13->VAR17[0][1] = VAR13->VAR17[0][0] + (1 << VAR10);
    VAR13->VAR17[0][0] = FUN2(VAR13->VAR17[0][0], VAR2->VAR17[0][0]);
    VAR13->VAR17[0][1] = FUN3(VAR13->VAR17[0][1], VAR2->VAR17[0][1]);
    VAR13->VAR17[1][1] = VAR13->VAR17[1][0] + (1 << VAR11);
    VAR13->VAR17[1][0] = FUN2(VAR13->VAR17[1][0], VAR2->VAR17[1][0]);
    VAR13->VAR17[1][1] = FUN3(VAR13->VAR17[1][1], VAR2->VAR17[1][1]);
    VAR13->VAR19 = FUN4(VAR13->VAR17[0][1], VAR2->VAR20) - (VAR13->VAR17[0][0] >> VAR2->VAR20);
    VAR13->VAR21 = FUN4(VAR13->VAR17[1][1], VAR2->VAR22) - (VAR13->VAR17[1][0] >> VAR2->VAR22);
    VAR13->VAR23 = FUN5(VAR13->VAR19, VAR13->VAR21);
    if (!VAR13->VAR23)
        return FUN6(VAR24);
    VAR13->VAR25 = FUN5(VAR13->VAR19, VAR13->VAR21);
    if (!VAR13->VAR25)
        return FUN6(VAR24);
    if (VAR13->VAR19 * (VAR26)VAR13->VAR21 > VAR27)
    {
        VAR13->VAR28 = NULL;
        return FUN6(VAR24);
    }
    VAR14 = VAR13->VAR19 * VAR13->VAR21;
    VAR13->VAR28 = FUN7(VAR14, sizeof(*VAR13->VAR28));
    if (!VAR13->VAR28)
        return FUN6(VAR24);
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        VAR29 *VAR28 = VAR13->VAR28 + VAR15;
        int VAR30, VAR31;
        VAR30 = ((VAR13->VAR17[0][0]) >> VAR2->VAR20) << VAR2->VAR20;
        VAR30 = VAR30 + ((VAR15 % VAR13->VAR19) << VAR2->VAR20);
        VAR28->VAR17[0][0] = FUN2(VAR30, VAR13->VAR17[0][0]);
        VAR31 = ((VAR13->VAR17[1][0]) >> VAR2->VAR22) << VAR2->VAR22;
        VAR31 = VAR31 + ((VAR15 / VAR13->VAR19) << VAR2->VAR22);
        VAR28->VAR17[1][0] = FUN2(VAR31, VAR13->VAR17[1][0]);
        VAR28->VAR17[0][1] = FUN3(VAR30 + (1 << VAR2->VAR20), VAR13->VAR17[0][1]);
        VAR28->VAR17[1][1] = FUN3(VAR31 + (1 << VAR2->VAR22), VAR13->VAR17[1][1]);
        if ((VAR8 + !!VAR9) & 1)
        {
            VAR28->VAR17[0][0] += VAR6->VAR4[VAR9 - 1].VAR17[0][1] - VAR6->VAR4[VAR9 - 1].VAR17[0][0];
            VAR28->VAR17[0][1] += VAR6->VAR4[VAR9 - 1].VAR17[0][1] - VAR6->VAR4[VAR9 - 1].VAR17[0][0];
        }
        if ((VAR8 + !!VAR9) & 2)
        {
            VAR28->VAR17[1][0] += VAR6->VAR4[VAR9 - 1].VAR17[1][1] - VAR6->VAR4[VAR9 - 1].VAR17[1][0];
            VAR28->VAR17[1][1] += VAR6->VAR4[VAR9 - 1].VAR17[1][1] - VAR6->VAR4[VAR9 - 1].VAR17[1][0];
        }
        VAR28->VAR32 = 0;
        VAR28->VAR33 = 3;
        VAR28->VAR34 = 0;
        memset(VAR28->VAR35, 0, sizeof(VAR28->VAR35));
        VAR28->VAR36 = 0;
    }
    return 0;
}