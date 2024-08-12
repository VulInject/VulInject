FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6 = -1, VAR7;
    offset_t VAR8, VAR9;
    if (VAR2->VAR10.VAR11)
        return 0;
    if (VAR2->VAR12 != VAR13)
        return 0;
    VAR8 = FUN2(&VAR2->VAR10);
    if (VAR8 < 0)
        return 0;
    VAR9 = VAR8 > VAR14 ? VAR8 - VAR14 : VAR8;
    FUN3(VAR2);
    FUN4(&VAR2->VAR10, VAR9, VAR15);
    while (!FUN5(VAR2, &VAR7))
    {
        if (VAR4->VAR16[VAR7].VAR17 != -1 && VAR4->VAR16[VAR7].VAR17 != 0)
            VAR6 = VAR7;
    }
    if (VAR6 != -1)
    {
        VAR2->VAR16[VAR6]->VAR12 = FUN6(VAR2, VAR6, VAR4->VAR16[VAR6].VAR17);
    }
    VAR4->VAR8 = VAR8;
    FUN7(VAR2, 0);
    FUN3(VAR2);
    while (!FUN5(VAR2, &VAR7))
    {
        if (VAR7 == VAR6 && VAR4->VAR16[VAR7].VAR17 != -1 && VAR4->VAR16[VAR7].VAR17 != 0)
            break;
    }
    if (VAR7 == VAR6)
    {
        VAR2->VAR16[VAR6]->VAR18 = FUN6(VAR2, VAR6, VAR4->VAR16[VAR6].VAR17);
        VAR2->VAR16[VAR6]->VAR12 -= VAR2->VAR16[VAR6]->VAR18;
    }
    FUN7(VAR2, 0);
    return 0;
}