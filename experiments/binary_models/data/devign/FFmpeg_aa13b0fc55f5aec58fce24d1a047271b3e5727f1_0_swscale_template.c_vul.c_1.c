inline static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, VAR7 *VAR8, VAR7 *VAR9, int VAR10, int VAR11, int VAR12, int VAR13, VAR14 *VAR15, VAR14 *VAR16, int VAR17, void *VAR18, int VAR19, VAR7 *VAR20, VAR14 *VAR21, VAR22 *VAR23, VAR7 *VAR24)
{
    if (VAR19 == VAR25)
    {
        FUN1(VAR26)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR28)
    {
        FUN1(VAR29)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR30)
    {
        FUN1(VAR31)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR32)
    {
        FUN1(VAR31)
        (VAR20, VAR20 + VAR27, VAR8 + VAR33, VAR9 + VAR33, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR34)
    {
        FUN1(VAR35)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR36)
    {
        FUN1(VAR37)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR38)
    {
        FUN1(VAR39)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR40)
    {
        FUN1(VAR41)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR42)
    {
        FUN1(VAR41)
        (VAR20, VAR20 + VAR27, VAR8 + VAR33, VAR9 + VAR33, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR43)
    {
        FUN1(VAR44)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR45)
    {
        FUN1(VAR46)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (VAR19 == VAR47)
    {
        FUN1(VAR48)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    else if (FUN2(VAR19))
    {
        return;
    }
    else if (VAR19 == VAR49 || VAR19 == VAR50 || VAR19 == VAR51 || VAR19 == VAR52 || VAR19 == VAR53)
    {
        FUN1(VAR54)
        (VAR20, VAR20 + VAR27, VAR8, VAR9, VAR10, (VAR55 *)VAR24);
        VAR8 = VAR20;
        VAR9 = VAR20 + VAR27;
    }
    if (!(VAR12 & VAR56) || (!VAR13))
        if (!(VAR12 & VAR56))
        {
            FUN1(VAR57)
            (VAR5, VAR6, VAR8, VAR10, VAR11, VAR15, VAR16, VAR17);
            FUN1(VAR57)
            (VAR5 + VAR27, VAR6, VAR9, VAR10, VAR11, VAR15, VAR16, VAR17);
        }
        else
        {
            int VAR58;
            uint64_t VAR59 FUN3((FUN4(8)));
            if (VAR13)
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
                             "" VAR64 "" VAR64 "" FUNNY_UV_CODE FUNNY_UV_CODE FUNNY_UV_CODE VAR67 "" VAR64 "" VAR64 ""
                             "" VAR61 ""
                             "" VAR62 ""
                             "" FUN5(VAR68) "" VAR62 "" VAR65 "" VAR61 "" VAR65 "" VAR61 "" VAR65 "" VAR61 "" FUNNY_UV_CODE FUNNY_UV_CODE FUNNY_UV_CODE VAR67 "" VAR60 ""
                             :
                             : ""(VAR8), ""(VAR5), ""(VAR21), ""(VAR23), ""(VAR18), ""(VAR9), ""(VAR59)
                             : "" VAR64, "" VAR61, "" VAR63, "" VAR66, "" VAR62, "" VAR60);
                for (VAR58 = VAR6 - 1; (VAR58 * VAR11) >> 16 >= VAR10 - 1; VAR58--)
                {
                    VAR5[VAR58] = VAR8[VAR10 - 1] * 128;
                    VAR5[VAR58 + VAR27] = VAR9[VAR10 - 1] * 128;
                }
            }
            else
            {
                long VAR69 = (long)(VAR11 >> 16);
                uint16_t VAR70 = VAR11 & 0xffff;
                asm volatile("" VAR64 "" VAR64 ""
                             "" VAR63 "" VAR63 ""
                             "" FUN6(4) ""
                                                                                       "" VAR66 ""
                                                                                       "" VAR66 "" VAR63 ""
                                                                                       "" VAR66 "" VAR63 ""
                                                                                       ""
                                                                                       ""
                                                                                       ""
                                                                                       ""
                                                                                       "" VAR62 ""
                                                                                       ""
                                                                                       "" VAR62 "" VAR64 ""
                                                                                       "" VAR63 ""
                                                                                       "" VAR63 ""
                                                                                       ""
                                                                                       ""
                                                                                       ""
                                                                                       ""
                                                                                       "" VAR62 ""
                                                                                       ""
                                                                                       "" FUN5(VAR68) "" VAR62 "" VAR64 ""
                                                                                                                           ""
                                                                                                                           "" VAR63 ""
                                                                                                                           "" VAR64 ""
                                                                                                                           "" VAR64 ""
                                                                                                                           ""
                             :
                             : ""(VAR8), ""(VAR5), ""((long)VAR6), ""(VAR69), ""(VAR70),
                             :
                             : ""(VAR8), ""(VAR5), ""((long)VAR6), ""(VAR69), ""(VAR70), ""(VAR9)
                             : "" VAR64, "" VAR63, "", "" VAR62, "");
            }
            int VAR58;
            unsigned int VAR71 = 0;
            for (VAR58 = 0; VAR58 < VAR6; VAR58++)
            {
                register unsigned int VAR72 = VAR71 >> 16;
                register unsigned int VAR73 = (VAR71 & 0xFFFF) >> 9;
                VAR5[VAR58] = (VAR8[VAR72] * (VAR73 ^ 127) + VAR8[VAR72 + 1] * VAR73);
                VAR5[VAR58 + VAR27] = (VAR9[VAR72] * (VAR73 ^ 127) + VAR9[VAR72 + 1] * VAR73);
                VAR71 += VAR11;
            }
        }
    if (VAR3->VAR74 != VAR3->VAR75 && !(FUN7(VAR3->VAR76) || FUN8(VAR3->VAR76)))
    {
        int VAR58;
        if (VAR3->VAR74)
        {
            for (VAR58 = 0; VAR58 < VAR6; VAR58++)
            {
                VAR5[VAR58] = (VAR5[VAR58] * 1799 + 4081085) >> 11;
                VAR5[VAR58 + VAR27] = (VAR5[VAR58 + VAR27] * 1799 + 4081085) >> 11;
            }
        }
        else
        {
            for (VAR58 = 0; VAR58 < VAR6; VAR58++)
            {
                VAR5[VAR58] = (VAR5[VAR58] * 4663 - 9289992) >> 12;
                VAR5[VAR58 + VAR27] = (VAR5[VAR58 + VAR27] * 4663 - 9289992) >> 12;
            }
        }
    }
}