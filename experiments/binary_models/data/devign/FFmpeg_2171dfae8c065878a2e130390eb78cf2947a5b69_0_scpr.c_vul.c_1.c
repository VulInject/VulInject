static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, unsigned *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    unsigned VAR11 = VAR4->VAR12;
    unsigned VAR13, VAR14 = 0, VAR15 = 0, VAR16 = 0;
    int VAR17, VAR18, VAR19, VAR20, VAR21;
    if ((VAR19 = VAR2->FUN2(VAR10, VAR11, &VAR13)) < 0)
        return VAR19;
    while (VAR14 < 16)
    {
        VAR16 = VAR4->VAR22[VAR14];
        if (VAR13 >= VAR15 + VAR16)
            VAR15 += VAR16;
        else
            break;
        VAR14++;
        VAR20 = VAR14 * 16;
        VAR21 = 0;
        while (VAR20 < 256)
        {
            VAR21 = VAR4->VAR23[VAR20];
            if (VAR13 >= VAR15 + VAR21)
                VAR15 += VAR21;
            else
                break;
            VAR20++;
            if ((VAR19 = VAR2->FUN3(VAR8, VAR10, VAR15, VAR21, VAR11)) < 0)
                return VAR19;
            VAR4->VAR23[VAR20] = VAR21 + VAR5;
            VAR4->VAR22[VAR14] = VAR16 + VAR5;
            VAR11 += VAR5;
            if (VAR11 > VAR24)
            {
                VAR11 = 0;
                for (VAR17 = 0; VAR17 < 256; VAR17++)
                {
                    unsigned VAR25 = (VAR4->VAR23[VAR17] >> 1) + 1;
                    VAR4->VAR23[VAR17] = VAR25;
                    VAR11 += VAR25;
                    for (VAR17 = 0; VAR17 < 16; VAR17++)
                    {
                        unsigned VAR26 = 0;
                        unsigned VAR27 = VAR17 << 4;
                        for (VAR18 = 0; VAR18 < 16; VAR18++)
                            VAR26 += VAR4->VAR23[VAR27 + VAR18];
                        VAR4->VAR22[VAR17] = VAR26;
                        VAR4->VAR12 = VAR11;
                        *VAR6 = VAR20 & VAR2->VAR28;
                        return 0;