static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = &VAR6->VAR10[0].VAR9;
    const VAR11 *VAR12 = VAR9->VAR13;
    int *VAR14 = VAR4->VAR15;
    const int *VAR16 = VAR6->VAR10[0].VAR15;
    int VAR17, VAR18, VAR19, VAR20, VAR21 = 0;
    if (VAR2->VAR22[1].VAR23.VAR24 == VAR25)
    {
        FUN2(VAR2->VAR26, VAR27, "");
        return;
    }
    for (VAR17 = 0; VAR17 < VAR9->VAR28; VAR17++)
    {
        for (VAR18 = 0; VAR18 < VAR9->VAR29; VAR18++, VAR21++)
        {
            if (VAR6->VAR10[0].VAR30[VAR21] != VAR31)
            {
                const int VAR32 = VAR6->VAR33.VAR32[VAR7][VAR21];
                int VAR34, VAR35, VAR36, VAR37;
                if (VAR32 < 0)
                {
                    VAR36 = -VAR38[-VAR32 & 7];
                    VAR34 = (-VAR32 - 1024) >> 3;
                }
                else
                {
                    VAR36 = VAR38[VAR32 & 7];
                    VAR34 = (VAR32 - 1024) >> 3;
                }
                if (VAR34 < -31)
                {
                }
                else if (VAR34 < 0)
                {
                    VAR34 = -VAR34;
                    VAR35 = 1 << (VAR34 - 1);
                    for (VAR19 = 0; VAR19 < VAR9->VAR39[VAR17]; VAR19++)
                    {
                        for (VAR20 = VAR12[VAR18]; VAR20 < VAR12[VAR18 + 1]; VAR20++)
                        {
                            VAR37 = (int)(((VAR40)VAR16[VAR19 * 128 + VAR20] * VAR36 + (VAR40)0x1000000000) >> 37);
                            VAR14[VAR19 * 128 + VAR20] += (VAR37 + VAR35) >> VAR34;
                        }
                    }
                }
                else
                {
                    for (VAR19 = 0; VAR19 < VAR9->VAR39[VAR17]; VAR19++)
                    {
                        for (VAR20 = VAR12[VAR18]; VAR20 < VAR12[VAR18 + 1]; VAR20++)
                        {
                            VAR37 = (int)(((VAR40)VAR16[VAR19 * 128 + VAR20] * VAR36 + (VAR40)0x1000000000) >> 37);
                            VAR14[VAR19 * 128 + VAR20] += VAR37 << VAR34;
                        }
                    }
                }
            }
        }
        VAR14 += VAR9->VAR39[VAR17] * 128;
        VAR16 += VAR9->VAR39[VAR17] * 128;
    }
}