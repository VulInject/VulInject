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
        VAR18 = VAR19[VAR20];
        VAR21 = VAR22[VAR20];
        VAR23 = VAR24[VAR20];
        VAR25 = VAR26[VAR20];
        asm(""
            : ""(VAR18)
            : ""(VAR18));
        asm(""
            : ""(VAR21)
            : ""(VAR21));
        asm(""
            : ""(VAR23)
            : ""(VAR23));
        asm(""
            : ""(VAR25)
            : ""(VAR25));
        VAR27 = (VAR23 << 8) + (VAR25 << 24);
        VAR28 = VAR27 + VAR21;
        VAR27 += VAR18;
        VAR29[VAR20] = VAR27;
        VAR30[VAR20] = VAR28;
        int VAR31;
        VAR32 *VAR29 = (VAR32 *)VAR6;
        VAR32 *VAR30 = (VAR32 *)(VAR6 + VAR11);
        const VAR33 *VAR19 = (VAR33 *)VAR3;
        const VAR33 *VAR22 = (VAR33 *)(VAR3 + VAR9);
        const VAR34 *VAR24 = (VAR34 *)VAR4, *VAR26 = (VAR34 *)VAR5;
        for (VAR31 = 0; VAR31 < VAR14; VAR31 += 8)
        {
            uint64_t VAR18, VAR21, VAR27, VAR28;
            uint64_t VAR23, VAR25;
            asm(""
                :
                : ""(VAR19));
            asm(""
                :
                : ""(VAR22));
            asm(""
                :
                : ""(VAR24));
            asm(""
                :
                : ""(VAR26));
            FUN2(0);
            FUN2(1);
            FUN2(2);
            FUN2(3);
            VAR19 += 4;
            VAR22 += 4;
            VAR24 += 4;
            VAR26 += 4;
            VAR29 += 4;
            VAR30 += 4;
        }
        VAR13++;
        VAR3 += VAR9;
        VAR6 += VAR11;
        int VAR31;
        VAR32 *VAR35 = (VAR32 *)VAR6;
        const VAR2 *VAR19 = VAR3, *VAR24 = VAR4, *VAR26 = VAR5;
        for (VAR31 = 0; VAR31 < VAR14; VAR31 += 2)
        {
            uint64_t VAR36, VAR37;
            VAR36 = VAR19[0] + (VAR24[0] << 8) + (VAR19[1] << 16) + (VAR26[0] << 24);
            VAR37 = VAR19[2] + (VAR24[1] << 8) + (VAR19[3] << 16) + (VAR26[1] << 24);
            *VAR35++ = VAR36 + (VAR37 << 32);
            VAR19 += 4;
            VAR24 += 2;
            VAR26 += 2;
        }
        int VAR31, *VAR38 = (VAR39 *)VAR6;
        const VAR2 *VAR19 = VAR3, *VAR24 = VAR4, *VAR26 = VAR5;
        for (VAR31 = 0; VAR31 < VAR14; VAR31++)
        {
            *VAR38++ = (VAR19[0] << 24) + (VAR24[0] << 16) + (VAR19[1] << 8) + (VAR26[0] << 0);
            *VAR38++ = VAR19[0] + (VAR24[0] << 8) + (VAR19[1] << 16) + (VAR26[0] << 24);
            VAR19 += 2;
            VAR24++;
            VAR26++;
        }
        if ((VAR13 & (VAR12 - 1)) == (VAR12 - 1))
        {
            VAR4 += VAR10;
            VAR5 += VAR10;
        }
        VAR3 += VAR9;
        VAR6 += VAR11;
    }
    asm(VAR40 "" VAR41 ""
        :
        :
        : "");
}