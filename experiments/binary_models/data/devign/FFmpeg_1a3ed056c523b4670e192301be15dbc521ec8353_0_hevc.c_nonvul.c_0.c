static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7 = 1 << VAR5->VAR8->VAR9;
    int VAR10 = 1;
    int VAR11 = 0;
    int VAR12 = 0;
    int VAR13 = VAR5->VAR14->VAR15[VAR5->VAR16.VAR17];
    if (!VAR13 && VAR5->VAR16.VAR18)
    {
        FUN2(VAR5->VAR19, VAR20, "");
        return VAR21;
    }
    if (VAR5->VAR16.VAR18)
    {
        int VAR22 = VAR5->VAR14->VAR23[VAR13 - 1];
        if (VAR5->VAR24[VAR22] != VAR5->VAR16.VAR25)
        {
            FUN2(VAR5->VAR19, VAR20, "");
            return VAR21;
        }
    }
    while (VAR10 && VAR13 < VAR5->VAR8->VAR7)
    {
        int VAR26 = VAR5->VAR14->VAR23[VAR13];
        VAR11 = (VAR26 % ((VAR5->VAR8->VAR27 + VAR7 - 1) >> VAR5->VAR8->VAR9)) << VAR5->VAR8->VAR9;
        VAR12 = (VAR26 / ((VAR5->VAR8->VAR27 + VAR7 - 1) >> VAR5->VAR8->VAR9)) << VAR5->VAR8->VAR9;
        FUN3(VAR5, VAR11, VAR12, VAR13);
        FUN4(VAR5, VAR13);
        FUN5(VAR5, VAR11 >> VAR5->VAR8->VAR9, VAR12 >> VAR5->VAR8->VAR9);
        VAR5->VAR28[VAR26].VAR29 = VAR5->VAR16.VAR29;
        VAR5->VAR28[VAR26].VAR30 = VAR5->VAR16.VAR30;
        VAR5->VAR31[VAR26] = VAR5->VAR16.VAR32;
        VAR10 = FUN6(VAR5, VAR11, VAR12, VAR5->VAR8->VAR9, 0);
        if (VAR10 < 0)
        {
            VAR5->VAR24[VAR26] = -1;
            return VAR10;
        }
        VAR13++;
        FUN7(VAR5, VAR13);
        FUN8(VAR5, VAR11, VAR12, VAR7);
    }
    if (VAR11 + VAR7 >= VAR5->VAR8->VAR27 && VAR12 + VAR7 >= VAR5->VAR8->VAR33)
        FUN9(VAR5, VAR11, VAR12);
    return VAR13;
}