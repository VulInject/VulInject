static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR6;
    for (VAR3 = 0; VAR3 < VAR5->VAR7; VAR3++)
        FUN2(VAR5->VAR8[VAR3]);
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
        FUN3(VAR2->VAR8[VAR3]);
    return 0;
}