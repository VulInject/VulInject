static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10, VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    unsigned char VAR15, VAR16;
    unsigned short VAR17;
    int VAR18;
    unsigned char VAR19[8];
    unsigned char *VAR20 = VAR2->VAR21.VAR22[0];
    unsigned char *VAR23 = VAR2->VAR24.VAR22[0];
    int VAR25 = VAR2->VAR21.VAR26[0];
    VAR14 = 0;
    VAR18 = 0;
    VAR10 = VAR2->VAR27->VAR28 / 4;
    VAR11 = VAR2->VAR27->VAR29 / 4;
    VAR5 = VAR10 * VAR11;
    VAR12 = 4;
    VAR13 = VAR25 + 4;
    for (VAR9 = VAR11; VAR9 > 0; VAR9--)
    {
        VAR3 = ((VAR9 * 4) - 1) * VAR25;
        for (VAR8 = VAR10; VAR8 > 0; VAR8--)
        {
            if (VAR18)
            {
                FUN2();
                VAR3 += VAR12;
                VAR18--;
                VAR5--;
                continue;
            }
            VAR4 = VAR3;
            FUN3(2);
            VAR15 = VAR2->VAR30[VAR14++];
            VAR16 = VAR2->VAR30[VAR14++];
            if ((VAR15 == 0) && (VAR16 == 0) && (VAR5 == 0))
                return;
            else if ((VAR16 & 0xFC) == 0x84)
            {
                VAR18 = ((VAR16 - 0x84) << 8) + VAR15 - 1;
                FUN2();
            }
            else if (VAR16 < 0x80)
            {
                VAR17 = (VAR16 << 8) | VAR15;
                FUN3(2);
                VAR19[0] = VAR2->VAR30[VAR14++];
                VAR19[1] = VAR2->VAR30[VAR14++];
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    for (VAR6 = 0; VAR6 < 4; VAR6++, VAR17 >>= 1)
                        VAR20[VAR4++] = VAR19[(VAR17 & 0x1) ^ 1];
                    VAR4 -= VAR13;
                }
            }
            else if (VAR16 >= 0x90)
            {
                VAR17 = (VAR16 << 8) | VAR15;
                FUN3(8);
                memcpy(VAR19, &VAR2->VAR30[VAR14], 8);
                VAR14 += 8;
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    for (VAR6 = 0; VAR6 < 4; VAR6++, VAR17 >>= 1)
                        VAR20[VAR4++] = VAR19[((VAR7 & 0x2) << 1) + (VAR6 & 0x2) + ((VAR17 & 0x1) ^ 1)];
                    VAR4 -= VAR13;
                }
            }
            else
            {
                VAR19[0] = VAR15;
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                {
                    for (VAR6 = 0; VAR6 < 4; VAR6++)
                        VAR20[VAR4++] = VAR19[0];
                    VAR4 -= VAR13;
                }
            }
            VAR3 += VAR12;
            VAR5--;
        }
    }
    if (VAR2->VAR27->VAR31 == VAR32)
    {
        memcpy(VAR2->VAR21.VAR22[1], VAR2->VAR27->VAR33->VAR34, VAR35);
        if (VAR2->VAR27->VAR33->VAR36)
        {
            VAR2->VAR21.VAR37 = 1;
            VAR2->VAR27->VAR33->VAR36 = 0;
        }
    }
}