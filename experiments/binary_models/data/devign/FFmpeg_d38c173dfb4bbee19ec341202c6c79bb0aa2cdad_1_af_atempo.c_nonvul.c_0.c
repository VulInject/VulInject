static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR1 *VAR11 = VAR6->VAR12[0];
    int VAR13 = 0;
    int VAR14 = VAR4->VAR15;
    int VAR16 = (int)(0.5 + ((double)VAR14) / VAR9->VAR17);
    const VAR18 *VAR19 = VAR4->VAR20[0];
    const VAR18 *VAR21 = VAR19 + VAR14 * VAR9->VAR22;
    while (VAR19 < VAR21)
    {
        if (!VAR9->VAR23)
        {
            VAR9->VAR23 = FUN2(VAR11, VAR16);
            FUN3(VAR9->VAR23, VAR4);
            VAR9->VAR7 = VAR9->VAR23->VAR20[0];
            VAR9->VAR24 = VAR9->VAR7 + VAR16 * VAR9->VAR22;
        }
        FUN4(VAR9, &VAR19, VAR21, &VAR9->VAR7, VAR9->VAR24);
        if (VAR9->VAR7 == VAR9->VAR24)
        {
            VAR13 = FUN5(VAR9, VAR11, VAR16);
            if (VAR13 < 0)
                goto VAR25;
        }
    }
    VAR9->VAR26 += VAR14;
VAR25:
    FUN6(&VAR4);
    return VAR13;
}