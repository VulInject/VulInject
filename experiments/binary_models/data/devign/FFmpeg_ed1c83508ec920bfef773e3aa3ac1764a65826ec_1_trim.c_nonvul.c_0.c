static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    int VAR11;
    if (VAR9->VAR12)
    {
        FUN2(&VAR4);
        return 0;
    }
    if (VAR9->VAR13 >= 0 || VAR9->VAR14 != VAR15)
    {
        VAR11 = 1;
        if (VAR9->VAR13 >= 0 && VAR9->VAR16 >= VAR9->VAR13)
            VAR11 = 0;
        if (VAR9->VAR14 != VAR15 && VAR4->VAR17 != VAR15 && VAR4->VAR17 >= VAR9->VAR14)
            VAR11 = 0;
        if (VAR11)
            goto VAR11;
    }
    if (VAR9->VAR18 == VAR15 && VAR4->VAR17 != VAR15)
        VAR9->VAR18 = VAR4->VAR17;
    if (VAR9->VAR19 != VAR20 || VAR9->VAR21 != VAR15 || VAR9->VAR22)
    {
        VAR11 = 1;
        if (VAR9->VAR19 != VAR20 && VAR9->VAR16 < VAR9->VAR19)
            VAR11 = 0;
        if (VAR9->VAR21 != VAR15 && VAR4->VAR17 != VAR15 && VAR4->VAR17 < VAR9->VAR21)
            VAR11 = 0;
        if (VAR9->VAR22 && VAR4->VAR17 != VAR15 && VAR4->VAR17 - VAR9->VAR18 < VAR9->VAR22)
            VAR11 = 0;
        if (VAR11)
        {
            VAR9->VAR12 = 1;
            goto VAR11;
        }
    }
    VAR9->VAR16++;
    return FUN3(VAR6->VAR23[0], VAR4);
VAR11:
    VAR9->VAR16++;
    FUN2(&VAR4);
    return 0;
}