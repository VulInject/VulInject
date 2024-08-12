static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8, *VAR9;
    VAR10 *VAR11;
    int VAR12 = 1 << VAR7->VAR13.VAR14->VAR15;
    int VAR16 = 1;
    int *VAR17 = VAR3;
    int VAR18 = VAR17[VAR4];
    int VAR19 = VAR7->VAR20.VAR21 + VAR18 * ((VAR7->VAR13.VAR14->VAR22 + VAR12 - 1) >> VAR7->VAR13.VAR14->VAR15);
    int VAR23 = VAR7->VAR13.VAR24->VAR25[VAR19];
    int VAR26 = VAR18 % VAR7->VAR27;
    int VAR28;
    VAR9 = VAR7->VAR29[VAR5];
    VAR11 = VAR9->VAR30;
    if (VAR18)
    {
        VAR28 = FUN2(&VAR11->VAR31, VAR9->VAR32 + VAR9->VAR20.VAR33[VAR18 - 1], VAR9->VAR20.VAR34[VAR18 - 1]);
        if (VAR28 < 0)
            return VAR28;
        FUN3(&VAR11->VAR35, VAR9->VAR32 + VAR9->VAR20.VAR33[(VAR18)-1], VAR9->VAR20.VAR34[VAR18 - 1]);
    }
    while (VAR16 && VAR23 < VAR9->VAR13.VAR14->VAR12)
    {
        int VAR36 = (VAR19 % VAR9->VAR13.VAR14->VAR37) << VAR9->VAR13.VAR14->VAR15;
        int VAR38 = (VAR19 / VAR9->VAR13.VAR14->VAR37) << VAR9->VAR13.VAR14->VAR15;
        FUN4(VAR9, VAR36, VAR38, VAR23);
        FUN5(VAR9->VAR39, VAR18, VAR26, VAR40);
        if (FUN6(&VAR7->VAR41))
        {
            FUN7(VAR9->VAR39, VAR18, VAR26, VAR40);
            return 0;
        }
        FUN8(VAR9, VAR23);
        FUN9(VAR9, VAR36 >> VAR9->VAR13.VAR14->VAR15, VAR38 >> VAR9->VAR13.VAR14->VAR15);
        VAR16 = FUN10(VAR9, VAR36, VAR38, VAR9->VAR13.VAR14->VAR15, 0);
        if (VAR16 < 0)
        {
            VAR9->VAR42[VAR19] = -1;
            return VAR16;
        }
        VAR23++;
        FUN11(VAR9, VAR23);
        FUN7(VAR9->VAR39, VAR18, VAR26, 1);
        FUN12(VAR9, VAR36, VAR38, VAR12);
        if (!VAR16 && (VAR36 + VAR12) < VAR9->VAR13.VAR14->VAR22 && VAR18 != VAR9->VAR20.VAR43)
        {
            return 0;
        }
        if ((VAR36 + VAR12) >= VAR9->VAR13.VAR14->VAR22 && (VAR38 + VAR12) >= VAR9->VAR13.VAR14->VAR44)
        {
            FUN13(VAR9, VAR36, VAR38, VAR12);
            FUN7(VAR9->VAR39, VAR18, VAR26, VAR40);
            return VAR23;
        }
        VAR19 = VAR9->VAR13.VAR24->VAR45[VAR23];
        VAR36 += VAR12;
        if (VAR36 >= VAR9->VAR13.VAR14->VAR22)
        {
            break;
        }
    }
    return 0;