static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8 = VAR2->VAR9.VAR10[0];
    unsigned char VAR11, VAR12, VAR13, VAR14;
    unsigned char *VAR15 = VAR2->VAR9.VAR16[0];
    int VAR17 = VAR2->VAR9.VAR10[0] * VAR2->VAR18->VAR19;
    while (VAR5--)
    {
        FUN2(2);
        VAR7 = VAR4 + (4 * (VAR2->VAR20[VAR3++] - 1));
        while ((VAR6 = (signed char)VAR2->VAR20[VAR3++]) != -1)
        {
            if (VAR6 == 0)
            {
                FUN2(1);
                VAR7 += (4 * (VAR2->VAR20[VAR3++] - 1));
            }
            else if (VAR6 < 0)
            {
                VAR6 = -VAR6;
                FUN2(4);
                VAR11 = VAR2->VAR20[VAR3++];
                VAR12 = VAR2->VAR20[VAR3++];
                VAR13 = VAR2->VAR20[VAR3++];
                VAR14 = VAR2->VAR20[VAR3++];
                FUN3(VAR6 * 4);
                while (VAR6--)
                {
                    VAR15[VAR7++] = VAR11;
                    VAR15[VAR7++] = VAR12;
                    VAR15[VAR7++] = VAR13;
                    VAR15[VAR7++] = VAR14;
                }
            }
            else
            {
                VAR6 *= 4;
                FUN2(VAR6);
                FUN3(VAR6);
                while (VAR6--)
                {
                    VAR15[VAR7++] = VAR2->VAR20[VAR3++];
                }
            }
        }
        VAR4 += VAR8;
    }