static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6, long VAR7, const VAR8 *VAR9, const VAR8 *VAR10, int VAR11, int VAR12)
{
    VAR13 *VAR14 = VAR3->VAR15;
    VAR4 *VAR16 = VAR3->VAR17;
    int VAR18 = VAR3->VAR18;
    void *VAR19 = VAR3->VAR20;
    int VAR21;
    FUN2(8, VAR22, VAR23);
    VAR24 volatile("" VAR25 ""
                     ""
                     "" VAR26 ""
                     "" VAR27 ""
                     "" VAR28 ""
                     "" VAR25 ""
                     "" VAR29 "" VAR29 "" VAR30 "" VAR26 "" VAR30 "" VAR26 "" VAR30 "" VAR26 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR31 "" VAR29 "" VAR29 ""
                     "" VAR26 ""
                     "" VAR27 "" VAR30 "" VAR26 "" VAR30 "" VAR26 "" VAR30 "" VAR26 "" CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE CALL_MMX2_FILTER_CODE VAR31 "" VAR25 ""
                     :
                     : ""(VAR9), ""(VAR5), ""(VAR16), ""(VAR14), ""(VAR19), ""(VAR10), ""(VAR6), ""(VAR23)
                     : "" VAR29, "" VAR26, "" VAR28, "" VAR32, "" VAR27, "" VAR25);
    for (VAR21 = VAR7 - 1; (VAR21 * VAR12) >> 16 >= VAR11 - 1; VAR21--)
    {
        VAR5[VAR21] = VAR9[VAR11 - 1] * 128;
        VAR6[VAR21] = VAR10[VAR11 - 1] * 128;
    }
}