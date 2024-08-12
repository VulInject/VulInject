static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < 4; VAR6++)
    {
        FUN2(&VAR4->VAR7[VAR6].VAR8);
        FUN2(&VAR4->VAR7[VAR6].VAR9);
    }
    VAR4->VAR10 = 0;
    VAR4->VAR11 = 0;
}