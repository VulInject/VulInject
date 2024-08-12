void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR4; VAR3++)
    {
        VAR5 *VAR6 = &VAR2->VAR7[VAR3];
        VAR6->VAR8 = 0;
    }
    for (VAR3 = 0; VAR3 < VAR9; VAR3++)
    {
        VAR5 *VAR6 = &VAR2->VAR10[VAR3];
        VAR6->VAR8 = 0;
    }
    FUN2(VAR2, 1);
}