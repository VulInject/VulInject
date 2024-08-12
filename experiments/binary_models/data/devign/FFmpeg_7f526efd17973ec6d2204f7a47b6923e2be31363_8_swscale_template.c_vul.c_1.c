static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 *VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, int VAR9, int VAR10)
{
    if (VAR7 != NULL)
    {
        asm volatile(VAR11
                     :
                     : ""(VAR4 + VAR10), ""(VAR7 + VAR10), ""((long)-VAR10)
                     : "" VAR12);
        asm volatile(VAR11
                     :
                     : ""(VAR4 + 2048 + VAR10), ""(VAR8 + VAR10), ""((long)-VAR10)
                     : "" VAR12);
    }
    asm volatile(VAR11
                 :
                 : ""(VAR3 + VAR9), ""(VAR6 + VAR9), ""((long)-VAR9)
                 : "" VAR12);
    int VAR13;
    for (VAR13 = 0; VAR13 < VAR9; VAR13++)
    {
        int VAR14 = VAR3[VAR13] >> 7;
        if (VAR14 & 256)
        {
            if (VAR14 < 0)
                VAR14 = 0;
            else
                VAR14 = 255;
        }
        VAR6[VAR13] = VAR14;
    }
    if (VAR7 != NULL)
        for (VAR13 = 0; VAR13 < VAR10; VAR13++)
        {
            int VAR15 = VAR4[VAR13] >> 7;
            int VAR16 = VAR4[VAR13 + 2048] >> 7;
            if ((VAR15 | VAR16) & 256)
            {
                if (VAR15 < 0)
                    VAR15 = 0;
                else if (VAR15 > 255)
                    VAR15 = 255;
                if (VAR16 < 0)
                    VAR16 = 0;
                else if (VAR16 > 255)
                    VAR16 = 255;
            }
            VAR7[VAR13] = VAR15;
            VAR8[VAR13] = VAR16;
        }
}