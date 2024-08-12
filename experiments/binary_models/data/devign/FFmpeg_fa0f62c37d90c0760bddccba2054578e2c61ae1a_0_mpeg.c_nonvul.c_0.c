static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++)
    {
        VAR4 = VAR2->VAR7[VAR5]->VAR8;
        if (VAR4->VAR9 > 0)
        {
            FUN2(VAR2, VAR5);
        }
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++)
        FUN3(&VAR2->VAR7[VAR5]->VAR8);
    return 0;
}