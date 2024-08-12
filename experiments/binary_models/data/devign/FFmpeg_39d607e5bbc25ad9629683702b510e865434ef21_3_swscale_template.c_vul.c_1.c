static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR3->VAR13;
    VAR4 *VAR14 = VAR3->VAR15;
    int VAR16 = VAR3->VAR16;
    void *VAR17 = VAR3->VAR18;
    int VAR19;
    FUN2(8, VAR20, VAR21);
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