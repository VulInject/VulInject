VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5;
    int VAR6;
    if (VAR3->VAR7 >= VAR8)
    {
        FUN2(VAR3, VAR9, "");
        return NULL;
    }
    VAR1 **VAR10;
    if (VAR3->VAR7 >= VAR11 / sizeof(*VAR10))
        return NULL;
    VAR10 = FUN3(VAR3->VAR10, (VAR3->VAR7 + 1) * sizeof(*VAR10));
    if (!VAR10)
        return NULL;
    VAR3->VAR10 = VAR10;
    VAR5 = FUN4(sizeof(VAR1));
    if (!VAR5)
        return NULL;
    VAR5->VAR12 = FUN5();
    if (VAR3->VAR13)
    {
        VAR5->VAR12->VAR14 = 0;
    }
    VAR5->VAR15 = VAR3->VAR7;
    VAR5->VAR4 = VAR4;
    VAR5->VAR16 = VAR17;
    VAR5->VAR18 = VAR17;
    VAR5->VAR19 = 0;
    VAR5->VAR20 = VAR17;
    VAR5->VAR21 = VAR22;
    FUN6(VAR5, 33, 1, 90000);
    VAR5->VAR23 = VAR17;
    for (VAR6 = 0; VAR6 < VAR24 + 1; VAR6++)
        VAR5->VAR25[VAR6] = VAR17;
    VAR5->VAR26 = VAR17;
    VAR5->VAR27 = (VAR28){0, 1};
    VAR3->VAR10[VAR3->VAR7++] = VAR5;
    return VAR5;
}