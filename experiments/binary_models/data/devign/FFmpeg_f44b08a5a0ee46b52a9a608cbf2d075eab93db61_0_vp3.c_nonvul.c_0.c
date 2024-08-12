static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    int VAR6, VAR7;
    int VAR8;
    int VAR9;
    unsigned char *VAR10;
    int *VAR11 = VAR2->VAR12 + 127;
    int VAR12[256];
    int VAR13;
    for (VAR3 = 63; VAR3 >= 0; VAR3--)
    {
        if (VAR14[VAR3] >= VAR2->VAR15)
            break;
    }
    VAR13 = VAR16[VAR2->VAR15];
    memset(VAR12, 0, 256 * sizeof(int));
    for (VAR3 = 0; VAR3 < VAR13; VAR3++)
    {
        VAR11[-VAR3 - VAR13] = -VAR13 + VAR3;
        VAR11[-VAR3] = -VAR3;
        VAR11[VAR3] = VAR3;
        VAR11[VAR3 + VAR13] = VAR13 - VAR3;
    }
    for (VAR5 = 0; VAR5 < 3; VAR5++)
    {
        if (VAR5 == 0)
        {
            VAR8 = 0;
            VAR6 = VAR2->VAR17;
            VAR7 = VAR2->VAR18;
            VAR9 = VAR2->VAR19.VAR20[0];
            VAR10 = VAR2->VAR19.VAR21[0];
        }
        else if (VAR5 == 1)
        {
            VAR8 = VAR2->VAR22;
            VAR6 = VAR2->VAR17 / 2;
            VAR7 = VAR2->VAR18 / 2;
            VAR9 = VAR2->VAR19.VAR20[1];
            VAR10 = VAR2->VAR19.VAR21[1];
        }
        else
        {
            VAR8 = VAR2->VAR23;
            VAR6 = VAR2->VAR17 / 2;
            VAR7 = VAR2->VAR18 / 2;
            VAR9 = VAR2->VAR19.VAR20[2];
            VAR10 = VAR2->VAR19.VAR21[2];
        }
        for (VAR4 = 0; VAR4 < VAR7; VAR4++)
        {
            for (VAR3 = 0; VAR3 < VAR6; VAR3++)
            {
                START_TIMER if ((VAR3 > 0) && (VAR2->VAR24[VAR8].VAR25 != VAR26)) { FUN2(VAR10 + VAR2->VAR24[VAR8].VAR27 - 7 * VAR9, VAR9, VAR11); }
                if ((VAR4 > 0) && (VAR2->VAR24[VAR8].VAR25 != VAR26))
                {
                    FUN3(VAR10 + VAR2->VAR24[VAR8].VAR27 + VAR9, VAR9, VAR11);
                }
                if ((VAR3 < VAR6 - 1) && (VAR2->VAR24[VAR8].VAR25 != VAR26) && (VAR2->VAR24[VAR8 + 1].VAR25 == VAR26))
                {
                    FUN2(VAR10 + VAR2->VAR24[VAR8 + 1].VAR27 - 7 * VAR9, VAR9, VAR11);
                }
                if ((VAR4 < VAR7 - 1) && (VAR2->VAR24[VAR8].VAR25 != VAR26) && (VAR2->VAR24[VAR8 + VAR6].VAR25 == VAR26))
                {
                    FUN3(VAR10 + VAR2->VAR24[VAR8 + VAR6].VAR27 + VAR9, VAR9, VAR11);
                }
                VAR8++;
                FUN4("")
            }
        }
    }
}