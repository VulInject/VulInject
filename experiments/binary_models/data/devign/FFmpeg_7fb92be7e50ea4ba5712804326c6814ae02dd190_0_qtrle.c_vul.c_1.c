static inline void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9;
    int VAR10 = VAR2->VAR11.VAR12[0];
    unsigned char VAR13[16];
    unsigned char *VAR14 = VAR2->VAR11.VAR15[0];
    int VAR16 = VAR2->VAR11.VAR12[0] * VAR2->VAR17->VAR18;
    int VAR19 = (VAR6 == 4) ? 8 : 16;
    while (VAR5--)
    {
        FUN2(2);
        VAR9 = VAR4 + (VAR19 * (VAR2->VAR20[VAR3++] - 1));
        while ((VAR7 = (signed char)VAR2->VAR20[VAR3++]) != -1)
        {
            if (VAR7 == 0)
            {
                FUN2(1);
                VAR9 += (VAR19 * (VAR2->VAR20[VAR3++] - 1));
            }
            else if (VAR7 < 0)
            {
                VAR7 = -VAR7;
                FUN2(4);
                for (VAR8 = VAR19 - 1; VAR8 >= 0; VAR8--)
                {
                    VAR13[VAR19 - 1 - VAR8] = (VAR2->VAR20[VAR3] >> ((VAR8 * VAR6) & 0x07)) & ((1 << VAR6) - 1);
                    VAR3 += ((VAR8 & ((VAR19 >> 2) - 1)) == 0);
                }
                FUN3(VAR7 * VAR19);
                while (VAR7--)
                {
                    for (VAR8 = 0; VAR8 < VAR19; VAR8++)
                        VAR14[VAR9++] = VAR13[VAR8];
                }
            }
            else
            {
                VAR7 *= 4;
                FUN2(VAR7);
                FUN3(VAR7 * (VAR19 >> 2));
                while (VAR7--)
                {
                    if (VAR6 == 4)
                    {
                        VAR14[VAR9++] = ((VAR2->VAR20[VAR3]) >> 4) & 0x0f;
                        VAR14[VAR9++] = (VAR2->VAR20[VAR3++]) & 0x0f;
                    }
                    else
                    {
                        VAR14[VAR9++] = ((VAR2->VAR20[VAR3]) >> 6) & 0x03;
                        VAR14[VAR9++] = ((VAR2->VAR20[VAR3]) >> 4) & 0x03;
                        VAR14[VAR9++] = ((VAR2->VAR20[VAR3]) >> 2) & 0x03;
                        VAR14[VAR9++] = (VAR2->VAR20[VAR3++]) & 0x03;
                    }
                }
            }
        }
        VAR4 += VAR10;
    }