static void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    unsigned char VAR4;
    unsigned char VAR5;
    unsigned char VAR6;
    int VAR7 = 0;
    int VAR8 = VAR2->VAR9.VAR10[0];
    int VAR11 = (VAR2->VAR12->VAR13 - 1) * VAR8;
    int VAR14 = VAR8 * VAR2->VAR12->VAR13;
    while (VAR11 >= 0)
    {
        FUN2();
        VAR4 = VAR6;
        if (VAR4 == 0)
        {
            FUN2();
            if (VAR6 == 0)
            {
                VAR11 -= VAR8;
                VAR7 = 0;
            }
            else if (VAR6 == 1)
            {
                return;
            }
            else if (VAR6 == 2)
            {
                FUN2();
                VAR7 += VAR6;
                FUN2();
                VAR11 -= VAR6 * VAR8;
            }
            else
            {
                if ((VAR11 + VAR7 + VAR6 > VAR14) || (VAR11 < 0))
                {
                    FUN3("");
                    return;
                }
                VAR4 = VAR6;
                VAR5 = VAR6 & 0x01;
                if (VAR3 + VAR4 + VAR5 > VAR2->VAR15)
                {
                    FUN3("");
                    return;
                }
                while (VAR4--)
                {
                    FUN2();
                    VAR2->VAR9.VAR16[0][VAR11 + VAR7] = VAR6;
                    VAR7++;
                }
                if (VAR5)
                    VAR3++;
            }
        }
        else
        {
            if ((VAR11 + VAR7 + VAR6 > VAR14) || (VAR11 < 0))
            {
                FUN3("");
                return;
            }
            FUN2();
            while (VAR4--)
            {
                VAR2->VAR9.VAR16[0][VAR11 + VAR7] = VAR6;
                VAR7++;
            }
        }
    }
    memcpy(VAR2->VAR9.VAR16[1], VAR2->VAR12->VAR17->VAR18, VAR19);
    if (VAR2->VAR12->VAR17->VAR20)
    {
        VAR2->VAR9.VAR21 = 1;
        VAR2->VAR12->VAR17->VAR20 = 0;
    }
    if (VAR3 < VAR2->VAR15)
        FUN3("", VAR3, VAR2->VAR15);
}