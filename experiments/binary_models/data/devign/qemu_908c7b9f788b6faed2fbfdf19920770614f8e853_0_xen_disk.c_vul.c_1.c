static int FUN1(struct VAR1 *VAR1)
{
    struct VAR2 *VAR3 = VAR1->VAR3;
    uintptr_t VAR4;
    size_t VAR5;
    int VAR6;
    FUN2(&VAR3->VAR7, 3, "" VAR8 "" VAR8 "", VAR1->VAR9.VAR10, VAR1->VAR9.VAR11, VAR1->VAR9.VAR12, VAR1->VAR9.VAR13, VAR1->VAR9.VAR14);
    switch (VAR1->VAR9.VAR10)
    {
    case VAR15:
        VAR1->VAR16 = VAR17;
        if (VAR1->VAR9.VAR10 != VAR15 && VAR3->VAR18[0] != '')
        {
            FUN2(&VAR3->VAR7, 0, "");
            goto VAR19;
        }
        break;
    case VAR20:
        if (!VAR21)
            VAR1->VAR22 = VAR1->VAR23 = 1;
    case VAR24:
        VAR1->VAR16 = VAR25;
        if (VAR21)
            VAR1->VAR23 = 1;
        break;
    default:
        FUN2(&VAR3->VAR7, 0, "", VAR1->VAR9.VAR10);
        goto VAR19;
    };
    VAR1->VAR26 = VAR1->VAR9.VAR14 * VAR3->VAR27;
    for (VAR6 = 0; VAR6 < VAR1->VAR9.VAR11; VAR6++)
    {
        if (VAR6 == VAR28)
        {
            FUN2(&VAR3->VAR7, 0, "");
            goto VAR19;
        }
        if (VAR1->VAR9.VAR29[VAR6].VAR30 > VAR1->VAR9.VAR29[VAR6].VAR31)
        {
            FUN2(&VAR3->VAR7, 0, "");
            goto VAR19;
        }
        if (VAR1->VAR9.VAR29[VAR6].VAR31 * VAR32 >= VAR33)
        {
            FUN2(&VAR3->VAR7, 0, "");
            goto VAR19;
        }
        VAR1->VAR34[VAR6] = VAR3->VAR7.VAR35;
        VAR1->VAR36[VAR6] = VAR1->VAR9.VAR29[VAR6].VAR37;
        VAR4 = VAR1->VAR9.VAR29[VAR6].VAR30 * VAR3->VAR27;
        VAR5 = (VAR1->VAR9.VAR29[VAR6].VAR31 - VAR1->VAR9.VAR29[VAR6].VAR30 + 1) * VAR3->VAR27;
        FUN3(&VAR1->VAR38, (void *)VAR4, VAR5);
    }
    if (VAR1->VAR26 + VAR1->VAR38.VAR39 > VAR3->VAR40)
    {
        FUN2(&VAR3->VAR7, 0, "");
        goto VAR19;
    }
    return 0;
VAR19:
    VAR1->VAR41 = VAR42;
    return -1;
}