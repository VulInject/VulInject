static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
    {
        VAR5 = VAR2->VAR7[VAR3];
        if (VAR5->VAR8 != VAR9)
            return 1;
    }
    if (VAR2->VAR8 != VAR9)
        return 1;
    return 0;
}