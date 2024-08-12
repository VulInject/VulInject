inline static void FUN1(VAR1)(VAR2 *VAR3, long VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int VAR9, int VAR10, int VAR11, VAR12 *VAR13, VAR12 *VAR14, int VAR15, void *VAR16, int VAR17, VAR5 *VAR18, VAR12 *VAR19, VAR20 *VAR21, VAR5 *VAR22)
{
    if (VAR17 == VAR23)
    {
        FUN1(VAR24)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR25)
    {
        FUN1(VAR26)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR27)
    {
        FUN1(VAR28)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR29)
    {
        FUN1(VAR30)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR31)
    {
        FUN1(VAR32)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR33)
    {
        FUN1(VAR34)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR35)
    {
        FUN1(VAR36)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR37)
    {
        FUN1(VAR38)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR39)
    {
        FUN1(VAR40)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR41)
    {
        FUN1(VAR42)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (FUN2(VAR17))
    {
        return;
    }
    else if (VAR17 == VAR43 || VAR17 == VAR44 || VAR17 == VAR45 || VAR17 == VAR46 || VAR17 == VAR47)
    {
        FUN1(VAR48)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8, VAR22);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    if (!(VAR10 & VAR49) || (!VAR11))
        if (!(VAR10 & VAR49))
        {
            FUN1(VAR50)
            (VAR3, VAR4, VAR6, VAR8, VAR9, VAR13, VAR14, VAR15);
            FUN1(VAR50)
            (VAR3 + 2048, VAR4, VAR7, VAR8, VAR9, VAR13, VAR14, VAR15);
        }
        else
        {
            int VAR51;
            uint64_t VAR52 FUN3((FUN4(8)));
            if (VAR11)
            {
                asm volatile("" VAR53 ""
                             ""
                             "" VAR54 ""
                             "" VAR55 ""
                             "" VAR56 ""
                             "" VAR53 ""
                             "" VAR57 "" VAR57 "" VAR58 "" VAR54 "" VAR58 "" VAR54 "" VAR58 "" VAR54 ""
                             "" VAR53 ""
                             ""
                             "" VAR53 "" VAR57 ""
                             "" VAR59 "" VAR54 ""
                             "" VAR57 "" VAR55 ""
                             "" VAR57 "" VAR57 ""
                             "" VAR53 ""
                             ""
                             "" VAR53 "" VAR57 "" VAR54 ""
                             "" VAR57 "" VAR55 ""
                             "" VAR57 "" VAR57 "" FUNNY_UV_CODE FUNNY_UV_CODE FUNNY_UV_CODE VAR60 "" VAR57 "" VAR57 ""
                             "" VAR54 ""
                             "" VAR55 ""
                             "" VAR55 "" VAR58 "" VAR54 "" VAR58 "" VAR54 "" VAR58 "" VAR54 "" FUNNY_UV_CODE FUNNY_UV_CODE FUNNY_UV_CODE VAR60 "" VAR53 ""
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR19), ""(VAR21), ""(VAR16), ""(VAR7), ""(VAR52)
                             : "" VAR57, "" VAR54, "" VAR56, "" VAR59, "" VAR55, "" VAR53);
                for (VAR51 = VAR4 - 1; (VAR51 * VAR9) >> 16 >= VAR8 - 1; VAR51--)
                {
                    VAR3[VAR51] = VAR6[VAR8 - 1] * 128;
                    VAR3[VAR51 + 2048] = VAR7[VAR8 - 1] * 128;
                }
            }
            else
            {
                long VAR61 = (long)(VAR9 >> 16);
                uint16_t VAR62 = VAR9 & 0xffff;
                asm volatile("" VAR57 "" VAR57 ""
                             "" VAR56 "" VAR56 ""
                             "" FUN5(4) ""
                                                                                 "" VAR59 ""
                                                                                 "" VAR59 "" VAR56 ""
                                                                                 "" VAR59 "" VAR56 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR55 ""
                                                                                 ""
                                                                                 "" VAR55 "" VAR57 ""
                                                                                 "" VAR56 ""
                                                                                 "" VAR56 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR55 ""
                                                                                 ""
                                                                                 "" VAR55 "" VAR57 ""
                                                                                 ""
                                                                                 "" VAR56 ""
                                                                                 "" VAR57 ""
                                                                                 "" VAR57 ""
                                                                                 ""
                             :
                             : ""(VAR6), ""(VAR3), ""((long)VAR4), ""(VAR61), ""(VAR62),
                             :
                             : ""(VAR6), ""(VAR3), ""((long)VAR4), ""(VAR61), ""(VAR62), ""(VAR7)
                             : "" VAR57, "" VAR56, "", "" VAR55, "");
            }
            int VAR51;
            unsigned int VAR63 = 0;
            for (VAR51 = 0; VAR51 < VAR4; VAR51++)
            {
                register unsigned int VAR64 = VAR63 >> 16;
                register unsigned int VAR65 = (VAR63 & 0xFFFF) >> 9;
                VAR3[VAR51] = (VAR6[VAR64] * (VAR65 ^ 127) + VAR6[VAR64 + 1] * VAR65);
                VAR3[VAR51 + 2048] = (VAR7[VAR64] * (VAR65 ^ 127) + VAR7[VAR64 + 1] * VAR65);
                VAR63 += VAR9;
            }
        }
}