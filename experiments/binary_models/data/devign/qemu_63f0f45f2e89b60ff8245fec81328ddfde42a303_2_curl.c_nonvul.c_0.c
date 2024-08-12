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
            FUN2(VAR4->VAR3->VAR12, true);
        }
    } while (!VAR4);
    if (!VAR4->VAR13)
    {
        VAR4->VAR13 = FUN3();
        if (!VAR4->VAR13)
        {
            return NULL;
        }
        FUN4(VAR4->VAR13, VAR14, VAR3->VAR15);
        FUN4(VAR4->VAR13, VAR16, (long)VAR3->VAR17);
        FUN4(VAR4->VAR13, VAR18, 5);
        FUN4(VAR4->VAR13, VAR19, (void *)VAR20);
        FUN4(VAR4->VAR13, VAR21, (void *)VAR4);
        FUN4(VAR4->VAR13, VAR22, (void *)VAR4);
        FUN4(VAR4->VAR13, VAR23, 1);
        FUN4(VAR4->VAR13, VAR24, 1);
        FUN4(VAR4->VAR13, VAR25, 1);
        FUN4(VAR4->VAR13, VAR26, VAR4->VAR27);
        FUN4(VAR4->VAR13, VAR28, 1);
        FUN4(VAR4->VAR13, VAR29, VAR30);
        FUN4(VAR4->VAR13, VAR31, VAR30);
        FUN4(VAR4->VAR13, VAR32, 1);
    }
    VAR4->VAR3 = VAR3;
    return VAR4;
}