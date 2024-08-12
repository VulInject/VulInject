static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12 = VAR8->VAR13, VAR14 = 2, VAR15 = VAR8->VAR16 - 1, VAR17;
    int VAR18 = 0;
    int VAR19 = VAR4->VAR20 & VAR21;
    int VAR22 = VAR4->VAR20 & VAR23;
    FUN2(VAR9 <= VAR24);
    FUN2(VAR10 <= VAR25);
    for (VAR17 = 0; VAR17 < VAR10; VAR17++)
        memset(VAR6->VAR26[VAR17], 0, VAR9 * sizeof(**VAR6->VAR26));
    if (!VAR8->VAR27)
        return 0;
    for (VAR17 = 0; VAR17 < VAR10 + 2; VAR17++)
        memset(VAR6->VAR28[VAR17], 0, (VAR9 + 2) * sizeof(**VAR6->VAR28));
    VAR8->VAR26[VAR8->VAR27] = 0xff;
    VAR8->VAR26[VAR8->VAR27 + 1] = 0xff;
    FUN3(&VAR6->VAR29, VAR8->VAR26, 0, 1);
    while (VAR12--)
    {
        switch (VAR14)
        {
        case 0:
            FUN4(VAR6, VAR9, VAR10, VAR15 + 1, VAR11, VAR19 && (VAR18 >= 4), VAR22);
            break;
        case 1:
            FUN5(VAR6, VAR9, VAR10, VAR15 + 1);
            break;
        case 2:
            FUN6(VAR2, VAR6, VAR9, VAR10, VAR15 + 1, VAR11, VAR4->VAR20 & VAR30, VAR22);
            break;
        }
        VAR14++;
        if (VAR14 == 3)
        {
            VAR15--;
            VAR14 = 0;
        }
    }
    return 0;
}