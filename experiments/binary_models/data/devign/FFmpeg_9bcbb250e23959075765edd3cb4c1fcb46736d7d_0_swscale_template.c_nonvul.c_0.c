static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    VAR4 *VAR11 = VAR3->VAR12;
    VAR4 *VAR13 = VAR3->VAR14;
    void *VAR15 = VAR3->VAR16;
    int VAR17;
    FUN2(8, VAR18, VAR19);
    VAR20 volatile("" VAR21 ""
                     ""
                     "" VAR22 ""
                     "" VAR23 ""
                     "" VAR24 ""
                     "" VAR21 ""
                     "" VAR25 "" VAR25 "" VAR26 "" VAR22 "" VAR26 "" VAR22 "" VAR26 "" VAR22 ""
                     "" VAR21 ""
                     ""
                     "" VAR21 "" VAR25 ""
                     "" VAR27 "" VAR22 ""
                     "" VAR25 "" VAR23 ""
                     "" VAR25 "" VAR25 ""
                     "" VAR21 ""
                     ""
                     "" VAR21 "" VAR25 "" VAR22 ""
                     "" VAR25 "" VAR23 ""
                     "" VAR25 "" VAR25 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR28 "" VAR21 ""
                     :
                     : ""(VAR8), ""(VAR5), ""(VAR13), ""(VAR11), ""(VAR15), ""(VAR19)
                     : "" VAR25, "" VAR22, "" VAR24, "" VAR27, "" VAR23, "" VAR21);
    for (VAR17 = VAR6 - 1; (VAR17 * VAR10) >> 16 >= VAR9 - 1; VAR17--)
        VAR5[VAR17] = VAR8[VAR9 - 1] * 128;
}