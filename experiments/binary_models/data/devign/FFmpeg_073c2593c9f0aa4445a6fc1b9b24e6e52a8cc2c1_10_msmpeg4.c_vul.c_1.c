void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    int VAR4;
    FUN2(VAR2);
    if (VAR2->VAR5 >= 4)
    {
        VAR2->VAR6 = -255;
        VAR2->VAR7 = 255;
    }
    if (!VAR3)
    {
        VAR3 = 1;
        FUN3(&VAR8[0]);
        FUN3(&VAR8[1]);
        for (VAR4 = 0; VAR4 < VAR9; VAR4++)
            FUN4(&VAR10[VAR4]);
        for (VAR4 = 0; VAR4 < VAR9; VAR4++)
        {
            int VAR11;
            for (VAR11 = 0; VAR11 <= VAR12; VAR11++)
            {
                int VAR13;
                for (VAR13 = 0; VAR13 <= VAR14; VAR13++)
                {
                    int VAR15;
                    for (VAR15 = 0; VAR15 < 2; VAR15++)
                    {
                        VAR16[VAR4][VAR11][VAR13][VAR15] = FUN5(VAR2, &VAR10[VAR4], VAR15, VAR13, VAR11, 0);
                    }
                }
            }
        }
    }
}