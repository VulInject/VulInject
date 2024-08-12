static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4, const VAR5 *VAR6, int VAR7, int VAR8, const VAR2 *VAR9, const VAR2 *VAR10, long VAR11)
{
    assert(VAR11 % 4 == 0 && VAR11 > 0);
    if (VAR11 == 4)
    {
        x86_reg VAR12 = -2 * VAR4;
        VAR9 -= VAR12 * 2;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        VAR13 volatile("" VAR14 ""
                         ""
                         "" VAR15 ""
                         "" VAR16 "" VAR15 ""
                         ""
                         ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR16 ""
                         "" VAR14 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         "" VAR15 ""
                         "" VAR14 ""
                         : ""(VAR12)
                         : ""(VAR9), ""(VAR10), ""(VAR6), ""(VAR3)
                         : "" VAR14);
    }
    else if (VAR11 == 8)
    {
        x86_reg VAR12 = -2 * VAR4;
        VAR9 -= VAR12 * 4;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        VAR13 volatile("" VAR14 ""
                         ""
                         "" VAR15 ""
                         "" VAR16 "" VAR15 ""
                         ""
                         ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR16 ""
                         "" VAR14 ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR15 ""
                         "" VAR15 ""
                         "" VAR16 ""
                         "" VAR14 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR15 ""
                         "" VAR15 ""
                         ""
                         "" VAR15 ""
                         "" VAR14 ""
                         : ""(VAR12)
                         : ""(VAR9), ""(VAR10), ""(VAR6), ""(VAR3)
                         : "" VAR14);
    }
    else
    {
        const VAR5 *VAR17 = VAR6 + VAR11;
        x86_reg VAR12 = -2 * VAR4;
        VAR10 -= VAR12 / 2;
        VAR3 -= VAR12 / 2;
        VAR13 volatile(""
                         ""
                         ""
                         "" VAR18 ""
                         "" VAR18 ""
                         "" VAR18 ""
                         "" VAR18 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR18 "" VAR16 ""
                         "" VAR18 "" VAR19 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR18 ""
                         "" VAR18 ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         "" VAR16 ""
                         "" VAR16 ""
                         ""
                         ""
                         : ""(VAR12), ""(VAR9)
                         : ""(VAR10), ""(VAR3), ""(VAR17), ""(VAR6), ""((VAR20)VAR11 * 2)
                         : "" VAR16, "" VAR18, "" VAR19);
    }
}