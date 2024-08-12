static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR3 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    struct VAR8 *VAR9 = VAR3->VAR10;
    int VAR11, VAR12;
    if (!VAR9)
        return 0;
    VAR3->VAR10 = VAR9->VAR13;
    for (VAR11 = 0; VAR11 < VAR3->VAR14; VAR11++)
        FUN2(&VAR3->VAR15[VAR11].VAR16);
    FUN3(VAR6, VAR9->VAR17, VAR18);
    VAR3->VAR19 = -1;
    VAR3->VAR20 = VAR9->VAR20;
    VAR3->VAR14 = VAR9->VAR14;
    if ((VAR12 = FUN4(&VAR3->VAR15, VAR3->VAR14, sizeof(*VAR3->VAR15))) < 0)
    {
        VAR3->VAR14 = 0;
        return VAR12;
    }
    else
        memcpy(VAR3->VAR15, VAR9->VAR15, VAR9->VAR14 * sizeof(*VAR3->VAR15));
    FUN5(VAR9);
    return 0;
}