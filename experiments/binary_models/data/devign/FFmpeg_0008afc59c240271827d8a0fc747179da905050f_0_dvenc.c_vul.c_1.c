VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6 = NULL;
    int VAR7;
    if (VAR3->VAR8 > 3)
        return NULL;
    VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
        return NULL;
    VAR4->VAR9 = 0;
    VAR4->VAR10[0] = VAR4->VAR10[1] = NULL;
    for (VAR7 = 0; VAR7 < VAR3->VAR8; VAR7++)
    {
        switch (VAR3->VAR11[VAR7]->VAR12->VAR13)
        {
        case VAR14:
            VAR6 = VAR3->VAR11[VAR7];
            break;
        case VAR15:
            VAR4->VAR10[VAR4->VAR9++] = VAR3->VAR11[VAR7];
            break;
        default:
            goto VAR16;
        }
    }
    if (!VAR6 || VAR6->VAR12->VAR17 != VAR18)
        goto VAR16;
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        if (VAR4->VAR10[VAR7] && (VAR4->VAR10[VAR7]->VAR12->VAR17 != VAR19 || VAR4->VAR10[VAR7]->VAR12->VAR20 != 48000 || VAR4->VAR10[VAR7]->VAR12->VAR21 != 2))
            goto VAR16;
    }
    VAR4->VAR22 = FUN3(VAR6->VAR12);
    if (!VAR4->VAR22)
        goto VAR16;
    if ((VAR4->VAR9 > 1) && (VAR4->VAR22->VAR23 < 2))
    {
        goto VAR16;
    }
    VAR4->VAR24 = 0;
    VAR4->VAR25 = 0;
    VAR4->VAR26 = 0;
    VAR4->VAR27 = (VAR28)VAR3->VAR29;
    for (VAR7 = 0; VAR7 < VAR4->VAR9; VAR7++)
    {
        if (VAR4->VAR10[VAR7] && FUN4(&VAR4->VAR30[VAR7], 100 * VAR31) < 0)
        {
            while (VAR7 > 0)
            {
                VAR7--;
                FUN5(&VAR4->VAR30[VAR7]);
            }
            goto VAR16;
        }
    }
    return VAR4;
VAR16:
    FUN6(VAR4);
    return NULL;
}