static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    uint32_t VAR6;
    VAR3 *VAR7[63];
    VAR8 *VAR9;
    const VAR8 *VAR10;
    int VAR11[6];
    int VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    unsigned VAR18, VAR19, VAR20, VAR21, VAR22;
    uint32_t VAR23, VAR24, VAR25, VAR26;
    VAR7[0] = VAR4;
    for (VAR12 = 0, VAR14 = 1, VAR15 = 1, VAR22 = 5; VAR12 < VAR15; VAR12++)
    {
        FUN2();
        VAR9 = (VAR8 *)VAR7[VAR12];
        VAR20 = 1 << ((4 + VAR22) / 2);
        VAR21 = 1 << ((3 + VAR22) / 2);
        VAR17 = FUN3(VAR2, VAR27[VAR22].VAR28, 3, 3) - 1;
        if (VAR17 == -1)
        {
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                memset(&VAR9[VAR19 * (VAR5 / 4)], 0, VAR20);
            continue;
        }
        if ((VAR17 > 0 && VAR22 >= 4) || VAR17 < 0)
        {
            FUN4(NULL, "", VAR17, VAR22);
            return VAR29;
        }
        VAR16 = FUN3(VAR2, VAR30.VAR28, 8, 3);
        if (VAR17 == 0)
        {
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                memset(&VAR9[VAR19 * (VAR5 / 4)], VAR16, VAR20);
        }
        else
        {
            FUN5(VAR31);
            for (VAR19 = 0; VAR19 < VAR21; VAR19++)
            {
                for (VAR18 = 0; VAR18 < VAR20 / 4; VAR18++, VAR10++)
                {
                    VAR23 = VAR26;
                    VAR24 = VAR26;
                    FUN6()
                    VAR9[VAR18] = VAR23 << 8 | VAR24;
                }
                VAR9 += VAR5 / 4;
            }
        }
    }
    return 0;
}