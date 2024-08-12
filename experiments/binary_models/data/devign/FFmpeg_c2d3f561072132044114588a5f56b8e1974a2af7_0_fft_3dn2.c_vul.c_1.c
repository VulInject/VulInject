void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5)
{
    x86_reg VAR6, VAR7;
    long VAR8 = VAR2->VAR9;
    long VAR10 = VAR8 >> 1;
    long VAR11 = VAR8 >> 2;
    long VAR12 = VAR8 >> 3;
    const VAR13 *VAR14 = VAR2->VAR14;
    const VAR3 *VAR15 = VAR2->VAR15;
    const VAR3 *VAR16 = VAR2->VAR16;
    const VAR3 *VAR17, *VAR18;
    VAR19 *VAR20 = (VAR19 *)VAR4;
    VAR17 = VAR5;
    VAR18 = VAR5 + VAR10 - 1;
    VAR21 volatile(""
                     :
                     : ""(1 << 31));
    for (VAR7 = 0; VAR7 < VAR11; VAR7++)
    {
        VAR21 volatile(""
                         ""
                         ""
                         ""
                         "" FUN2(% % VAR22, % % VAR23) ""
                                                                              ""
                                                                              ""
                                                                              ""
                                                                              ""
                                                                              ""
                                                                              ""
                                                                              ""
                         :
                         : ""(VAR18[-2 * VAR7]), ""(VAR17[2 * VAR7]), ""(VAR15[VAR7]), ""(VAR16[VAR7]));
        VAR21 volatile(""
                         : ""(VAR20[VAR14[VAR7]]));
    }
    FUN3(VAR20, VAR2->VAR24);
    "" #VAR6 ""
    "" #VAR6 "" #VAR25 ""
    "" #VAR22 ""
    "" #VAR25 ""
    "" #VAR6 ""
    "" #VAR6 "" #VAR25 ""
    "" #VAR6 "" #VAR22 ""
    "" #VAR6 ""
    "" #VAR25 ""
    "" #VAR22 "" VAR6 = -VAR10;
    VAR7 = VAR10 - 8;
    VAR21 volatile("" FUN4(% 0, % % VAR25, % % VAR22) FUN4(% 1, % % VAR26, % % VAR23) ""
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
                                                                                     ""
                                                                                     ""
                     : ""(VAR6), ""(VAR7)
                     : ""(VAR20 + VAR12), ""(VAR15 + VAR12), ""(VAR16 + VAR12)
                     : "");
    VAR21 volatile("");
}