static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR4 **VAR6, int VAR7, VAR4 *VAR8, VAR4 **VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14)
{
    int VAR15 = 0;
    switch (VAR3->VAR16)
    {
    case VAR17:
    {
        asm volatile(VAR18 FUN2(% 4, % 5, % % VAR19)
                     :
                     : ""(&VAR3->VAR20), ""(VAR15), ""(VAR15), ""(VAR15), ""(VAR12), ""(VAR13)
                     : "" VAR21, "" VAR22, "" VAR23);
    }
    break;
    case VAR24:
    {
        asm volatile(VAR18 "" VAR21 "" VAR21 "" VAR25 ""
                                    "" VAR25 "" FUN3(% % VAR26, % 5, % % VAR19)
                     :
                     : ""(&VAR3->VAR20), ""(VAR15), ""(VAR15), ""(VAR15), ""(VAR12), ""(VAR13)
                     : "" VAR21, "" VAR25, "" VAR22, "" VAR23);
    }
    break;
    case VAR27:
    {
        asm volatile(VAR18 "" FUN4(VAR28) ""
                                                                "" FUN4(VAR29) ""
                                                                                            "" FUN4(VAR30) "" FUN5(% 4, % 5, % % VAR19)
                     :
                     : ""(&VAR3->VAR20), ""(VAR15), ""(VAR15), ""(VAR15), ""(VAR12), ""(VAR13)
                     : "" VAR21, "" VAR22, "" VAR23);
    }
    break;
    case VAR31:
    {
        asm volatile(VAR18 "" FUN4(VAR28) ""
                                                                "" FUN4(VAR32) ""
                                                                                            "" FUN4(VAR30) "" FUN6(% 4, % 5, % % VAR19)
                     :
                     : ""(&VAR3->VAR20), ""(VAR15), ""(VAR15), ""(VAR15), ""(VAR12), ""(VAR13)
                     : "" VAR21, "" VAR22, "" VAR23);
    }
    break;
    case VAR33:
    {
        asm volatile(VAR34 ""
                                       ""
                                       ""
                                       "" FUN7(% 4, % 5, % % VAR19)
                     :
                     : ""(&VAR3->VAR20), ""(VAR15), ""(VAR15), ""(VAR15), ""(VAR12), ""(VAR13)
                     : "" VAR21, "" VAR22, "" VAR23);
    }
    break;
    default:
        if (VAR3->VAR16 == VAR35 || VAR3->VAR16 == VAR36 || VAR3->VAR16 == VAR24 || VAR3->VAR16 == VAR37 || VAR3->VAR16 == VAR38 || VAR3->VAR16 == VAR39)
            FUN8(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
        else
            FUN9(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
        break;
    }
}