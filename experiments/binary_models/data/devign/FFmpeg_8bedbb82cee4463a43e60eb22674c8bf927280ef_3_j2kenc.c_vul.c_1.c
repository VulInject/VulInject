static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    VAR8 *VAR9;
    for (VAR3 = 0; VAR3 < VAR2->VAR10 * VAR2->VAR11; VAR3++)
    {
        VAR12 *VAR13 = VAR2->VAR13 + VAR3;
        if (VAR2->VAR14)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
            {
                VAR16 *VAR17 = VAR13->VAR17 + VAR4;
                int *VAR18 = VAR17->VAR19;
                VAR9 = VAR2->VAR20.VAR19[VAR4] + VAR17->VAR21[1][0] * VAR2->VAR20.VAR22[VAR4] + VAR17->VAR21[0][0];
                for (VAR6 = VAR17->VAR21[1][0]; VAR6 < VAR17->VAR21[1][1]; VAR6++)
                {
                    VAR8 *VAR23 = VAR9;
                    for (VAR7 = VAR17->VAR21[0][0]; VAR7 < VAR17->VAR21[0][1]; VAR7++)
                        *VAR18++ = *VAR23++ - (1 << 7);
                    VAR9 += VAR2->VAR20.VAR22[VAR4];
                }
            }
        }
        else
        {
            VAR9 = VAR2->VAR20.VAR19[0] + VAR13->VAR17[0].VAR21[1][0] * VAR2->VAR20.VAR22[0] + VAR13->VAR17[0].VAR21[0][0] * VAR2->VAR15;
            VAR5 = 0;
            for (VAR6 = VAR13->VAR17[0].VAR21[1][0]; VAR6 < VAR13->VAR17[0].VAR21[1][1]; VAR6++)
            {
                VAR8 *VAR23 = VAR9;
                for (VAR7 = VAR13->VAR17[0].VAR21[0][0]; VAR7 < VAR13->VAR17[0].VAR21[0][1]; VAR7++, VAR5++)
                {
                    for (VAR4 = 0; VAR4 < VAR2->VAR15; VAR4++)
                    {
                        VAR13->VAR17[VAR4].VAR19[VAR5] = *VAR23++ - (1 << 7);
                    }
                }
                VAR9 += VAR2->VAR20.VAR22[0];
            }
        }
    }
}