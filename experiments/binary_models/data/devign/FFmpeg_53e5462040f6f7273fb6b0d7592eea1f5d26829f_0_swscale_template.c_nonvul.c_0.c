inline static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, const VAR7 *VAR8, const VAR7 *VAR9, int VAR10, int VAR11, int VAR12, const VAR13 *VAR14, const VAR13 *VAR15, int VAR16, int VAR17, VAR7 *VAR18, VAR19 *VAR20)
{
    int32_t VAR21 *VAR22 = VAR3->VAR23;
    int16_t VAR21 *VAR24 = VAR3->VAR25;
    int av_unused VAR26 = VAR3->VAR26;
    void VAR21 *VAR27 = VAR3->VAR28;
    if (FUN2(VAR17) || VAR17 == VAR29 || VAR17 == VAR30)
        return;
    if (VAR17 == VAR31 || VAR17 == VAR32)
    {
        VAR8 += VAR33;
        VAR9 += VAR33;
    }
    if (VAR17 == VAR34)
    {
        VAR8++;
        VAR9++;
    }
    if (VAR3->VAR35)
    {
        VAR3->FUN3(VAR18, VAR18 + VAR36, VAR8, VAR9, VAR10, VAR20);
        VAR8 = VAR18;
        VAR9 = VAR18 + VAR36;
    }
    if (!(VAR12 & VAR37) || (!VAR26))
        if (!(VAR12 & VAR37))
        {
            VAR3->FUN4(VAR5, VAR6, VAR8, VAR10, VAR11, VAR14, VAR15, VAR16);
            VAR3->FUN4(VAR5 + VAR36, VAR6, VAR9, VAR10, VAR11, VAR14, VAR15, VAR16);
        }
        else
        {
            int VAR38;
            FUN5(8, VAR39, VAR40);
            if (VAR26)
            {
                VAR41 volatile("" VAR42 ""
                                 ""
                                 "" VAR43 ""
                                 "" VAR44 ""
                                 "" VAR45 ""
                                 "" VAR42 ""
                                 "" VAR46 "" VAR46 "" VAR47 "" VAR43 "" VAR47 "" VAR43 "" VAR47 "" VAR43 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR48 "" VAR46 "" VAR46 ""
                                 "" VAR43 ""
                                 "" VAR44 ""
                                 "" FUN6(VAR49) "" VAR44 "" VAR47 "" VAR43 "" VAR47 "" VAR43 "" VAR47 "" VAR43 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR48 "" VAR42 ""
                                 :
                                 : ""(VAR8), ""(VAR5), ""(VAR24), ""(VAR22), ""(VAR27), ""(VAR9), ""(VAR40)
                                 : "" VAR46, "" VAR43, "" VAR45, "" VAR50, "" VAR44, "" VAR42);
                for (VAR38 = VAR6 - 1; (VAR38 * VAR11) >> 16 >= VAR10 - 1; VAR38--)
                {
                    VAR5[VAR38] = VAR8[VAR10 - 1] * 128;
                    VAR5[VAR38 + VAR36] = VAR9[VAR10 - 1] * 128;
                }
            }
            else
            {
                x86_reg VAR51 = (VAR52)(VAR11 >> 16);
                uint16_t VAR53 = VAR11 & 0xffff;
                VAR41 volatile("" VAR46 "" VAR46 ""
                                 "" VAR45 "" VAR45 ""
                                 "" FUN7(4) ""
                                                                                           "" VAR50 ""
                                                                                           "" VAR50 "" VAR45 ""
                                                                                           "" VAR50 "" VAR45 "" VAR54 "" VAR44 "" VAR46 ""
                                                                                           "" VAR45 ""
                                                                                           "" VAR45 "" VAR54 "" FUN6(VAR49) "" VAR44 "" VAR46 ""
                                                                                                                                                                                                 ""
                                                                                                                                                                                                 "" VAR45 ""
                                                                                                                                                                                                 "" VAR46 ""
                                                                                                                                                                                                 "" VAR46 ""
                                                                                                                                                                                                 ""
                                 :
                                 : ""(VAR8), ""(VAR5), ""(VAR6), ""(VAR51), ""(VAR53),
                                 :
                                 : ""(VAR8), ""(VAR5), ""(VAR6), ""(VAR51), ""(VAR53), ""(VAR9)
                                 : "" VAR46, "" VAR45, "", "" VAR44, "");
            }
            VAR3->FUN8(VAR3, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11);
        }
    if (VAR3->VAR55 != VAR3->VAR56 && !(FUN9(VAR3->VAR57) || FUN10(VAR3->VAR57)))
    {
        int VAR38;
        if (VAR3->VAR55)
        {
            for (VAR38 = 0; VAR38 < VAR6; VAR38++)
            {
                VAR5[VAR38] = (VAR5[VAR38] * 1799 + 4081085) >> 11;
                VAR5[VAR38 + VAR36] = (VAR5[VAR38 + VAR36] * 1799 + 4081085) >> 11;
            }
        }
        else
        {
            for (VAR38 = 0; VAR38 < VAR6; VAR38++)
            {
                VAR5[VAR38] = (FUN11(VAR5[VAR38], 30775) * 4663 - 9289992) >> 12;
                VAR5[VAR38 + VAR36] = (FUN11(VAR5[VAR38 + VAR36], 30775) * 4663 - 9289992) >> 12;
            }
        }
    }
}