static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, const VAR4 *VAR8, const VAR4 *VAR9, const VAR4 *VAR10, const VAR4 *VAR11, const VAR4 *VAR12, VAR13 *VAR14, int VAR15, int VAR16, int VAR17, int VAR18)
{
    x86_reg VAR19 = VAR3->VAR19 << 1;
    VAR20 volatile("" VAR21 "" VAR22 ""
                     "" VAR21 ""
                     "" VAR23 "" FUN2(% % VAR24, % 5, % 6) FUN3(% % VAR25, 8280(% 5), % % VAR24) "" VAR23 ""
                                                                                                                                                     "" VAR22 "" VAR21 ""
                     :
                     : ""(VAR5), ""(VAR6), ""(VAR7), ""(VAR8), ""(VAR14), ""(&VAR3->VAR26), ""(VAR19));
}