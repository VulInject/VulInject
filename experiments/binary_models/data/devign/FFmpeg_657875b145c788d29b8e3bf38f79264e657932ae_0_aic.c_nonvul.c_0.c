static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    const int VAR12 = VAR13[VAR5];
    const VAR14 *VAR15 = VAR16[VAR5];
    int VAR17, VAR18;
    unsigned VAR19;
    VAR7 = FUN2(VAR2);
    VAR8 = FUN2(VAR2);
    VAR9 = FUN3(VAR2, 3);
    if (VAR7)
    {
        VAR10 = FUN2(VAR2);
        VAR11 = FUN3(VAR2, 3);
        for (VAR17 = 0; VAR17 < VAR6; VAR17++)
        {
            VAR18 = -1;
            do
            {
                FUN4(VAR19, VAR10, VAR11);
                if (VAR19 >= 0x10000)
                    return VAR20;
                VAR18 += VAR19 + 1;
                if (VAR18 >= VAR12)
                    break;
                FUN4(VAR19, VAR8, VAR9);
                VAR19++;
                if (VAR19 >= 0x10000)
                    return VAR20;
                VAR4[VAR15[VAR18]] = VAR19;
            } while (VAR18 < VAR12 - 1);
            VAR4 += VAR12;
        }
    }
    else
    {
        for (VAR17 = 0; VAR17 < VAR6; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR12; VAR18++)
            {
                FUN4(VAR19, VAR8, VAR9);
                if (VAR19 >= 0x10000)
                    return VAR20;
                VAR4[VAR15[VAR18]] = VAR19;
            }
            VAR4 += VAR12;
        }
    }
    return 0;
}