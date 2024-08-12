static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0, VAR4;
    if (VAR2->VAR5)
        VAR2->VAR6 = FUN2(&VAR2->VAR7, 1);
    FUN3(&VAR2->VAR7, 2);
    if (VAR2->VAR8)
        VAR2->VAR9 = FUN2(&VAR2->VAR7, 1);
    VAR2->VAR10 = FUN2(&VAR2->VAR7, 1);
    if (VAR2->VAR11->VAR12 && !VAR2->VAR10)
    {
        if (FUN2(&VAR2->VAR7, 1))
            VAR2->VAR10 = VAR13;
        else
            VAR2->VAR10 = VAR14;
    }
    else
        VAR2->VAR10++;
    switch (VAR2->VAR10)
    {
    case VAR13:
        VAR3 = FUN4(VAR2);
        break;
    case VAR15:
        VAR3 = FUN5(VAR2);
        break;
    case VAR14:
        VAR3 = FUN6(VAR2);
        break;
    case VAR16:
        VAR3 = FUN5(VAR2);
        break;
    }
    if (VAR3 == VAR17)
    {
        FUN7(VAR2, VAR18, "");
        return VAR3;
    }
    VAR4 = FUN8(&VAR2->VAR7);
    VAR2->VAR19 = NULL + VAR4;
    VAR2->VAR20 = NULL + VAR4;
    if (VAR2->VAR10 == VAR13 || VAR2->VAR10 == VAR15)
    {
        VAR4 = FUN8(&VAR2->VAR7);
        VAR2->VAR21 = NULL + VAR4;
        VAR2->VAR22 = NULL + VAR4;
    }
    VAR4 = FUN8(&VAR2->VAR7);
    VAR2->VAR23 = VAR24 + VAR4;
    VAR2->VAR25 = VAR26 + VAR4;
    return 0;
}