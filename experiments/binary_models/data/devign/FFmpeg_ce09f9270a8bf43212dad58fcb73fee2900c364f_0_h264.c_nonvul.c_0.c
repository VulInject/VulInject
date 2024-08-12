static void FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6, VAR7;
    int VAR8 = VAR4->VAR9->VAR10;
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        VAR2->VAR11[VAR7] = 0;
        VAR2->VAR12[VAR7] = 0;
    }
    if (VAR2->VAR13[0] == 1 && VAR2->VAR13[1] == 1 && VAR2->VAR14[0][0].VAR10 + VAR2->VAR14[1][0].VAR10 == 2 * VAR8)
    {
        VAR2->VAR15 = 0;
        VAR2->VAR16 = 0;
        return;
    }
    VAR2->VAR15 = 2;
    VAR2->VAR16 = 2;
    VAR2->VAR17 = 5;
    VAR2->VAR18 = 5;
    for (VAR5 = 0; VAR5 < VAR2->VAR13[0]; VAR5++)
    {
        int VAR19 = VAR2->VAR14[0][VAR5].VAR10;
        for (VAR6 = 0; VAR6 < VAR2->VAR13[1]; VAR6++)
        {
            int VAR20 = VAR2->VAR14[1][VAR6].VAR10;
            int VAR21 = FUN2(VAR20 - VAR19, -128, 127);
            if (VAR21)
            {
                int VAR22 = FUN2(VAR8 - VAR19, -128, 127);
                int VAR23 = (16384 + (FUN3(VAR21) >> 1)) / VAR21;
                int VAR24 = FUN2((VAR22 * VAR23 + 32) >> 6, -1024, 1023) >> 2;
                if (VAR24 < -64 || VAR24 > 128)
                    VAR2->VAR25[VAR5][VAR6] = 32;
                else
                    VAR2->VAR25[VAR5][VAR6] = 64 - VAR24;
            }
            else
                VAR2->VAR25[VAR5][VAR6] = 32;
        }
    }
}