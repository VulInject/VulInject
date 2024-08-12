static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (VAR4->VAR13)
    {
        VAR11 = VAR4->VAR13;
    }
    else
    {
        VAR11 = FUN2(VAR2->VAR14);
    }
    if (!VAR11)
        return -1;
    if (VAR2->VAR15 != 1)
        return -1;
    VAR9 = VAR2->VAR16[0];
    for (VAR12 = 0; VAR12 < VAR17; VAR12++)
    {
        if (VAR11->VAR18 & (1 << VAR12))
            break;
    }
    if (VAR12 >= VAR17)
        return -1;
    VAR6->VAR11 = VAR11;
    VAR6->VAR19 = VAR12;
    VAR9->VAR20->VAR19 = VAR6->VAR19;
    return 0;
}