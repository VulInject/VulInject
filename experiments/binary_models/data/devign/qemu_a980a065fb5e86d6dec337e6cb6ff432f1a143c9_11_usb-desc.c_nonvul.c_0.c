int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8)
{
    const VAR9 *VAR10 = VAR2->VAR11->VAR12;
    int VAR13, VAR14 = -1;
    assert(VAR10 != NULL);
    switch (VAR3)
    {
    case VAR15 | VAR16:
        VAR2->VAR17 = VAR4;
        FUN2(VAR2->VAR17);
        VAR14 = 0;
        break;
    case VAR18 | VAR19:
        VAR14 = FUN3(VAR2, VAR4, VAR8, VAR6);
        break;
    case VAR18 | VAR20:
        VAR8[0] = VAR2->VAR21->VAR22;
        VAR14 = 1;
        break;
    case VAR15 | VAR23:
        for (VAR13 = 0; VAR13 < VAR2->VAR24->VAR25; VAR13++)
        {
            if (VAR2->VAR24->VAR26[VAR13].VAR22 == VAR4)
            {
                VAR2->VAR21 = VAR2->VAR24->VAR26 + VAR13;
                VAR14 = 0;
            }
        }
        FUN4(VAR2->VAR17, VAR4, VAR14);
        break;
    }
    return VAR14;
}