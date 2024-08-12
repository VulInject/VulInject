static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8 = VAR2->VAR9.VAR10[0];
    unsigned char VAR11, VAR12, VAR13;
    unsigned char *VAR14 = VAR2->VAR9.VAR15[0];
    int VAR16 = VAR2->VAR9.VAR10[0] * VAR2->VAR17->VAR18;
    while (VAR5--)
    {
        FUN2(2);
        VAR7 = VAR4 + (VAR2->VAR19[VAR3++] - 1) * 3;
        while ((VAR6 = (signed char)VAR2->VAR19[VAR3++]) != -1)
        {
            if (VAR6 == 0)
            {
                FUN2(1);
                VAR7 += (VAR2->VAR19[VAR3++] - 1) * 3;
            }
            else if (VAR6 < 0)
            {
                VAR6 = -VAR6;
                FUN2(3);
                VAR11 = VAR2->VAR19[VAR3++];
                VAR12 = VAR2->VAR19[VAR3++];
                VAR13 = VAR2->VAR19[VAR3++];
                FUN3(VAR6 * 3);
                while (VAR6--)
                {
                    VAR14[VAR7++] = VAR11;
                    VAR14[VAR7++] = VAR12;
                    VAR14[VAR7++] = VAR13;
                }
            }
            else
            {
                FUN2(VAR6 * 3);
                FUN3(VAR6 * 3);
                while (VAR6--)
                {
                    VAR14[VAR7++] = VAR2->VAR19[VAR3++];
                    VAR14[VAR7++] = VAR2->VAR19[VAR3++];
                    VAR14[VAR7++] = VAR2->VAR19[VAR3++];
                }
            }
        }
        VAR4 += VAR8;
    }