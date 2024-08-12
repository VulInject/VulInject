static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        VAR4->VAR13[VAR8] = 0;
        VAR4->VAR14[VAR8] = 0;
    }
    if (VAR5 < 0)
    {
        if (VAR2->VAR15 == VAR16)
        {
            VAR9 = VAR2->VAR17->VAR18;
        }
        else
        {
            VAR9 = VAR2->VAR17->VAR19[VAR2->VAR15 - 1];
        }
        if (VAR4->VAR20[0] == 1 && VAR4->VAR20[1] == 1 && !FUN2(VAR2) && VAR4->VAR21[0][0].VAR18 + VAR4->VAR21[1][0].VAR18 == 2 * VAR9)
        {
            VAR4->VAR22 = 0;
            VAR4->VAR23 = 0;
            return;
        }
        VAR10 = 0;
        VAR11 = VAR4->VAR20[0];
        VAR12 = VAR4->VAR20[1];
    }
    else
    {
        VAR9 = VAR2->VAR17->VAR19[VAR5];
        VAR10 = 16;
        VAR11 = 16 + 2 * VAR4->VAR20[0];
        VAR12 = 16 + 2 * VAR4->VAR20[1];
    }
    VAR4->VAR22 = 2;
    VAR4->VAR23 = 2;
    VAR4->VAR24 = 5;
    VAR4->VAR25 = 5;
    for (VAR6 = VAR10; VAR6 < VAR11; VAR6++)
    {
        int VAR26 = VAR4->VAR21[0][VAR6].VAR18;
        for (VAR7 = VAR10; VAR7 < VAR12; VAR7++)
        {
            int VAR27 = 32;
            if (!VAR4->VAR21[0][VAR6].VAR28->VAR29 && !VAR4->VAR21[1][VAR7].VAR28->VAR29)
            {
                int VAR30 = VAR4->VAR21[1][VAR7].VAR18;
                int VAR31 = FUN3(VAR30 - VAR26);
                if (VAR31)
                {
                    int VAR32 = FUN3(VAR9 - VAR26);
                    int VAR33 = (16384 + (FUN4(VAR31) >> 1)) / VAR31;
                    int VAR34 = (VAR32 * VAR33 + 32) >> 8;
                    if (VAR34 >= -64 && VAR34 <= 128)
                        VAR27 = 64 - VAR34;
                }
            }
            if (VAR5 < 0)
            {
                VAR4->VAR35[VAR6][VAR7][0] = VAR4->VAR35[VAR6][VAR7][1] = VAR27;
            }
            else
            {
                VAR4->VAR35[VAR6][VAR7][VAR5] = VAR27;
            }
        }
    }
}