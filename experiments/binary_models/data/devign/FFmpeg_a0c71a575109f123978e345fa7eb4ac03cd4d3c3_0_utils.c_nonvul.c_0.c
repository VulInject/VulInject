VAR1 *FUN1(VAR2 *VAR3, const VAR4 *VAR5)
{
    VAR1 *VAR6;
    int VAR7;
    if (FUN2(&VAR3->VAR8, VAR3->VAR9 + 1, sizeof(*VAR3->VAR8)) < 0)
    {
        VAR3->VAR9 = 0;
        return NULL;
    }
    VAR6 = FUN3(sizeof(VAR1));
    if (!VAR6)
        return NULL;
    if (!(VAR6->VAR10 = FUN3(sizeof(*VAR6->VAR10))))
    {
        FUN4(VAR6);
        return NULL;
    }
    VAR6->VAR11 = FUN5(VAR5);
    if (!VAR6->VAR11)
    {
        FUN4(VAR6->VAR10);
        FUN4(VAR6);
        return NULL;
    }
    if (VAR3->VAR12)
    {
        VAR6->VAR11->VAR13 = 0;
        FUN6(VAR6, 33, 1, 90000);
        VAR6->VAR14 = 0;
    }
    else
    {
        VAR6->VAR14 = VAR15;
    }
    VAR6->VAR16 = VAR3->VAR9;
    VAR6->VAR17 = VAR15;
    VAR6->VAR18 = VAR15;
    VAR6->VAR19 = VAR15;
    VAR6->VAR20 = VAR21;
    VAR6->VAR22 = VAR15;
    for (VAR7 = 0; VAR7 < VAR23 + 1; VAR7++)
        VAR6->VAR24[VAR7] = VAR15;
    VAR6->VAR25 = (VAR26){0, 1};
    VAR6->VAR10->VAR27 = VAR15;
    VAR6->VAR10->VAR28 = VAR15;
    VAR3->VAR8[VAR3->VAR9++] = VAR6;
    return VAR6;
}