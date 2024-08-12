static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12 = VAR8->VAR13, VAR14 = 2, VAR15 = VAR8->VAR16 - 1, VAR17, VAR18 = 0;
    int VAR19 = VAR20 & VAR4->VAR21;
    int VAR22 = VAR23 & VAR4->VAR21;
    for (VAR17 = 0; VAR17 < VAR10; VAR17++)
        memset(VAR6->VAR24[VAR17], 0, VAR9 * sizeof(**VAR6->VAR24));
    if (!VAR8->VAR25)
        return 0;
    for (VAR17 = 0; VAR17 < VAR10 + 2; VAR17++)
        memset(VAR6->VAR26[VAR17], 0, (VAR9 + 2) * sizeof(**VAR6->VAR26));
    VAR8->VAR24[VAR8->VAR25] = 0xff;
    VAR8->VAR24[VAR8->VAR25 + 1] = 0xff;
    FUN2(&VAR6->VAR27, VAR8->VAR24);
    while (VAR12--)
    {
        if (VAR15 < 0)
        {
            FUN3(VAR2->VAR28, VAR29, "");
            return FUN4(VAR30);
        }
        switch (VAR14)
        {
        case 0:
            FUN5(VAR6, VAR9, VAR10, VAR15 + 1, VAR11, VAR19 && (VAR18 >= 4), VAR22);
            break;
        case 1:
            FUN6(VAR6, VAR9, VAR10, VAR15 + 1);
            if (VAR19 && VAR18 >= 4)
                FUN2(&VAR6->VAR27, VAR8->VAR24);
            break;
        case 2:
            FUN7(VAR2, VAR6, VAR9, VAR10, VAR15 + 1, VAR11, VAR4->VAR21 & VAR31, VAR22);
            VAR18 = VAR18 + 1;
            if (VAR19 && VAR18 >= 4)
                FUN2(&VAR6->VAR27, VAR8->VAR24);
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