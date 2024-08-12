static void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    int VAR4;
    if (!VAR3)
    {
        VAR3 = 1;
        for (VAR4 = 0; VAR4 < 4; VAR4++)
        {
            FUN2(&VAR5[VAR4], VAR6, 7, &VAR7[VAR4][0][1], 2, 1, &VAR7[VAR4][0][0], 2, 1);
        }
    }
}