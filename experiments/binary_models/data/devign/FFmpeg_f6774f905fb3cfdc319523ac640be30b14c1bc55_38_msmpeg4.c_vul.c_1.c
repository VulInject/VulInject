int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5, int *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR4 *VAR13;
    if (VAR3 < 4)
    {
        VAR12 = VAR2->VAR14;
    }
    else
    {
        VAR12 = VAR2->VAR15;
    }
    VAR10 = VAR2->VAR16[VAR3];
    VAR13 = VAR2->VAR13[0] + VAR2->VAR17[VAR3];
    VAR7 = VAR13[-1];
    VAR8 = VAR13[-1 - VAR10];
    VAR9 = VAR13[-VAR10];
    if (VAR2->VAR18 && (VAR3 & 2) == 0 && VAR2->VAR19 < 4)
    {
        VAR8 = VAR9 = 1024;
    }
    VAR20 volatile(""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     : ""(VAR7), ""(VAR8), ""(VAR9)
                     : ""(VAR12), ""(VAR21[VAR12])
                     : "", "");
    if (VAR12 == 8)
    {
        VAR7 = (VAR7 + (8 >> 1)) / 8;
        VAR8 = (VAR8 + (8 >> 1)) / 8;
        VAR9 = (VAR9 + (8 >> 1)) / 8;
    }
    else
    {
        VAR7 = FUN2((VAR7 + (VAR12 >> 1)), VAR12);
        VAR8 = FUN2((VAR8 + (VAR12 >> 1)), VAR12);
        VAR9 = FUN2((VAR9 + (VAR12 >> 1)), VAR12);
    }
    if (VAR2->VAR19 > 3)
    {
        if (VAR2->VAR22)
        {
            VAR23 *VAR24;
            int VAR10;
            if (VAR3 == 1)
            {
                VAR11 = VAR7;
                *VAR6 = 0;
            }
            else if (VAR3 == 2)
            {
                VAR11 = VAR9;
                *VAR6 = 1;
            }
            else if (VAR3 == 3)
            {
                if (FUN3(VAR7 - VAR8) < FUN3(VAR8 - VAR9))
                {
                    VAR11 = VAR9;
                    *VAR6 = 1;
                }
                else
                {
                    VAR11 = VAR7;
                    *VAR6 = 0;
                }
            }
            else
            {
                if (VAR3 < 4)
                {
                    VAR10 = VAR2->VAR25;
                    VAR24 = VAR2->VAR26.VAR27.VAR28[0] + (((VAR3 >> 1) + 2 * VAR2->VAR29) * 8 * VAR10) + ((VAR3 & 1) + 2 * VAR2->VAR30) * 8;
                }
                else
                {
                    VAR10 = VAR2->VAR31;
                    VAR24 = VAR2->VAR26.VAR27.VAR28[VAR3 - 3] + (VAR2->VAR29 * 8 * VAR10) + VAR2->VAR30 * 8;
                }
                if (VAR2->VAR30 == 0)
                    VAR7 = (1024 + (VAR12 >> 1)) / VAR12;
                else
                    VAR7 = FUN4(VAR24 - 8, VAR10, VAR12 * 8);
                if (VAR2->VAR29 == 0)
                    VAR9 = (1024 + (VAR12 >> 1)) / VAR12;
                else
                    VAR9 = FUN4(VAR24 - 8 * VAR10, VAR10, VAR12 * 8);
                if (VAR2->VAR32 == 0)
                {
                    VAR11 = VAR7;
                    *VAR6 = 0;
                }
                else if (VAR2->VAR32 == 1)
                {
                    if (VAR3 == 0)
                    {
                        VAR11 = VAR9;
                        *VAR6 = 1;
                    }
                    else
                    {
                        VAR11 = VAR7;
                        *VAR6 = 0;
                    }
                }
                else if (VAR2->VAR32 == 2)
                {
                    if (VAR3 == 0)
                    {
                        VAR11 = VAR7;
                        *VAR6 = 0;
                    }
                    else
                    {
                        VAR11 = VAR9;
                        *VAR6 = 1;
                    }
                }
                else
                {
                    VAR11 = VAR9;
                    *VAR6 = 1;
                }
            }
        }
        else
        {
            if (FUN3(VAR7 - VAR8) < FUN3(VAR8 - VAR9))
            {
                VAR11 = VAR9;
                *VAR6 = 1;
            }
            else
            {
                VAR11 = VAR7;
                *VAR6 = 0;
            }
        }
    }
    else
    {
        if (FUN3(VAR7 - VAR8) <= FUN3(VAR8 - VAR9))
        {
            VAR11 = VAR9;
            *VAR6 = 1;
        }
        else
        {
            VAR11 = VAR7;
            *VAR6 = 0;
        }
    }
    *VAR5 = &VAR13[0];
    return VAR11;
}