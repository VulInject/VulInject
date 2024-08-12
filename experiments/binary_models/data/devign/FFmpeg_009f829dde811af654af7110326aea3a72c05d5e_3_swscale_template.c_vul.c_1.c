static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, const VAR4 *VAR8, const VAR4 *VAR9, const VAR4 *VAR10, VAR11 *VAR12, int VAR13, int VAR14, enum PixelFormat VAR15, int VAR16, int VAR17)
{
    x86_reg VAR18 = VAR3->VAR18 << 1;
    const VAR4 *VAR19 = VAR5;
    if (VAR14 < 2048)
    {
        VAR20 volatile("" VAR21 "" VAR22 ""
                         "" VAR21 ""
                         "" VAR23 "" FUN2(% % VAR24, % 5, % 6) FUN3(% % VAR25, 8280(% 5), % % VAR24) "" VAR23 ""
                                                                                                                                                          "" VAR22 "" VAR21 ""
                         :
                         : ""(VAR5), ""(VAR19), ""(VAR6), ""(VAR7), ""(VAR12), ""(&VAR3->VAR26), ""(VAR18));
    }
    else
    {
        VAR20 volatile("" VAR21 "" VAR22 ""
                         "" VAR21 ""
                         "" VAR23 "" FUN4(% % VAR24, % 5, % 6) FUN3(% % VAR25, 8280(% 5), % % VAR24) "" VAR23 ""
                                                                                                                                                           "" VAR22 "" VAR21 ""
                         :
                         : ""(VAR5), ""(VAR19), ""(VAR6), ""(VAR7), ""(VAR12), ""(&VAR3->VAR26), ""(VAR18));
    }
}