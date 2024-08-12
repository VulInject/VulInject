static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    int VAR6;
    signed char VAR7;
    int VAR8, VAR9;
    int VAR10 = VAR2->VAR11.VAR12[0];
    unsigned char VAR13, VAR14, VAR15;
    unsigned int VAR16;
    unsigned char *VAR17 = VAR2->VAR11.VAR18[0];
    int VAR19 = VAR2->VAR11.VAR12[0] * VAR2->VAR20->VAR21;
    if (VAR2->VAR22 < 8)
        return;
    VAR3 = 4;
    FUN2(2);
    VAR4 = FUN3(&VAR2->VAR23[VAR3]);
    VAR3 += 2;
    if (VAR4 & 0x0008)
    {
        FUN2(8);
        VAR5 = FUN3(&VAR2->VAR23[VAR3]);
        VAR3 += 4;
        VAR6 = FUN3(&VAR2->VAR23[VAR3]);
        VAR3 += 4;
    }
    else
    {
        VAR5 = 0;
        VAR6 = VAR2->VAR20->VAR21;
    }
    VAR8 = VAR10 * VAR5;
    while (VAR6--)
    {
        FUN2(2);
        VAR9 = VAR8 + (VAR2->VAR23[VAR3++] - 1) * 4;
        while ((VAR7 = (signed char)VAR2->VAR23[VAR3++]) != -1)
        {
            if (VAR7 == 0)
            {
                FUN2(1);
                VAR9 += (VAR2->VAR23[VAR3++] - 1) * 4;
                FUN4(0);
            }
            else if (VAR7 < 0)
            {
                VAR7 = -VAR7;
                FUN2(4);
                VAR3++;
                VAR13 = VAR2->VAR23[VAR3++];
                VAR14 = VAR2->VAR23[VAR3++];
                VAR15 = VAR2->VAR23[VAR3++];
                VAR16 = (VAR13 << 16) | (VAR14 << 8) | (VAR15 << 0);
                FUN4(VAR7 * 4);
                while (VAR7--)
                {
                    *(unsigned int *)(&VAR17[VAR9]) = VAR16;
                    VAR9 += 4;
                }
            }
            else
            {
                FUN2(VAR7 * 4);
                FUN4(VAR7 * 4);
                while (VAR7--)
                {
                    VAR3++;
                    VAR13 = VAR2->VAR23[VAR3++];
                    VAR14 = VAR2->VAR23[VAR3++];
                    VAR15 = VAR2->VAR23[VAR3++];
                    VAR16 = (VAR13 << 16) | (VAR14 << 8) | (VAR15 << 0);
                    *(unsigned int *)(&VAR17[VAR9]) = VAR16;
                    VAR9 += 4;
                }
            }
        }
        VAR8 += VAR10;
    }
}