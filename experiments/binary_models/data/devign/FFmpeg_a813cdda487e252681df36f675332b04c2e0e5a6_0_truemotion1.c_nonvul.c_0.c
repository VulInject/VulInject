static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    unsigned int VAR5;
    unsigned int VAR6;
    unsigned int *VAR7;
    unsigned int *VAR8;
    unsigned char *VAR9 = VAR2->VAR10->VAR11[0];
    int VAR12 = VAR2->VAR13 & VAR14;
    const unsigned char *VAR15 = VAR2->VAR15;
    unsigned char VAR16;
    unsigned char VAR17;
    int VAR18;
    int VAR19 = 0;
    int VAR20;
    memset(VAR2->VAR7, 0, VAR2->VAR21->VAR22 * sizeof(unsigned int));
    FUN2();
    for (VAR3 = 0; VAR3 < VAR2->VAR21->VAR23; VAR3++)
    {
        VAR6 = 0;
        VAR8 = (unsigned int *)VAR9;
        VAR7 = VAR2->VAR7;
        VAR18 = 0;
        if (!VAR12)
            VAR16 = VAR15[VAR18++];
        VAR17 = 0x01;
        VAR4 = VAR2->VAR21->VAR22;
        while (VAR4 > 0)
        {
            if (VAR12 || ((VAR16 & VAR17) == 0))
            {
                switch (VAR3 & 3)
                {
                case 0:
                    if (VAR2->VAR24 == 2)
                    {
                        FUN3();
                        FUN4();
                        FUN5();
                        FUN3();
                        FUN4();
                        FUN5();
                    }
                    else
                    {
                        FUN3();
                        FUN4();
                        FUN5();
                        FUN4();
                        FUN5();
                    }
                    break;
                case 1:
                case 3:
                    FUN4();
                    FUN5();
                    FUN4();
                    FUN5();
                    break;
                case 2:
                    if (VAR2->VAR25 == VAR26)
                    {
                        FUN3();
                        FUN4();
                        FUN5();
                        FUN3();
                        FUN4();
                        FUN5();
                    }
                    else if (VAR2->VAR25 == VAR27)
                    {
                        FUN3();
                        FUN4();
                        FUN5();
                        FUN4();
                        FUN5();
                    }
                    else
                    {
                        FUN4();
                        FUN5();
                        FUN4();
                        FUN5();
                    }
                    break;
                }
            }
            else
            {
                *VAR7++ = *VAR8++;
                VAR6 = *VAR8 - *VAR7;
                *VAR7++ = *VAR8++;
            }
            if (!VAR12)
            {
                VAR17 <<= 1;
                if (!VAR17)
                {
                    VAR16 = VAR15[VAR18++];
                    VAR17 = 0x01;
                }
            }
            VAR4 -= 4;
        }
        if (((VAR3 + 1) & 3) == 0)
            VAR15 += VAR2->VAR28;
        VAR9 += VAR2->VAR10->VAR29[0];
    }
}