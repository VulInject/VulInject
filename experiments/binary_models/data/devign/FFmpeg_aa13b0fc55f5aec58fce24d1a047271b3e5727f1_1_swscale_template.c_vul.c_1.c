static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12, VAR13 *VAR14, VAR13 *VAR15, int VAR16, void *VAR17, int VAR18, VAR7 *VAR19, VAR13 *VAR20, VAR21 *VAR22, VAR7 *VAR23)
{
    if (VAR18 == VAR24 || VAR18 == VAR25)
    {
        FUN1(VAR26)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR27 || VAR18 == VAR28)
    {
        FUN1(VAR29)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR30)
    {
        FUN1(VAR31)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR32)
    {
        FUN1(VAR31)
        (VAR19, VAR8 + VAR33, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR34)
    {
        FUN1(VAR35)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR36)
    {
        FUN1(VAR37)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR38)
    {
        FUN1(VAR39)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR40)
    {
        FUN1(VAR41)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR42)
    {
        FUN1(VAR41)
        (VAR19, VAR8 + VAR33, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR43)
    {
        FUN1(VAR44)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR45)
    {
        FUN1(VAR46)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR47)
    {
        FUN1(VAR48)
        (VAR19, VAR8, VAR9);
        VAR8 = VAR19;
    }
    else if (VAR18 == VAR49 || VAR18 == VAR50 || VAR18 == VAR51 || VAR18 == VAR52 || VAR18 == VAR53)
    {
        FUN1(VAR54)
        (VAR19, VAR8, VAR9, (VAR55 *)VAR23);
        VAR8 = VAR19;
    }
    if (!(VAR11 & VAR56) || (!VAR12))
        if (!(VAR11 & VAR56))
        {
            FUN1(VAR57)
            (VAR5, VAR6, VAR8, VAR9, VAR10, VAR14, VAR15, VAR16);
        }
        else
        {
            int VAR58;
            uint64_t VAR59 FUN2((FUN3(8)));
            if (VAR12)
            {
                asm volatile("" VAR60 ""
                             ""
                             "" VAR61 ""
                             "" VAR62 ""
                             "" VAR63 ""
                             "" VAR60 ""
                             "" VAR64 "" VAR64 "" VAR65 "" VAR61 "" VAR65 "" VAR61 "" VAR65 "" VAR61 ""
                             "" VAR60 ""
                             ""
                             "" VAR60 "" VAR64 ""
                             "" VAR66 "" VAR61 ""
                             "" VAR64 "" VAR62 ""
                             "" VAR64 "" VAR64 ""
                             "" VAR60 ""
                             ""
                             "" VAR60 "" VAR64 "" VAR61 ""
                             "" VAR64 "" VAR62 ""
                             "" VAR64 "" VAR64 "" FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE VAR67 "" VAR60 ""
                             :
                             : ""(VAR8), ""(VAR5), ""(VAR20), ""(VAR22), ""(VAR17), ""(VAR59)
                             : "" VAR64, "" VAR61, "" VAR63, "" VAR66, "" VAR62, "" VAR60);
                for (VAR58 = VAR6 - 1; (VAR58 * VAR10) >> 16 >= VAR9 - 1; VAR58--)
                    VAR5[VAR58] = VAR8[VAR9 - 1] * 128;
            }
            else
            {
                long VAR68 = VAR10 >> 16;
                uint16_t VAR69 = VAR10 & 0xffff;
                asm volatile("" VAR64 "" VAR64 ""
                             "" VAR63 "" VAR63 ""
                             "" FUN4(4) ""
                                                                                    "" VAR63 ""
                                                                                    "" VAR63 ""
                                                                                    ""
                                                                                    ""
                                                                                    ""
                                                                                    ""
                                                                                    "" VAR62 ""
                                                                                    ""
                                                                                    "" VAR62 "" VAR64 ""
                                                                                    ""
                                                                                    "" VAR63 ""
                                                                                    "" VAR63 ""
                                                                                    "" VAR63 ""
                                                                                    ""
                                                                                    ""
                                                                                    ""
                                                                                    ""
                                                                                    "" VAR62 ""
                                                                                    ""
                                                                                    "" VAR62 "" VAR64 ""
                                                                                    ""
                                                                                    "" VAR63 ""
                                                                                    "" VAR64 ""
                                                                                    "" VAR64 ""
                                                                                    ""
                             :
                             : ""(VAR8), ""(VAR5), ""(VAR6), ""(VAR68), ""(VAR69)
                             : "" VAR64, "" VAR63, "", "" VAR62, "");
            }
            int VAR58;
            unsigned int VAR70 = 0;
            for (VAR58 = 0; VAR58 < VAR6; VAR58++)
            {
                register unsigned int VAR71 = VAR70 >> 16;
                register unsigned int VAR72 = (VAR70 & 0xFFFF) >> 9;
                VAR5[VAR58] = (VAR8[VAR71] << 7) + (VAR8[VAR71 + 1] - VAR8[VAR71]) * VAR72;
                VAR70 += VAR10;
            }
        }
    if (VAR3->VAR73 != VAR3->VAR74 && !(FUN5(VAR3->VAR75) || FUN6(VAR3->VAR75)))
    {
        int VAR58;
        if (VAR3->VAR73)
        {
            for (VAR58 = 0; VAR58 < VAR6; VAR58++)
                VAR5[VAR58] = (VAR5[VAR58] * 14071 + 33561947) >> 14;
        }
        else
        {
            for (VAR58 = 0; VAR58 < VAR6; VAR58++)
                VAR5[VAR58] = (VAR5[VAR58] * 19077 - 39057361) >> 14;
        }
    }
}