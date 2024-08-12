static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    FUN2(VAR4);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        if (VAR4->VAR8[VAR6])
            FUN3(VAR4, VAR4->VAR8[VAR6]);
    return 0;
}