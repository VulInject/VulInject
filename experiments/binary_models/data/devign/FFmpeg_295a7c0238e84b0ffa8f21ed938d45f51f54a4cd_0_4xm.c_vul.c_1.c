static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    const int VAR10 = VAR2->VAR11->VAR10;
    const int VAR12 = VAR2->VAR11->VAR12;
    VAR13 *VAR14 = (VAR13 *)VAR2->VAR15.VAR16[0];
    const int VAR17 = VAR2->VAR15.VAR18[0] >> 1;
    for (VAR7 = 0; VAR7 < VAR12; VAR7 += 16)
    {
        for (VAR6 = 0; VAR6 < VAR10; VAR6 += 16)
        {
            unsigned int VAR19[4], VAR20;
            memset(VAR19, 0, sizeof(VAR19));
            VAR19[0] = FUN2(&VAR4);
            VAR19[1] = FUN2(&VAR4);
            if (VAR19[0] & 0x8000)
                FUN3(NULL, VAR21, "");
            if (VAR19[1] & 0x8000)
                FUN3(NULL, VAR21, "");
            VAR19[2] = FUN4(VAR19[0], VAR19[1]);
            VAR19[3] = FUN4(VAR19[1], VAR19[0]);
            VAR20 = FUN5(&VAR4);
            for (VAR9 = 0; VAR9 < 16; VAR9++)
            {
                for (VAR8 = 0; VAR8 < 16; VAR8++)
                {
                    int VAR22 = 2 * (VAR8 >> 2) + 8 * (VAR9 >> 2);
                    VAR14[VAR9 * VAR17 + VAR8] = VAR19[(VAR20 >> VAR22) & 3];
                }
            }
            VAR14 += 16;
        }
        VAR14 += 16 * VAR17 - VAR6;
    }
    return 0;
}