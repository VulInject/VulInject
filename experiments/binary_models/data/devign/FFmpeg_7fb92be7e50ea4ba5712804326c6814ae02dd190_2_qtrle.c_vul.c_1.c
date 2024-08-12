static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8 = VAR2->VAR9.VAR10[0];
    unsigned char VAR11, VAR12, VAR13, VAR14;
    unsigned int VAR15;
    unsigned char *VAR16 = VAR2->VAR9.VAR17[0];
    int VAR18 = VAR2->VAR9.VAR10[0] * VAR2->VAR19->VAR20;
    while (VAR5--)
    {
        FUN2(2);
        VAR7 = VAR4 + (VAR2->VAR21[VAR3++] - 1) * 4;
        while ((VAR6 = (signed char)VAR2->VAR21[VAR3++]) != -1)
        {
            if (VAR6 == 0)
            {
                FUN2(1);
                VAR7 += (VAR2->VAR21[VAR3++] - 1) * 4;
            }
            else if (VAR6 < 0)
            {
                VAR6 = -VAR6;
                FUN2(4);
                VAR11 = VAR2->VAR21[VAR3++];
                VAR12 = VAR2->VAR21[VAR3++];
                VAR13 = VAR2->VAR21[VAR3++];
                VAR14 = VAR2->VAR21[VAR3++];
                VAR15 = (VAR11 << 24) | (VAR12 << 16) | (VAR13 << 8) | (VAR14 << 0);
                FUN3(VAR6 * 4);
                while (VAR6--)
                {
                    *(unsigned int *)(&VAR16[VAR7]) = VAR15;
                    VAR7 += 4;
                }
            }
            else
            {
                FUN2(VAR6 * 4);
                FUN3(VAR6 * 4);
                while (VAR6--)
                {
                    VAR11 = VAR2->VAR21[VAR3++];
                    VAR12 = VAR2->VAR21[VAR3++];
                    VAR13 = VAR2->VAR21[VAR3++];
                    VAR14 = VAR2->VAR21[VAR3++];
                    VAR15 = (VAR11 << 24) | (VAR12 << 16) | (VAR13 << 8) | (VAR14 << 0);
                    *(unsigned int *)(&VAR16[VAR7]) = VAR15;
                    VAR7 += 4;
                }
            }
        }
        VAR4 += VAR8;
    }