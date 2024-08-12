static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            if (VAR2->VAR5[VAR5].VAR7[VAR6].VAR8.VAR9 == NULL || VAR2->VAR5[VAR5].VAR7[VAR6].VAR8.VAR9->VAR4 != VAR4)
            {
                continue;
            }
            FUN2(&VAR2->VAR5[VAR5].VAR7[VAR6].VAR8);
        }
    }
}