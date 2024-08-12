static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    int64_t VAR8 = FUN2(VAR2);
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        if (VAR4->VAR10[VAR7].VAR11 <= 0 && !(VAR4->VAR12 & VAR13))
            continue;
        VAR4->VAR10[VAR7].VAR14 = VAR4->VAR14;
        VAR4->VAR10[VAR7].VAR15 = VAR7 + 1;
        if (VAR4->VAR10[VAR7].VAR11)
            FUN5(&VAR4->VAR10[VAR7]);
    }
    if (VAR4->VAR16)
        for (VAR7 = 0; VAR7 < VAR6->VAR9; VAR7++)
        {
            VAR4->VAR10[VAR7].VAR17 = FUN6('', '', '', '');
            VAR4->VAR10[VAR7].VAR18 = VAR4->VAR10[VAR4->VAR16].VAR15;
        }
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        if (VAR4->VAR10[VAR7].VAR19 == FUN6('', '', '', ''))
        {
            VAR4->VAR10[VAR7].VAR17 = FUN6('', '', '', '');
            VAR4->VAR10[VAR7].VAR18 = VAR4->VAR10[VAR4->VAR10[VAR7].VAR20].VAR15;
        }
    }
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        if (VAR4->VAR10[VAR7].VAR19 == FUN6('', '', '', ''))
        {
            int VAR21 = VAR4->VAR10[VAR7].VAR20;
            VAR4->VAR10[VAR21].VAR17 = VAR4->VAR10[VAR7].VAR19;
            VAR4->VAR10[VAR21].VAR18 = VAR4->VAR10[VAR7].VAR15;
            VAR4->VAR10[VAR7].VAR22 = FUN7(VAR4->VAR10[VAR21].VAR22, VAR4->VAR10[VAR7].VAR23, VAR4->VAR10[VAR21].VAR23);
        }
    }
    FUN8(VAR2, VAR4);
    if (VAR4->VAR24 != VAR25 && !VAR4->VAR26)
        FUN9(VAR2, VAR4);
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        if (VAR4->VAR10[VAR7].VAR11 > 0 || VAR4->VAR12 & VAR13)
        {
            FUN10(VAR2, VAR4, &(VAR4->VAR10[VAR7]), VAR7 < VAR6->VAR9 ? VAR6->VAR27[VAR7] : NULL);
        }
    }
    if (VAR4->VAR12 & VAR13)
        FUN11(VAR2, VAR4);
    if (VAR4->VAR24 == VAR28)
        FUN12(VAR2, VAR6);
    else
        FUN13(VAR2, VAR4, VAR6);
    return FUN14(VAR2, VAR8);
}