static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const int VAR11 = VAR12 + (VAR6->VAR13 * VAR2->VAR14 * (VAR2->VAR15 + 4)) / 8;
    int VAR16, VAR17, VAR14;
    VAR18 *VAR19;
    PutBitContext VAR20;
    if ((VAR16 = FUN2(VAR2, VAR4, VAR11)) < 0)
        return VAR16;
    VAR19 = VAR4->VAR21;
    FUN3(&VAR20, VAR19, VAR11 * 8);
    FUN4(&VAR20, 16, VAR11 - VAR12);
    FUN4(&VAR20, 2, (VAR2->VAR14 - 2) >> 1);
    FUN4(&VAR20, 8, 0);
    FUN4(&VAR20, 2, (VAR2->VAR15 - 16) / 4);
    FUN4(&VAR20, 4, 0);
    FUN5(&VAR20);
    VAR19 += VAR12;
    if (VAR2->VAR15 == 24)
    {
        const VAR22 *VAR23 = (VAR22 *)VAR6->VAR21[0];
        for (VAR17 = 0; VAR17 < VAR6->VAR13; VAR17++)
        {
            uint8_t VAR24 = VAR9->VAR25 == 0 ? 0x10 : 0;
            for (VAR14 = 0; VAR14 < VAR2->VAR14; VAR14 += 2)
            {
                VAR19[0] = VAR26[(VAR23[0] & 0x0000FF00) >> 8];
                VAR19[1] = VAR26[(VAR23[0] & 0x00FF0000) >> 16];
                VAR19[2] = VAR26[(VAR23[0] & 0xFF000000) >> 24];
                VAR19[3] = VAR26[(VAR23[1] & 0x00000F00) >> 4] | VAR24;
                VAR19[4] = VAR26[(VAR23[1] & 0x000FF000) >> 12];
                VAR19[5] = VAR26[(VAR23[1] & 0x0FF00000) >> 20];
                VAR19[6] = VAR26[(VAR23[1] & 0xF0000000) >> 28];
                VAR19 += 7;
                VAR23 += 2;
            }
            VAR9->VAR25++;
            if (VAR9->VAR25 >= 192)
                VAR9->VAR25 = 0;
        }
    }
    else if (VAR2->VAR15 == 20)
    {
        const VAR22 *VAR23 = (VAR22 *)VAR6->VAR21[0];
        for (VAR17 = 0; VAR17 < VAR6->VAR13; VAR17++)
        {
            uint8_t VAR24 = VAR9->VAR25 == 0 ? 0x80 : 0;
            for (VAR14 = 0; VAR14 < VAR2->VAR14; VAR14 += 2)
            {
                VAR19[0] = VAR26[(VAR23[0] & 0x000FF000) >> 12];
                VAR19[1] = VAR26[(VAR23[0] & 0x0FF00000) >> 20];
                VAR19[2] = VAR26[((VAR23[0] & 0xF0000000) >> 28) | VAR24];
                VAR19[3] = VAR26[(VAR23[1] & 0x000FF000) >> 12];
                VAR19[4] = VAR26[(VAR23[1] & 0x0FF00000) >> 20];
                VAR19[5] = VAR26[(VAR23[1] & 0xF0000000) >> 28];
                VAR19 += 6;
                VAR23 += 2;
            }
            VAR9->VAR25++;
            if (VAR9->VAR25 >= 192)
                VAR9->VAR25 = 0;
        }
    }
    else if (VAR2->VAR15 == 16)
    {
        const VAR27 *VAR23 = (VAR27 *)VAR6->VAR21[0];
        for (VAR17 = 0; VAR17 < VAR6->VAR13; VAR17++)
        {
            uint8_t VAR24 = VAR9->VAR25 == 0 ? 0x10 : 0;
            for (VAR14 = 0; VAR14 < VAR2->VAR14; VAR14 += 2)
            {
                VAR19[0] = VAR26[VAR23[0] & 0xFF];
                VAR19[1] = VAR26[(VAR23[0] & 0xFF00) >> 8];
                VAR19[2] = VAR26[(VAR23[1] & 0x0F) << 4] | VAR24;
                VAR19[3] = VAR26[(VAR23[1] & 0x0FF0) >> 4];
                VAR19[4] = VAR26[(VAR23[1] & 0xF000) >> 12];
                VAR19 += 5;
                VAR23 += 2;
            }
            VAR9->VAR25++;
            if (VAR9->VAR25 >= 192)
                VAR9->VAR25 = 0;
        }
    }
    *VAR7 = 1;
    return 0;
}