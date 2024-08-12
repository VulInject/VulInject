static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    for (VAR4 = 0; VAR4 < VAR2->VAR6; VAR4++)
    {
        for (VAR3 = 0; VAR3 < VAR7; VAR3++)
        {
            VAR8 *VAR9 = &VAR2->VAR10[VAR3];
            VAR11 *VAR12 = VAR9->VAR12[VAR4];
            VAR13 *VAR14 = VAR9->VAR15[VAR4];
            int VAR16 = VAR9->VAR16[VAR4];
            for (VAR5 = 0; VAR5 < VAR17; VAR5++)
            {
                int VAR18;
                int VAR19 = FUN2(FUN3(VAR14[VAR5]));
                if (VAR19 == 0)
                    VAR18 = 24;
                else
                {
                    VAR18 = 23 - FUN4(VAR19) + VAR16;
                    if (VAR18 >= 24)
                    {
                        VAR18 = 24;
                        VAR14[VAR5] = 0;
                    }
                }
                VAR12[VAR5] = VAR18;
            }
        }
    }
}