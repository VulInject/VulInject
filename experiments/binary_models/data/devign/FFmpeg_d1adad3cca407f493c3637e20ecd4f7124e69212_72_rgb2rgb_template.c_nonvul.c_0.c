static inline void FUN1(VAR1)(const VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6, long VAR7, long VAR8, long VAR9, long VAR10, long VAR11)
{
    long VAR12;
    const x86_reg VAR13 = VAR7 >> 1;
    for (VAR12 = 0; VAR12 < VAR8; VAR12 += 2)
    {
        VAR14 volatile("" VAR15 "" VAR15 ""
                         ""
                         ""
                         ""
                         "" VAR16 "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR17 "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR17 "" VAR15 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR17 "" VAR15 "" VAR17 "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         :
                         : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6), ""(VAR13)
                         : "", "" VAR15);
        VAR4 += VAR9;
        VAR3 += VAR11;
        VAR14 volatile("" VAR15 "" VAR15 ""
                         ""
                         "" VAR16 "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR17 "" VAR15 "" VAR17 "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         :
                         : ""(VAR3), ""(VAR4), ""(VAR5), ""(VAR6), ""(VAR13)
                         : "", "" VAR15);
        VAR5 += VAR10;
        VAR6 += VAR10;
        VAR4 += VAR9;
        VAR3 += VAR11;
    }
    VAR14 volatile(VAR18 "" VAR19 ""
                     :
                     :
                     : "");
}