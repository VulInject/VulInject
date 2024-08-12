static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    int VAR6;
    do
    {
        VAR6 = 0;
        for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
        {
            VAR8 *VAR9 = VAR2->VAR10[VAR3];
            if (VAR9->VAR11)
            {
                for (VAR4 = 0; VAR4 < VAR9->VAR11; VAR4++)
                {
                    if (VAR9->VAR12[VAR4]->VAR13 && VAR9->VAR12[VAR4]->VAR13->VAR14 == 1)
                    {
                        if ((VAR5 = FUN2(VAR9->VAR12[VAR4], NULL)) < 0)
                            return VAR5;
                        VAR6 = 1;
                    }
                }
            }
            if (VAR9->VAR15)
            {
                for (VAR4 = 0; VAR4 < VAR9->VAR15; VAR4++)
                {
                    if (VAR9->VAR16[VAR4]->VAR13 && VAR9->VAR16[VAR4]->VAR13->VAR14 == 1)
                    {
                        if ((VAR5 = FUN2(VAR9->VAR16[VAR4], NULL)) < 0)
                            return VAR5;
                        VAR6 = 1;
                    }
                }
            }
            if (VAR9->VAR11 && VAR9->VAR15 && VAR9->VAR12[0]->VAR17 >= 0)
            {
                for (VAR4 = 0; VAR4 < VAR9->VAR15; VAR4++)
                {
                    if (VAR9->VAR16[VAR4]->VAR17 < 0)
                    {
                        if ((VAR5 = FUN2(VAR9->VAR16[VAR4], VAR9->VAR12[0])) < 0)
                            return VAR5;
                        VAR6 = 1;
                    }
                }
            }
        }
    } while (VAR6);
    for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
    {
        VAR8 *VAR9 = VAR2->VAR10[VAR3];
        for (VAR4 = 0; VAR4 < VAR9->VAR11; VAR4++)
            if ((VAR5 = FUN2(VAR9->VAR12[VAR4], NULL)) < 0)
                return VAR5;
        for (VAR4 = 0; VAR4 < VAR9->VAR15; VAR4++)
            if ((VAR5 = FUN2(VAR9->VAR16[VAR4], NULL)) < 0)
                return VAR5;
    }
    return 0;
}