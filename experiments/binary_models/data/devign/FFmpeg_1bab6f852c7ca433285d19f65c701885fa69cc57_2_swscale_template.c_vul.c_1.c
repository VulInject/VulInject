static void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6[2], const VAR4 *VAR7[2], const VAR4 *VAR8, VAR9 *VAR10, int VAR11, int VAR12, int VAR13)
{
    const VAR4 *VAR14 = VAR6[0], *VAR15 = VAR6[1];
    const VAR4 *VAR16 = VAR5;
    if (VAR12 < 2048)
    {
        VAR17 volatile("" VAR18 "" VAR19 ""
                         "" VAR18 ""
                         "" VAR20 "" FUN2(% % VAR21, % 5) "" FUN3(% % VAR22, 8280(% 5), % % VAR21) "" VAR20 ""
                                                                                                                                                                                                 "" VAR19 "" VAR18 ""
                         :
                         : ""(VAR5), ""(VAR16), ""(VAR14), ""(VAR15), ""(VAR10), ""(&VAR3->VAR23));
    }
    else
    {
        VAR17 volatile("" VAR18 "" VAR19 ""
                         "" VAR18 ""
                         "" VAR20 "" FUN4(% % VAR21, % 5) "" FUN3(% % VAR22, 8280(% 5), % % VAR21) "" VAR20 ""
                                                                                                                                                                                                  "" VAR19 "" VAR18 ""
                         :
                         : ""(VAR5), ""(VAR16), ""(VAR14), ""(VAR15), ""(VAR10), ""(&VAR3->VAR23));
    }
}