static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6, int VAR7, const VAR8 *VAR9, const VAR8 *VAR10, int VAR11, int VAR12)
{
    VAR4 *VAR13 = VAR3->VAR14;
    VAR4 *VAR15 = VAR3->VAR16;
    void *VAR17 = VAR3->VAR18;
    int VAR19;
    FUN2(8, VAR20, VAR21);
    VAR22 volatile("" VAR23 ""
                     ""
                     "" VAR24 ""
                     "" VAR25 ""
                     "" VAR26 ""
                     "" VAR23 ""
                     "" VAR27 "" VAR27 "" VAR28 "" VAR24 "" VAR28 "" VAR24 "" VAR28 "" VAR24 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR29 "" VAR27 "" VAR27 ""
                     "" VAR24 ""
                     "" VAR25 "" VAR28 "" VAR24 "" VAR28 "" VAR24 "" VAR28 "" VAR24 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR29 "" VAR23 ""
                     :
                     : ""(VAR9), ""(VAR5), ""(VAR15), ""(VAR13), ""(VAR17), ""(VAR10), ""(VAR6), ""(VAR21)
                     : "" VAR27, "" VAR24, "" VAR26, "" VAR30, "" VAR25, "" VAR23);
    for (VAR19 = VAR7 - 1; (VAR19 * VAR12) >> 16 >= VAR11 - 1; VAR19--)
    {
        VAR5[VAR19] = VAR9[VAR11 - 1] * 128;
        VAR6[VAR19] = VAR10[VAR11 - 1] * 128;
    }
}