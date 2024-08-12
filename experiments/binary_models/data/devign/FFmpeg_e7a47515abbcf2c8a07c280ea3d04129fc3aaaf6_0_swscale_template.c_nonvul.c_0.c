inline static void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, const VAR7 *VAR8, const VAR7 *VAR9, int VAR10, int VAR11, int VAR12, const VAR13 *VAR14, const VAR13 *VAR15, int VAR16, enum PixelFormat VAR17, VAR7 *VAR18, VAR19 *VAR20)
{
    int32_t VAR21 *VAR22 = VAR3->VAR23;
    int16_t VAR21 *VAR24 = VAR3->VAR25;
    int av_unused VAR26 = VAR3->VAR26;
    void VAR21 *VAR27 = VAR3->VAR28;
    VAR8 += VAR3->VAR29;
    VAR9 += VAR3->VAR29;
    if (VAR3->VAR30)
    {
        VAR3->FUN2(VAR18, VAR18 + VAR31, VAR8, VAR9, VAR10, VAR20);
        VAR8 = VAR18;
        VAR9 = VAR18 + VAR31;
    }
    if (!VAR3->VAR32)
    {
        VAR3->FUN3(VAR5, VAR6, VAR8, VAR10, VAR11, VAR14, VAR15, VAR16);
        VAR3->FUN3(VAR5 + VAR31, VAR6, VAR9, VAR10, VAR11, VAR14, VAR15, VAR16);
    }
    else
    {
        int VAR33;
        FUN4(8, VAR34, VAR35);
        if (VAR26)
        {
            VAR36 volatile("" VAR37 ""
                             ""
                             "" VAR38 ""
                             "" VAR39 ""
                             "" VAR40 ""
                             "" VAR37 ""
                             "" VAR41 "" VAR41 "" VAR42 "" VAR38 "" VAR42 "" VAR38 "" VAR42 "" VAR38 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR43 "" VAR41 "" VAR41 ""
                             "" VAR38 ""
                             "" VAR39 ""
                             "" FUN5(VAR44) "" VAR39 "" VAR42 "" VAR38 "" VAR42 "" VAR38 "" VAR42 "" VAR38 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR43 "" VAR37 ""
                             :
                             : ""(VAR8), ""(VAR5), ""(VAR24), ""(VAR22), ""(VAR27), ""(VAR9), ""(VAR35)
                             : "" VAR41, "" VAR38, "" VAR40, "" VAR45, "" VAR39, "" VAR37);
            for (VAR33 = VAR6 - 1; (VAR33 * VAR11) >> 16 >= VAR10 - 1; VAR33--)
            {
                VAR5[VAR33] = VAR8[VAR10 - 1] * 128;
                VAR5[VAR33 + VAR31] = VAR9[VAR10 - 1] * 128;
            }
        }
        else
        {
            x86_reg VAR46 = (VAR47)(VAR11 >> 16);
            uint16_t VAR48 = VAR11 & 0xffff;
            VAR36 volatile("" VAR41 "" VAR41 ""
                             "" VAR40 "" VAR40 ""
                             "" FUN6(4) ""
                                                                                       "" VAR45 ""
                                                                                       "" VAR45 "" VAR40 ""
                                                                                       "" VAR45 "" VAR40 "" VAR49 "" VAR39 "" VAR41 ""
                                                                                       "" VAR40 ""
                                                                                       "" VAR40 "" VAR49 "" FUN5(VAR44) "" VAR39 "" VAR41 ""
                                                                                                                                                                                             ""
                                                                                                                                                                                             "" VAR40 ""
                                                                                                                                                                                             "" VAR41 ""
                                                                                                                                                                                             "" VAR41 ""
                                                                                                                                                                                             ""
                             :
                             : ""(VAR8), ""(VAR5), ""(VAR6), ""(VAR46), ""(VAR48),
                             :
                             : ""(VAR8), ""(VAR5), ""(VAR6), ""(VAR46), ""(VAR48), ""(VAR9)
                             : "" VAR41, "" VAR40, "", "" VAR39, "");
        }
        VAR3->FUN7(VAR3, VAR5, VAR6, VAR8, VAR9, VAR10, VAR11);
    }
    if (VAR3->VAR50)
        VAR3->FUN8(VAR5, VAR6);
}