static int FUN1(VAR1 *VAR2)
{
    static const int VAR3[4] = {VAR4, VAR5, VAR6, VAR7};
    int VAR8, VAR9, VAR10;
    if (VAR2->VAR11)
    {
        VAR2->VAR12 = FUN2(&VAR2->VAR13, 1);
        if (VAR2->VAR12)
            VAR2->VAR12 = 2 + FUN2(&VAR2->VAR13, 1);
    }
    VAR8 = FUN3(&VAR2->VAR13, 0, 4);
    if (VAR8 > 4 || VAR8 < 0)
        return VAR14;
    VAR2->VAR15 = VAR3[VAR8];
    FUN4(VAR2->VAR16, VAR17, "", VAR2->VAR15);
    if (VAR2->VAR18)
        VAR2->VAR19 = FUN2(&VAR2->VAR13, 8);
    if (VAR2->VAR20)
    {
        if (!VAR2->VAR11)
            VAR2->VAR21 = FUN2(&VAR2->VAR13, 2);
        else
        {
            VAR2->VAR22 = FUN2(&VAR2->VAR13, 1);
            VAR2->VAR23 = FUN2(&VAR2->VAR13, 1);
        }
    }
    if (VAR2->VAR24)
    {
        for (VAR9 = 0; VAR9 < VAR2->VAR25; VAR9++)
        {
            VAR2->VAR26[VAR9] = FUN2(&VAR2->VAR13, 16);
            VAR2->VAR27[VAR9] = FUN2(&VAR2->VAR13, 16);
            VAR2->VAR28[VAR9] = FUN2(&VAR2->VAR13, 16);
            VAR2->VAR29[VAR9] = FUN2(&VAR2->VAR13, 16);
        }
        FUN5(&VAR2->VAR13, 16 * 4 * VAR2->VAR25);
    }
    VAR2->VAR30 = FUN2(&VAR2->VAR13, 1);
    VAR2->VAR31 = FUN2(&VAR2->VAR13, 1);
    if (VAR2->VAR32 == 1)
        VAR2->VAR33 = FUN2(&VAR2->VAR13, 1);
    switch (VAR2->VAR15)
    {
    case VAR6:
        if (FUN6(VAR2) < 0)
            return -1;
    case VAR4:
        if (FUN7(VAR2) < 0)
            return -1;
    case VAR7:
    case VAR5:
        if (FUN8(VAR2) < 0)
            return VAR14;
    default:
        break;
    }
    VAR10 = FUN9(&VAR2->VAR13);
    VAR2->VAR34 = NULL + VAR10;
    VAR2->VAR35 = NULL + VAR10;
    if (VAR2->VAR15 == VAR6 || VAR2->VAR15 == VAR7)
    {
        VAR10 = FUN9(&VAR2->VAR13);
        VAR2->VAR36 = NULL + VAR10;
        VAR2->VAR37 = NULL + VAR10;
    }
    VAR10 = FUN9(&VAR2->VAR13);
    VAR2->VAR38 = VAR39 + VAR10;
    VAR2->VAR40 = VAR41 + VAR10;
    return 0;
}