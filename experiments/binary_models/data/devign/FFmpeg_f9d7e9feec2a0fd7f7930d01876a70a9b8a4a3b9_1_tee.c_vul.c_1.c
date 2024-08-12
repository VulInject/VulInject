static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6;
    int VAR7 = 0, VAR8;
    unsigned VAR9;
    for (VAR9 = 0; VAR9 < VAR4->VAR10; VAR9++)
    {
        VAR6 = VAR4->VAR11[VAR9].VAR2;
        if ((VAR8 = FUN2(VAR6)) < 0)
            if (!VAR7)
                VAR7 = VAR8;
        if (!(VAR6->VAR12->VAR13 & VAR14))
            FUN3(VAR6, &VAR6->VAR15);
    }
    FUN4(VAR2);
    return VAR7;
}