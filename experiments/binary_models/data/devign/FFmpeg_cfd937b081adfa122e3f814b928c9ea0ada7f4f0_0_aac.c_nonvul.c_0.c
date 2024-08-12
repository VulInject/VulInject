static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR6->VAR10[0].VAR9;
    const VAR11 *VAR12 = VAR9->VAR13;
    float *VAR14 = VAR4->VAR15;
    const float *VAR16 = VAR6->VAR10[0].VAR15;
    int VAR17, VAR18, VAR19, VAR20, VAR21 = 0;
    if (VAR2->VAR22.VAR23 == VAR24)
    {
        FUN2(VAR2->VAR25, VAR26, "");
        return;
    }
    for (VAR17 = 0; VAR17 < VAR9->VAR27; VAR17++)
    {
        for (VAR18 = 0; VAR18 < VAR9->VAR28; VAR18++, VAR21++)
        {
            if (VAR6->VAR10[0].VAR29[VAR21] != VAR30)
            {
                const float VAR31 = VAR6->VAR32.VAR31[VAR7][VAR21];
                for (VAR19 = 0; VAR19 < VAR9->VAR33[VAR17]; VAR19++)
                {
                    for (VAR20 = VAR12[VAR18]; VAR20 < VAR12[VAR18 + 1]; VAR20++)
                    {
                        VAR14[VAR19 * 128 + VAR20] += VAR31 * VAR16[VAR19 * 128 + VAR20];
                    }
                }
            }
        }
        VAR14 += VAR9->VAR33[VAR17] * 128;
        VAR16 += VAR9->VAR33[VAR17] * 128;
    }
}