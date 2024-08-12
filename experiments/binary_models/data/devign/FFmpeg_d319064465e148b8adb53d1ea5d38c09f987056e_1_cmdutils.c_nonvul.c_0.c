void FUN1(void)
{
    int VAR1;
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
        FUN2(&VAR3[VAR1]);
    FUN2(&VAR4->VAR5);
    FUN2(&VAR4);
    FUN2(&VAR6);
    for (VAR1 = 0; VAR1 < VAR7; VAR1++)
    {
        FUN2(&VAR8[VAR1]);
        FUN2(&VAR9[VAR1]);
    }
    FUN2(&VAR8);
    FUN2(&VAR9);
}