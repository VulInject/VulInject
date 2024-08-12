static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13)
{
    const int VAR14 = VAR6->VAR15;
    int VAR16, VAR17;
    VAR7 *VAR18 = 0;
    VAR7 *VAR19;
    if (VAR12 != 0)
        VAR18 = FUN2(VAR4, ((VAR12 - 1) * VAR6->VAR20) + VAR6->VAR21) + VAR6->VAR22;
    for (VAR17 = VAR12; VAR17 < VAR13; VAR17++)
    {
        VAR19 = VAR18;
        VAR18 = FUN2(VAR4, (VAR17 * VAR6->VAR20) + VAR6->VAR21) + VAR6->VAR22;
        for (VAR16 = 0; VAR16 < VAR14; VAR16++)
        {
            if (VAR16)
            {
                if (VAR11)
                {
                    if (VAR17 && VAR16 + 1 < VAR14)
                        VAR18[VAR16] += FUN3(VAR18[VAR16 - 1], VAR19[VAR16], VAR19[VAR16 + 1]);
                    else
                        VAR18[VAR16] += VAR18[VAR16 - 1];
                }
                else
                {
                    if (VAR17)
                        VAR18[VAR16] += FUN3(VAR18[VAR16 - 1], VAR19[VAR16], VAR18[VAR16 - 1] + VAR19[VAR16] - VAR19[VAR16 - 1]);
                    else
                        VAR18[VAR16] += VAR18[VAR16 - 1];
                }
            }
            else
            {
                if (VAR17)
                    VAR18[VAR16] += VAR19[VAR16];
            }
        }
    }
}