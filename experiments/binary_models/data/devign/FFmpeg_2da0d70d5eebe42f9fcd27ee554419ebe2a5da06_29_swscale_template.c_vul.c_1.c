static inline void FUN1(VAR1)(VAR2 *VAR3, long VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, VAR11 *VAR13, int VAR14, void *VAR15, int VAR16, VAR5 *VAR17, VAR11 *VAR18, VAR19 *VAR20, VAR5 *VAR21)
{
    if (VAR16 == VAR22 || VAR16 == VAR23)
    {
        FUN1(VAR24)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR25 || VAR16 == VAR26)
    {
        FUN1(VAR27)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR28)
    {
        FUN1(VAR29)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR30)
    {
        FUN1(VAR31)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR32)
    {
        FUN1(VAR33)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR34)
    {
        FUN1(VAR35)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR36)
    {
        FUN1(VAR37)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR38)
    {
        FUN1(VAR39)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR40)
    {
        FUN1(VAR41)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR42)
    {
        FUN1(VAR43)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR44 || VAR16 == VAR45 || VAR16 == VAR46 || VAR16 == VAR47 || VAR16 == VAR48)
    {
        FUN1(VAR49)
        (VAR17, VAR6, VAR7, VAR21);
        VAR6 = VAR17;
    }
    if (!(VAR9 & VAR50) || (!VAR10))
        if (!(VAR9 & VAR50))
        {
            FUN1(VAR51)
            (VAR3, VAR4, VAR6, VAR7, VAR8, VAR12, VAR13, VAR14);
        }
        else
        {
            int VAR52;
            uint64_t VAR53 FUN2((FUN3(8)));
            if (VAR10)
            {
                asm volatile("" VAR54 ""
                             ""
                             "" VAR55 ""
                             "" VAR56 ""
                             "" VAR57 ""
                             "" VAR54 ""
                             "" VAR58 "" VAR58 "" VAR59 "" VAR55 "" VAR59 "" VAR55 "" VAR59 "" VAR55 ""
                             "" VAR54 ""
                             ""
                             "" VAR54 "" VAR58 ""
                             "" VAR60 "" VAR55 ""
                             "" VAR58 "" VAR56 ""
                             "" VAR58 "" VAR58 ""
                             "" VAR54 ""
                             ""
                             "" VAR54 "" VAR58 "" VAR55 ""
                             "" VAR58 "" VAR56 ""
                             "" VAR58 "" VAR58 "" FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE VAR61 "" VAR54 ""
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR18), ""(VAR20), ""(VAR15), ""(VAR53)
                             : "" VAR58, "" VAR55, "" VAR57, "" VAR60, "" VAR56, "" VAR54);
                for (VAR52 = VAR4 - 1; (VAR52 * VAR8) >> 16 >= VAR7 - 1; VAR52--)
                    VAR3[VAR52] = VAR6[VAR7 - 1] * 128;
            }
            else
            {
                long VAR62 = VAR8 >> 16;
                uint16_t VAR63 = VAR8 & 0xffff;
                asm volatile("" VAR58 "" VAR58 ""
                             "" VAR57 "" VAR57 ""
                             "" FUN4(4) ""
                                                                                 "" VAR57 ""
                                                                                 "" VAR57 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR56 ""
                                                                                 ""
                                                                                 "" VAR56 "" VAR58 ""
                                                                                 ""
                                                                                 "" VAR57 ""
                                                                                 "" VAR57 ""
                                                                                 "" VAR57 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR56 ""
                                                                                 ""
                                                                                 "" VAR56 "" VAR58 ""
                                                                                 ""
                                                                                 "" VAR57 ""
                                                                                 "" VAR58 ""
                                                                                 "" VAR58 ""
                                                                                 ""
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR4), ""(VAR62), ""(VAR63)
                             : "" VAR58, "" VAR57, "", "" VAR56, "");
            }
            int VAR52;
            unsigned int VAR64 = 0;
            for (VAR52 = 0; VAR52 < VAR4; VAR52++)
            {
                register unsigned int VAR65 = VAR64 >> 16;
                register unsigned int VAR66 = (VAR64 & 0xFFFF) >> 9;
                VAR3[VAR52] = (VAR6[VAR65] << 7) + (VAR6[VAR65 + 1] - VAR6[VAR65]) * VAR66;
                VAR64 += VAR8;
            }
        }
}