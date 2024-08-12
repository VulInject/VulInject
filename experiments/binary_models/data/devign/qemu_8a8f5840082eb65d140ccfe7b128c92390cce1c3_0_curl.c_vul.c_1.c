static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = NULL;
    int VAR5, VAR6;
    do
    {
        for (VAR5 = 0; VAR5 < VAR7; VAR5++)
        {
            for (VAR6 = 0; VAR6 < VAR8; VAR6++)
                if (VAR3->VAR9[VAR5].VAR10[VAR6])
                    continue;
            if (VAR3->VAR9[VAR5].VAR11)
                continue;
            VAR4 = &VAR3->VAR9[VAR5];
            VAR4->VAR11 = 1;
            break;
        }
        if (!VAR4)
        {
            FUN2(100);
            FUN3(VAR3);
        }
    } while (!VAR4);
    if (VAR4->VAR12)
        goto VAR13;
    VAR4->VAR12 = FUN4();
    if (!VAR4->VAR12)
        return NULL;
    FUN5(VAR4->VAR12, VAR14, VAR3->VAR15);
    FUN5(VAR4->VAR12, VAR16, 5);
    FUN5(VAR4->VAR12, VAR17, (void *)VAR18);
    FUN5(VAR4->VAR12, VAR19, (void *)VAR4);
    FUN5(VAR4->VAR12, VAR20, (void *)VAR4);
    FUN5(VAR4->VAR12, VAR21, 1);
    FUN5(VAR4->VAR12, VAR22, 1);
    FUN5(VAR4->VAR12, VAR23, 1);
    FUN5(VAR4->VAR12, VAR24, VAR4->VAR25);
    FUN5(VAR4->VAR12, VAR26, 1);
    FUN5(VAR4->VAR12, VAR27, VAR28);
    FUN5(VAR4->VAR12, VAR29, VAR28);
    FUN5(VAR4->VAR12, VAR30, 1);
VAR13:
    VAR4->VAR3 = VAR3;
    return VAR4;