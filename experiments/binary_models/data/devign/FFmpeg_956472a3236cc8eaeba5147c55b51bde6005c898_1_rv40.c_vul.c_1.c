static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15;
    int VAR16;
    VAR5 *VAR17;
    for (VAR9 = 0; VAR9 < 4; VAR9++, VAR6 += VAR2->VAR18)
    {
        if (!VAR9 && VAR8->VAR19)
        {
            VAR16 = FUN2(VAR4, VAR20.VAR21, VAR22, 1);
            VAR6[0] = (VAR16 >> 2) & 2;
            VAR6[1] = (VAR16 >> 1) & 2;
            VAR6[2] = VAR16 & 2;
            VAR6[3] = (VAR16 << 1) & 2;
            continue;
        }
        VAR17 = VAR6;
        for (VAR10 = 0; VAR10 < 4; VAR10++)
        {
            VAR13 = VAR17[-VAR2->VAR18 + 1];
            VAR14 = VAR17[-VAR2->VAR18];
            VAR15 = VAR17[-1];
            VAR16 = VAR13 + (VAR14 << 4) + (VAR15 << 8);
            for (VAR11 = 0; VAR11 < VAR23; VAR11++)
                if (VAR16 == VAR24[VAR11])
                    break;
            if (VAR10 < 3 && VAR11 < VAR23)
            {
                VAR12 = FUN2(VAR4, VAR25[VAR11].VAR21, VAR26, 2);
                *VAR17++ = VAR12 / 9;
                *VAR17++ = VAR12 % 9;
                VAR10++;
            }
            else
            {
                if (VAR14 != -1 && VAR15 != -1)
                    VAR12 = FUN2(VAR4, VAR27[VAR14 + VAR15 * 10].VAR21, VAR28, 1);
                else
                {
                    VAR12 = 0;
                    switch (VAR15)
                    {
                    case -1:
                        if (VAR14 < 2)
                            VAR12 = FUN3(VAR4) ^ 1;
                        break;
                    case 0:
                    case 2:
                        VAR12 = (FUN3(VAR4) ^ 1) << 1;
                        break;
                    }
                }
                *VAR17++ = VAR12;
            }
        }
    }
    return 0;
}