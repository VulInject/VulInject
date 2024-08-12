static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    VAR7 *VAR8 = &VAR2->VAR9[0].VAR8;
    if (!VAR2->VAR10)
        return;
    for (VAR3 = 0; VAR3 < VAR8->VAR11; VAR3 += VAR8->VAR12[VAR3])
    {
        for (VAR4 = 0; VAR4 < VAR8->VAR12[VAR3]; VAR4++)
        {
            int VAR13 = (VAR3 + VAR4) * 128;
            for (VAR5 = 0; VAR5 < VAR8->VAR14; VAR5++)
            {
                if (!VAR2->VAR15[VAR3 * 16 + VAR5])
                {
                    VAR13 += VAR8->VAR16[VAR5];
                    continue;
                }
                for (VAR6 = 0; VAR6 < VAR8->VAR16[VAR5]; VAR6++)
                {
                    float VAR17 = (VAR2->VAR9[0].VAR18[VAR13 + VAR6] + VAR2->VAR9[1].VAR18[VAR13 + VAR6]) * 0.5f;
                    float VAR19 = VAR17 - VAR2->VAR9[1].VAR18[VAR13 + VAR6];
                    VAR2->VAR9[0].VAR18[VAR13 + VAR6] = VAR17;
                    VAR2->VAR9[1].VAR18[VAR13 + VAR6] = VAR19;
                }
                VAR13 += VAR8->VAR16[VAR5];
            }
        }
    }
}