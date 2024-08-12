static inline void FUN1(VAR1)(VAR2 *VAR3, long VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, VAR11 *VAR13, int VAR14, void *VAR15, int VAR16, VAR5 *VAR17, VAR11 *VAR18, VAR19 *VAR20)
{
    if (VAR16 == VAR21)
    {
        FUN1(VAR22)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR23)
    {
        FUN1(VAR24)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR25)
    {
        FUN1(VAR26)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR27)
    {
        FUN1(VAR28)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR29)
    {
        FUN1(VAR30)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR31)
    {
        FUN1(VAR32)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR33)
    {
        FUN1(VAR34)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR35)
    {
        FUN1(VAR36)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    if (!(VAR9 & VAR37) || (!VAR10))
        if (!(VAR9 & VAR37))
        {
            FUN1(VAR38)
            (VAR3, VAR4, VAR6, VAR7, VAR8, VAR12, VAR13, VAR14);
        }
        else
        {
            int VAR39;
            if (VAR10)
            {
                asm volatile(""
                             "" VAR40 ""
                             "" VAR41 ""
                             "" VAR42 ""
                             "" VAR43 ""
                             "" VAR44 "" VAR44 "" VAR45 "" VAR40 "" VAR45 "" VAR40 "" VAR45 "" VAR40 ""
                             "" VAR43 ""
                             ""
                             "" VAR43 "" VAR44 ""
                             "" VAR46 "" VAR40 ""
                             "" VAR44 "" VAR41 ""
                             "" VAR44 "" VAR44 ""
                             "" VAR43 ""
                             ""
                             "" VAR43 "" VAR44 "" VAR40 ""
                             "" VAR44 "" VAR41 ""
                             "" VAR44 "" VAR44 "" FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE VAR47
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR18), ""(VAR20), ""(VAR15)
                             : "" VAR44, "" VAR43, "" VAR40, "" VAR42, "" VAR46, "" VAR41);
                for (VAR39 = VAR4 - 1; (VAR39 * VAR8) >> 16 >= VAR7 - 1; VAR39--)
                    VAR3[VAR39] = VAR6[VAR7 - 1] * 128;
            }
            else
            {
                long VAR48 = VAR8 >> 16;
                uint16_t VAR49 = VAR8 & 0xffff;
                asm volatile("" VAR44 "" VAR44 ""
                             "" VAR43 "" VAR43 ""
                             "" FUN2(4) ""
                                                                                 "" VAR43 ""
                                                                                 "" VAR43 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR41 ""
                                                                                 ""
                                                                                 "" VAR41 "" VAR44 ""
                                                                                 ""
                                                                                 "" VAR43 ""
                                                                                 "" VAR43 ""
                                                                                 "" VAR43 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR41 ""
                                                                                 ""
                                                                                 "" VAR41 "" VAR44 ""
                                                                                 ""
                                                                                 "" VAR43 ""
                                                                                 "" VAR44 ""
                                                                                 "" VAR44 ""
                                                                                 ""
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR4), ""(VAR48), ""(VAR49)
                             : "" VAR44, "" VAR43, "", "" VAR41, "");
            }
            int VAR39;
            unsigned int VAR50 = 0;
            for (VAR39 = 0; VAR39 < VAR4; VAR39++)
            {
                register unsigned int VAR51 = VAR50 >> 16;
                register unsigned int VAR52 = (VAR50 & 0xFFFF) >> 9;
                VAR3[VAR39] = (VAR6[VAR51] << 7) + (VAR6[VAR51 + 1] - VAR6[VAR51]) * VAR52;
                VAR50 += VAR8;
            }
        }
}