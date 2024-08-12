static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR3->VAR13;
    VAR4 *VAR14 = VAR3->VAR15;
    int VAR16 = VAR3->VAR16;
    void *VAR17 = VAR3->VAR18;
    int VAR19;
    FUN2(8, VAR20, VAR21);
    if (VAR16)
    {
        VAR22 volatile("" VAR23 ""
                         ""
                         "" VAR24 ""
                         "" VAR25 ""
                         "" VAR26 ""
                         "" VAR23 ""
                         "" VAR27 "" VAR27 "" VAR28 "" VAR24 "" VAR28 "" VAR24 "" VAR28 "" VAR24 ""
                         "" VAR23 ""
                         ""
                         "" VAR23 "" VAR27 ""
                         "" VAR29 "" VAR24 ""
                         "" VAR27 "" VAR25 ""
                         "" VAR27 "" VAR27 ""
                         "" VAR23 ""
                         ""
                         "" VAR23 "" VAR27 "" VAR24 ""
                         "" VAR27 "" VAR25 ""
                         "" VAR27 "" VAR27 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR30 "" VAR23 ""
                         :
                         : ""(VAR8), ""(VAR5), ""(VAR14), ""(VAR12), ""(VAR17), ""(VAR21)
                         : "" VAR27, "" VAR24, "" VAR26, "" VAR29, "" VAR25, "" VAR23);
        for (VAR19 = VAR6 - 1; (VAR19 * VAR10) >> 16 >= VAR9 - 1; VAR19--)
            VAR5[VAR19] = VAR8[VAR9 - 1] * 128;
    }
    else
    {
        x86_reg VAR31 = VAR6;
        x86_reg VAR32 = VAR10 >> 16;
        uint16_t VAR33 = VAR10 & 0xffff;
        VAR22 volatile("" VAR27 "" VAR27 ""
                         "" VAR26 "" VAR26 ""
                         "" FUN3(4) ""
                                                                                "" VAR26 ""
                                                                                "" VAR26 "" VAR34 "" VAR25 "" VAR27 ""
                                                                                ""
                                                                                "" VAR26 ""
                                                                                "" VAR26 ""
                                                                                "" VAR26 "" VAR34 "" VAR25 "" VAR27 ""
                                                                                ""
                                                                                "" VAR26 ""
                                                                                "" VAR27 ""
                                                                                "" VAR27 ""
                                                                                ""
                         :
                         : ""(VAR8), ""(VAR5), ""(VAR31), ""(VAR32), ""(VAR33)
                         : "" VAR27, "" VAR26, "", "" VAR25, "");
    }
    int VAR19;
    unsigned int VAR35 = 0;
    for (VAR19 = 0; VAR19 < VAR6; VAR19++)
    {
        register unsigned int VAR36 = VAR35 >> 16;
        register unsigned int VAR37 = (VAR35 & 0xFFFF) >> 9;
        VAR5[VAR19] = (VAR8[VAR36] << 7) + (VAR8[VAR36 + 1] - VAR8[VAR36]) * VAR37;
        VAR35 += VAR10;
    }
}