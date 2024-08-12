static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10, VAR11;
    for (VAR8 = 0; VAR8 < VAR3; VAR8++)
    {
        VAR12 *VAR13 = &VAR2->VAR8[VAR8].VAR13;
        VAR9 = 0;
        VAR10 = 0;
        VAR2->VAR8[VAR8].VAR14.VAR15 = 0;
        for (VAR5 = 0; VAR5 < VAR13->VAR16 * 16; VAR5 += 16)
        {
            for (VAR7 = 0; VAR7 < VAR13->VAR17; VAR7++)
            {
                if (VAR2->VAR18 && !VAR8 && VAR2->VAR19[VAR5 + VAR7])
                {
                    for (VAR4 = 0; VAR4 < VAR13->VAR20[VAR7]; VAR4++)
                    {
                        VAR2->VAR8[0].VAR21[VAR9 + VAR4] = (VAR2->VAR8[0].VAR21[VAR9 + VAR4] + VAR2->VAR8[1].VAR21[VAR9 + VAR4]) / 2.0;
                        VAR2->VAR8[1].VAR21[VAR9 + VAR4] = VAR2->VAR8[0].VAR21[VAR9 + VAR4] - VAR2->VAR8[1].VAR21[VAR9 + VAR4];
                    }
                }
                VAR9 += VAR13->VAR20[VAR7];
            }
            for (VAR11 = VAR13->VAR17; VAR11 > 0 && VAR2->VAR8[VAR8].VAR22[VAR5 + VAR11 - 1]; VAR11--)
                ;
            VAR10 = FUN2(VAR10, VAR11);
        }
        VAR13->VAR23 = VAR10;
        for (VAR5 = 0; VAR5 < VAR13->VAR16; VAR5 += VAR13->VAR24[VAR5])
        {
            for (VAR7 = 0; VAR7 < VAR13->VAR23; VAR7++)
            {
                VAR4 = 1;
                for (VAR6 = VAR5; VAR6 < VAR5 + VAR13->VAR24[VAR5]; VAR6++)
                {
                    if (!VAR2->VAR8[VAR8].VAR22[VAR6 * 16 + VAR7])
                    {
                        VAR4 = 0;
                        break;
                    }
                }
                VAR2->VAR8[VAR8].VAR22[VAR5 * 16 + VAR7] = VAR4;
            }
        }
    }
    if (VAR3 > 1 && VAR2->VAR18)
    {
        VAR12 *VAR25 = &VAR2->VAR8[0].VAR13;
        VAR12 *VAR26 = &VAR2->VAR8[1].VAR13;
        int VAR27 = 0;
        VAR25->VAR23 = FUN2(VAR25->VAR23, VAR26->VAR23);
        VAR26->VAR23 = VAR25->VAR23;
        for (VAR5 = 0; VAR5 < VAR25->VAR16 * 16; VAR5 += 16)
            for (VAR4 = 0; VAR4 < VAR25->VAR23; VAR4++)
                if (VAR2->VAR19[VAR5 + VAR4])
                    VAR27++;
        if (VAR27 == 0 || VAR25->VAR23 == 0)
            VAR2->VAR28 = 0;
        else
            VAR2->VAR28 = VAR27 < VAR25->VAR23 * VAR25->VAR16 ? 1 : 2;
    }
}