static void *FUN1(void)
{
    void *VAR1;
    VAR2 *VAR3;
    size_t VAR4;
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR1 = FUN2(VAR9, VAR9 + 1, 0, 0);
    FUN3(VAR1, VAR10, 1);
    FUN4(VAR1, VAR11, (VAR5)VAR12);
    FUN5(VAR1, VAR13, (VAR2 *)VAR14, VAR15);
    FUN3(VAR1, VAR16, FUN6());
    VAR3 = FUN7(&VAR4);
    if (VAR3)
        FUN5(VAR1, VAR17, VAR3, VAR4);
    FUN5(VAR1, VAR18, (VAR2 *)&VAR19, sizeof(VAR19));
    FUN5(VAR1, VAR20, (VAR2 *)&VAR21, sizeof(struct VAR22));
    VAR6 = FUN8(VAR5, 1 + VAR23 + VAR24);
    VAR6[0] = FUN9(VAR24);
    for (VAR7 = 0; VAR7 < VAR23; VAR7++)
    {
        for (VAR8 = 0; VAR8 < VAR24; VAR8++)
        {
            if (FUN10(VAR7, VAR25[VAR8]))
            {
                VAR6[VAR7 + 1] = FUN9(VAR8);
                break;
            }
        }
    }
    for (VAR7 = 0; VAR7 < VAR24; VAR7++)
    {
        VAR6[VAR23 + 1 + VAR7] = FUN9(VAR26[VAR7]);
    }
    FUN5(VAR1, VAR27, (VAR2 *)VAR6, (1 + VAR23 + VAR24) * sizeof(*VAR6));
    return VAR1;
}