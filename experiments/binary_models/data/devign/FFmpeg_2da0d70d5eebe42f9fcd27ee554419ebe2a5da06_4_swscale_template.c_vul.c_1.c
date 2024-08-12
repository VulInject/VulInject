static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR4 **VAR6, int VAR7, VAR4 *VAR8, VAR4 **VAR9, int VAR10, VAR11 *VAR12, long VAR13, long VAR14)
{
    long VAR15 = 0;
    if (VAR3->VAR16 & VAR17)
    {
        switch (VAR3->VAR18)
        {
        case VAR19:
            YSCALEYUV2PACKEDX_ACCURATE VAR20 FUN2(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        case VAR22: YSCALEYUV2PACKEDX_ACCURATE VAR20 "" VAR23 "" VAR23 "" VAR24 "" "" VAR24 "" FUN3 ( % % VAR25 , % 5 , % % VAR21 ) : : "" ( & VAR3 -> VAR26 ) , "" ( VAR15 ) , "" ( VAR15 ) , "" ( VAR15 ) , "" ( VAR12 ) , "" ( VAR13 ) : "" VAR23 , "" VAR24 , "" VAR27 , "" VAR28 ) ;
            return;
        case VAR29:
            YSCALEYUV2PACKEDX_ACCURATE VAR20 "" FUN4(VAR30) ""
                                                                                  "" FUN4(VAR31) ""
                                                                                                              "" FUN4(VAR32) "" FUN5(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        case VAR33:
            YSCALEYUV2PACKEDX_ACCURATE VAR20 "" FUN4(VAR30) ""
                                                                                  "" FUN4(VAR34) ""
                                                                                                              "" FUN4(VAR32) "" FUN6(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        case VAR35:
            VAR36 ""
                                       ""
                                       ""
                                       "" FUN7(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        }
    }
    else
    {
        switch (VAR3->VAR18)
        {
        case VAR19:
            YSCALEYUV2PACKEDX VAR20 FUN2(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        case VAR22: YSCALEYUV2PACKEDX VAR20 "" VAR23 "" VAR23 "" VAR24 "" "" VAR24 "" FUN3 ( % % VAR25 , % 5 , % % VAR21 ) : : "" ( & VAR3 -> VAR26 ) , "" ( VAR15 ) , "" ( VAR15 ) , "" ( VAR15 ) , "" ( VAR12 ) , "" ( VAR13 ) : "" VAR23 , "" VAR24 , "" VAR27 , "" VAR28 ) ;
            return;
        case VAR29:
            YSCALEYUV2PACKEDX VAR20 "" FUN4(VAR30) ""
                                                                         "" FUN4(VAR31) ""
                                                                                                     "" FUN4(VAR32) "" FUN5(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        case VAR33:
            YSCALEYUV2PACKEDX VAR20 "" FUN4(VAR30) ""
                                                                         "" FUN4(VAR34) ""
                                                                                                     "" FUN4(VAR32) "" FUN6(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        case VAR35:
            VAR37 ""
                              ""
                              ""
                              "" FUN7(% 4, % 5, % % VAR21) YSCALEYUV2PACKEDX_END return;
        }
    }
    if (VAR3->VAR18 == VAR38 || VAR3->VAR18 == VAR39 || VAR3->VAR18 == VAR22 || VAR3->VAR18 == VAR40 || VAR3->VAR18 == VAR41 || VAR3->VAR18 == VAR42)
        FUN8(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
    else
        FUN9(VAR3, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
}