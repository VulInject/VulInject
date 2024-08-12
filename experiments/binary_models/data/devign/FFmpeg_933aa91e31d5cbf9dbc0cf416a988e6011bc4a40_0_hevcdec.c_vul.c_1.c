static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7 = 1 << VAR5->VAR8.VAR9->VAR10;
    int VAR11 = 1;
    int VAR12 = 0;
    int VAR13 = 0;
    int VAR14 = VAR5->VAR8.VAR15->VAR16[VAR5->VAR17.VAR18];
    if (!VAR14 && VAR5->VAR17.VAR19)
    {
        FUN2(VAR5->VAR20, VAR21, "");
        return VAR22;
    }
    if (VAR5->VAR17.VAR19)
    {
        int VAR23 = VAR5->VAR8.VAR15->VAR24[VAR14 - 1];
        if (VAR5->VAR25[VAR23] != VAR5->VAR17.VAR26)
        {
            FUN2(VAR5->VAR20, VAR21, "");
            return VAR22;
        }
    }
    while (VAR11 && VAR14 < VAR5->VAR8.VAR9->VAR7)
    {
        int VAR27 = VAR5->VAR8.VAR15->VAR24[VAR14];
        VAR12 = (VAR27 % ((VAR5->VAR8.VAR9->VAR28 + VAR7 - 1) >> VAR5->VAR8.VAR9->VAR10)) << VAR5->VAR8.VAR9->VAR10;
        VAR13 = (VAR27 / ((VAR5->VAR8.VAR9->VAR28 + VAR7 - 1) >> VAR5->VAR8.VAR9->VAR10)) << VAR5->VAR8.VAR9->VAR10;
        FUN3(VAR5, VAR12, VAR13, VAR14);
        FUN4(VAR5, VAR14);
        FUN5(VAR5, VAR12 >> VAR5->VAR8.VAR9->VAR10, VAR13 >> VAR5->VAR8.VAR9->VAR10);
        VAR5->VAR29[VAR27].VAR30 = VAR5->VAR17.VAR30;
        VAR5->VAR29[VAR27].VAR31 = VAR5->VAR17.VAR31;
        VAR5->VAR32[VAR27] = VAR5->VAR17.VAR33;
        VAR11 = FUN6(VAR5, VAR12, VAR13, VAR5->VAR8.VAR9->VAR10, 0);
        if (VAR11 < 0)
        {
            VAR5->VAR25[VAR27] = -1;
            return VAR11;
        }
        VAR14++;
        FUN7(VAR5, VAR14);
        FUN8(VAR5, VAR12, VAR13, VAR7);
    }
    if (VAR12 + VAR7 >= VAR5->VAR8.VAR9->VAR28 && VAR13 + VAR7 >= VAR5->VAR8.VAR9->VAR34)
        FUN9(VAR5, VAR12, VAR13, VAR7);
    return VAR14;
}