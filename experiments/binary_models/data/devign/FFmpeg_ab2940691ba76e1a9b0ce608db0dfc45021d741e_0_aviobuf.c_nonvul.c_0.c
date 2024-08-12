int FUN1(VAR1 *VAR2, int VAR3, char *VAR4, int VAR5)
{
    int VAR6;
    if (VAR5 <= 0)
        return FUN2(VAR7);
    VAR5 = FUN3(VAR5 - 1, VAR3);
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
        if (!(VAR4[VAR6] = FUN4(VAR2)))
            return VAR6 + 1;
    VAR4[VAR6] = 0;
    for (; VAR6 < VAR3; VAR6++)
        if (!FUN4(VAR2))
            return VAR6 + 1;
    return VAR3;
}