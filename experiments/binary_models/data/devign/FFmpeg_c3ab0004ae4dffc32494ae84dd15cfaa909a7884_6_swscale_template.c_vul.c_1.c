static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6, const VAR7 *VAR8, const VAR7 *VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR3->VAR14;
    VAR4 *VAR15 = VAR3->VAR16;
    int VAR17 = VAR3->VAR17;
    void *VAR18 = VAR3->VAR19;
    int VAR20;
    FUN2(8, VAR21, VAR22);
    if (VAR17)
    {
        VAR23 volatile("" VAR24 ""
                         ""
                         "" VAR25 ""
                         "" VAR26 ""
                         "" VAR27 ""
                         "" VAR24 ""
                         "" VAR28 "" VAR28 "" VAR29 "" VAR25 "" VAR29 "" VAR25 "" VAR29 "" VAR25 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR30 "" VAR28 "" VAR28 ""
                         "" VAR25 ""
                         "" VAR26 ""
                         "" FUN3(VAR31) "" VAR26 "" VAR29 "" VAR25 "" VAR29 "" VAR25 "" VAR29 "" VAR25 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR30 "" VAR24 ""
                         :
                         : ""(VAR8), ""(VAR5), ""(VAR15), ""(VAR13), ""(VAR18), ""(VAR9), ""(VAR22)
                         : "" VAR28, "" VAR25, "" VAR27, "" VAR32, "" VAR26, "" VAR24);
        for (VAR20 = VAR6 - 1; (VAR20 * VAR11) >> 16 >= VAR10 - 1; VAR20--)
        {
            VAR5[VAR20] = VAR8[VAR10 - 1] * 128;
            VAR5[VAR20 + VAR33] = VAR9[VAR10 - 1] * 128;
        }
    }
    else
    {
        x86_reg VAR34 = VAR6;
        x86_reg VAR35 = (VAR36)(VAR11 >> 16);
        uint16_t VAR37 = VAR11 & 0xffff;
        VAR23 volatile("" VAR28 "" VAR28 ""
                         "" VAR27 "" VAR27 ""
                         "" FUN4(4) ""
                                                                                   "" VAR32 ""
                                                                                   "" VAR32 "" VAR27 ""
                                                                                   "" VAR32 "" VAR27 "" VAR38 "" VAR26 "" VAR28 ""
                                                                                   "" VAR27 ""
                                                                                   "" VAR27 "" VAR38 "" FUN3(VAR31) "" VAR26 "" VAR28 ""
                                                                                                                                                                                         ""
                                                                                                                                                                                         "" VAR27 ""
                                                                                                                                                                                         "" VAR28 ""
                                                                                                                                                                                         "" VAR28 ""
                                                                                                                                                                                         ""
                         :
                         : ""(VAR8), ""(VAR5), ""(VAR34), ""(VAR35), ""(VAR37),
                         :
                         : ""(VAR8), ""(VAR5), ""(VAR34), ""(VAR35), ""(VAR37), ""(VAR9)
                         : "" VAR28, "" VAR27, "", "" VAR26, "");
    }
    int VAR20;
    unsigned int VAR39 = 0;
    for (VAR20 = 0; VAR20 < VAR6; VAR20++)
    {
        register unsigned int VAR40 = VAR39 >> 16;
        register unsigned int VAR41 = (VAR39 & 0xFFFF) >> 9;
        VAR5[VAR20] = (VAR8[VAR40] * (VAR41 ^ 127) + VAR8[VAR40 + 1] * VAR41);
        VAR5[VAR20 + VAR33] = (VAR9[VAR40] * (VAR41 ^ 127) + VAR9[VAR40 + 1] * VAR41);
        VAR39 += VAR11;
    }
}