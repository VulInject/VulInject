inline static void FUN1(VAR1)(VAR2 *VAR3, long VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int VAR9, int VAR10, int VAR11, VAR12 *VAR13, VAR12 *VAR14, int VAR15, void *VAR16, int VAR17, VAR5 *VAR18, VAR12 *VAR19, VAR20 *VAR21)
{
    if (VAR17 == VAR22)
    {
        FUN1(VAR23)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR24)
    {
        FUN1(VAR25)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR26)
    {
        FUN1(VAR27)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR28)
    {
        FUN1(VAR29)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR30)
    {
        FUN1(VAR31)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR32)
    {
        FUN1(VAR33)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR34)
    {
        FUN1(VAR35)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR36)
    {
        FUN1(VAR37)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (FUN2(VAR17))
    {
        return;
    }
    if (!(VAR10 & VAR38) || (!VAR11))
        if (!(VAR10 & VAR38))
        {
            FUN1(VAR39)
            (VAR3, VAR4, VAR6, VAR8, VAR9, VAR13, VAR14, VAR15);
            FUN1(VAR39)
            (VAR3 + 2048, VAR4, VAR7, VAR8, VAR9, VAR13, VAR14, VAR15);
        }
        else
        {
            int VAR40;
            if (VAR11)
            {
                asm volatile(""
                             "" VAR41 ""
                             "" VAR42 ""
                             "" VAR43 ""
                             "" VAR44 ""
                             "" VAR45 "" VAR45 "" VAR46 "" VAR41 "" VAR46 "" VAR41 "" VAR46 "" VAR41 ""
                             "" VAR44 ""
                             ""
                             "" VAR44 "" VAR45 ""
                             "" VAR47 "" VAR41 ""
                             "" VAR45 "" VAR42 ""
                             "" VAR45 "" VAR45 ""
                             "" VAR44 ""
                             ""
                             "" VAR44 "" VAR45 "" VAR41 ""
                             "" VAR45 "" VAR42 ""
                             "" VAR45 "" VAR45 "" FUNNY_UV_CODE FUNNY_UV_CODE FUNNY_UV_CODE VAR48 "" VAR45 "" VAR45 ""
                             "" VAR41 ""
                             "" VAR42 ""
                             "" VAR42 "" VAR46 "" VAR41 "" VAR46 "" VAR41 "" VAR46 "" VAR41 "" FUNNY_UV_CODE FUNNY_UV_CODE FUNNY_UV_CODE VAR48
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR19), ""(VAR21), ""(VAR16), ""(VAR7)
                             : "" VAR45, "" VAR44, "" VAR41, "" VAR43, "" VAR47, "" VAR42);
                for (VAR40 = VAR4 - 1; (VAR40 * VAR9) >> 16 >= VAR8 - 1; VAR40--)
                {
                    VAR3[VAR40] = VAR6[VAR8 - 1] * 128;
                    VAR3[VAR40 + 2048] = VAR7[VAR8 - 1] * 128;
                }
            }
            else
            {
                long VAR49 = (long)(VAR9 >> 16);
                uint16_t VAR50 = VAR9 & 0xffff;
                asm volatile("" VAR45 "" VAR45 ""
                             "" VAR44 "" VAR44 ""
                             "" FUN3(4) ""
                                                                                 "" VAR47 ""
                                                                                 "" VAR47 "" VAR44 ""
                                                                                 "" VAR47 "" VAR44 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR42 ""
                                                                                 ""
                                                                                 "" VAR42 "" VAR45 ""
                                                                                 "" VAR44 ""
                                                                                 "" VAR44 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 ""
                                                                                 "" VAR42 ""
                                                                                 ""
                                                                                 "" VAR42 "" VAR45 ""
                                                                                 ""
                                                                                 "" VAR44 ""
                                                                                 "" VAR45 ""
                                                                                 "" VAR45 ""
                                                                                 ""
                             :
                             : ""(VAR6), ""(VAR3), ""((long)VAR4), ""(VAR49), ""(VAR50),
                             :
                             : ""(VAR6), ""(VAR3), ""((long)VAR4), ""(VAR49), ""(VAR50), ""(VAR7)
                             : "" VAR45, "" VAR44, "", "" VAR42, "");
            }
            int VAR40;
            unsigned int VAR51 = 0;
            for (VAR40 = 0; VAR40 < VAR4; VAR40++)
            {
                register unsigned int VAR52 = VAR51 >> 16;
                register unsigned int VAR53 = (VAR51 & 0xFFFF) >> 9;
                VAR3[VAR40] = (VAR6[VAR52] * (VAR53 ^ 127) + VAR6[VAR52 + 1] * VAR53);
                VAR3[VAR40 + 2048] = (VAR7[VAR52] * (VAR53 ^ 127) + VAR7[VAR52 + 1] * VAR53);
                VAR51 += VAR9;
            }
        }
}