static inline void FUN1(VAR1)(const VAR2 *VAR3, const VAR2 *VAR4, const VAR2 *VAR5, VAR2 *VAR6, long VAR7, long VAR8, long VAR9, long VAR10, long VAR11, long VAR12)
{
    long VAR13;
    const x86_reg VAR14 = VAR7 >> 1;
    for (VAR13 = 0; VAR13 < VAR8; VAR13++)
    {
        VAR15 volatile("" VAR16 "" VAR16 ""
                         ""
                         "" VAR17 "" VAR16 "" VAR17 "" VAR16 "" VAR17 "" VAR16 ""
                         "" VAR16 ""
                         ""
                         "" VAR16 ""
                         ""
                         ""
                         "" VAR16 ""
                         "" VAR16 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR18 "" VAR16 "" VAR18 "" VAR16 "" VAR18 "" VAR16 "" VAR18 "" VAR16 ""
                         "" VAR16 ""
                         "" VAR16 ""
                         ""
                         :
                         : ""(VAR6), ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR14)
                         : "" VAR16);
        if ((VAR13 & (VAR12 - 1)) == VAR12 - 1)
        {
            VAR4 += VAR10;
            VAR5 += VAR10;
        }
        VAR3 += VAR9;
        VAR6 += VAR11;
    }
    FUN2(VAR19 "" VAR20 ""
            :
            :
            : "");
}