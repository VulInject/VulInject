static inline void FUN1(VAR1)(VAR2 *VAR3, VAR2 **VAR4, int VAR5, VAR2 *VAR6, VAR2 **VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11, VAR9 *VAR12, int VAR13, VAR2 *VAR14, VAR2 *VAR15)
{
    if (VAR11 != NULL)
    {
        asm volatile(FUN2(0)
                     :
                     : ""(-VAR8), ""(VAR7 + VAR8), ""(VAR15 + VAR8 * 4), ""(VAR11), ""(VAR13 >> 1)
                     : "", "", "");
        asm volatile(FUN2(4096)
                     :
                     : ""(-VAR8), ""(VAR7 + VAR8), ""(VAR15 + VAR8 * 4), ""(VAR12), ""(VAR13 >> 1)
                     : "", "", "");
    }
    asm volatile(FUN2(0)
                 :
                 : ""(-VAR5), ""(VAR4 + VAR5), ""(VAR14 + VAR5 * 4), ""(VAR10), ""(VAR13)
                 : "", "", "");
    int VAR16;
    for (VAR16 = 0; VAR16 < VAR13; VAR16++)
    {
        int VAR17 = 0;
        int VAR18;
        for (VAR18 = 0; VAR18 < VAR5; VAR18++)
            VAR17 += VAR4[VAR18][VAR16] * VAR3[VAR18];
        VAR10[VAR16] = FUN3(FUN4(VAR17 >> 19, 0), 255);
    }
    if (VAR11 != NULL)
        for (VAR16 = 0; VAR16 < (VAR13 >> 1); VAR16++)
        {
            int VAR19 = 0;
            int VAR20 = 0;
            int VAR18;
            for (VAR18 = 0; VAR18 < VAR5; VAR18++)
            {
                VAR19 += VAR7[VAR18][VAR16] * VAR6[VAR18];
                VAR20 += VAR7[VAR18][VAR16 + 2048] * VAR6[VAR18];
            }
            VAR11[VAR16] = FUN3(FUN4(VAR19 >> 19, 0), 255);
            VAR12[VAR16] = FUN3(FUN4(VAR20 >> 19, 0), 255);
        }
}