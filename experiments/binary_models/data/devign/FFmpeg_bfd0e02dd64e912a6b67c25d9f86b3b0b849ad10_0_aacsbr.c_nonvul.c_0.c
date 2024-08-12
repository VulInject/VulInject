static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6;
    if (VAR3 == VAR7 && VAR2->VAR8)
    {
        float VAR9 = VAR2->VAR10[0].VAR11 ? 1.0f : 0.5f;
        float VAR12 = VAR2->VAR10[0].VAR11 ? 12.0f : 24.0f;
        for (VAR5 = 1; VAR5 <= VAR2->VAR10[0].VAR13; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR14[VAR2->VAR10[0].VAR15[VAR5]]; VAR4++)
            {
                float VAR16 = FUN2(VAR2->VAR10[0].VAR17[VAR5][VAR4] * VAR9 + 7.0f);
                float VAR18 = FUN2((VAR12 - VAR2->VAR10[1].VAR17[VAR5][VAR4]) * VAR9);
                float VAR19;
                if (VAR16 > 1E20)
                {
                    FUN3(NULL, VAR20, "");
                    VAR16 = 1;
                }
                VAR19 = VAR16 / (1.0f + VAR18);
                VAR2->VAR10[0].VAR17[VAR5][VAR4] = VAR19;
                VAR2->VAR10[1].VAR17[VAR5][VAR4] = VAR19 * VAR18;
            }
        }
        for (VAR5 = 1; VAR5 <= VAR2->VAR10[0].VAR21; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR22; VAR4++)
            {
                float VAR16 = FUN2(VAR23 - VAR2->VAR10[0].VAR24[VAR5][VAR4] + 1);
                float VAR18 = FUN2(12 - VAR2->VAR10[1].VAR24[VAR5][VAR4]);
                float VAR19;
                if (VAR16 > 1E20)
                {
                    FUN3(NULL, VAR20, "");
                    VAR16 = 1;
                }
                VAR19 = VAR16 / (1.0f + VAR18);
                VAR2->VAR10[0].VAR25[VAR5][VAR4] = VAR19;
                VAR2->VAR10[1].VAR25[VAR5][VAR4] = VAR19 * VAR18;
            }
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < (VAR3 == VAR7) + 1; VAR6++)
        {
            float VAR9 = VAR2->VAR10[VAR6].VAR11 ? 1.0f : 0.5f;
            for (VAR5 = 1; VAR5 <= VAR2->VAR10[VAR6].VAR13; VAR5++)
                for (VAR4 = 0; VAR4 < VAR2->VAR14[VAR2->VAR10[VAR6].VAR15[VAR5]]; VAR4++)
                {
                    VAR2->VAR10[VAR6].VAR17[VAR5][VAR4] = FUN2(VAR9 * VAR2->VAR10[VAR6].VAR17[VAR5][VAR4] + 6.0f);
                    if (VAR2->VAR10[VAR6].VAR17[VAR5][VAR4] > 1E20)
                    {
                        FUN3(NULL, VAR20, "");
                        VAR2->VAR10[VAR6].VAR17[VAR5][VAR4] = 1;
                    }
                }
            for (VAR5 = 1; VAR5 <= VAR2->VAR10[VAR6].VAR21; VAR5++)
                for (VAR4 = 0; VAR4 < VAR2->VAR22; VAR4++)
                    VAR2->VAR10[VAR6].VAR25[VAR5][VAR4] = FUN2(VAR23 - VAR2->VAR10[VAR6].VAR24[VAR5][VAR4]);
        }
    }
}