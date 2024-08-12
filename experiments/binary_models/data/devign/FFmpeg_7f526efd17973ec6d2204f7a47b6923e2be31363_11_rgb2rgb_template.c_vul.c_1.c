static inline void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, const VAR2 *VAR5, VAR2 *VAR6, unsigned int VAR7, unsigned int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    unsigned VAR13;
    const unsigned VAR14 = VAR7 >> 1;
    for (VAR13 = 0; VAR13 < VAR8; VAR13++)
    {
        asm volatile("" VAR15 "" VAR15 ""
                     ""
                     "" VAR16 "" VAR15 "" VAR16 "" VAR15 "" VAR16 "" VAR15 ""
                     "" VAR15 ""
                     ""
                     "" VAR15 ""
                     ""
                     ""
                     "" VAR15 ""
                     "" VAR15 ""
                     ""
                     ""
                     ""
                     ""
                     ""
                     "" VAR17 "" VAR15 "" VAR17 "" VAR15 "" VAR17 "" VAR15 "" VAR17 "" VAR15 ""
                     "" VAR15 ""
                     "" VAR15 ""
                     ""
                     :
                     : ""(VAR6), ""(VAR3), ""(VAR4), ""(VAR5), ""((long)VAR14)
                     : "" VAR15);
        int VAR18;
        VAR19 *VAR20 = (VAR19 *)VAR6;
        const VAR2 *VAR21 = VAR3, *VAR22 = VAR4, *VAR23 = VAR5;
        for (VAR18 = 0; VAR18 < VAR14; VAR18 += 2)
        {
            uint64_t VAR24, VAR25;
            VAR24 = VAR22[0] + (VAR21[0] << 8) + (VAR23[0] << 16) + (VAR21[1] << 24);
            VAR25 = VAR22[1] + (VAR21[2] << 8) + (VAR23[1] << 16) + (VAR21[3] << 24);
            *VAR20++ = VAR24 + (VAR25 << 32);
            VAR21 += 4;
            VAR22 += 2;
            VAR23 += 2;
        }
        int VAR18, *VAR26 = (VAR27 *)VAR6;
        const VAR2 *VAR21 = VAR3, *VAR22 = VAR4, *VAR23 = VAR5;
        for (VAR18 = 0; VAR18 < VAR14; VAR18++)
        {
            *VAR26++ = (VAR22[0] << 24) + (VAR21[0] << 16) + (VAR23[0] << 8) + (VAR21[1] << 0);
            *VAR26++ = VAR22[0] + (VAR21[0] << 8) + (VAR23[0] << 16) + (VAR21[1] << 24);
            VAR21 += 2;
            VAR22++;
            VAR23++;
        }
        if ((VAR13 & (VAR12 - 1)) == (VAR12 - 1))
        {
            VAR4 += VAR10;
            VAR5 += VAR10;
        }
        VAR3 += VAR9;
        VAR6 += VAR11;
    }
    asm(VAR28 "" VAR29 ""
        :
        :
        : "");
}