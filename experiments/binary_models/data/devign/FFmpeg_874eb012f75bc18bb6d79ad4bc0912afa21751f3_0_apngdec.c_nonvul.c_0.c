static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    uint32_t VAR7, VAR8, VAR9, VAR10, VAR11;
    uint16_t VAR12, VAR13;
    uint8_t VAR14, VAR15;
    VAR7 = FUN2(VAR2->VAR16);
    VAR8 = FUN2(VAR2->VAR16);
    VAR9 = FUN2(VAR2->VAR16);
    VAR10 = FUN2(VAR2->VAR16);
    VAR11 = FUN2(VAR2->VAR16);
    VAR12 = FUN3(VAR2->VAR16);
    VAR13 = FUN3(VAR2->VAR16);
    VAR14 = FUN4(VAR2->VAR16);
    VAR15 = FUN4(VAR2->VAR16);
    FUN5(VAR2->VAR16, 4);
    if (!VAR13)
        VAR13 = 100;
    if (!VAR12 || (VAR4->VAR17 && VAR13 / VAR12 > VAR4->VAR17))
    {
        VAR12 = 1;
        VAR13 = VAR4->VAR18;
    }
    VAR4->VAR19 = FUN6(VAR12, (VAR20){1, VAR13}, VAR2->VAR21[0]->VAR22);
    FUN7(VAR2, VAR23, ""
                            "" VAR24 ""
                            "" VAR25 ""
                            "" VAR25 ""
                            "" VAR25 ""
                            "" VAR25 ""
                            "" VAR26 ""
                            "" VAR26 ""
                            ""
                            "",
           VAR27, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15);
    if (VAR8 != VAR2->VAR21[0]->VAR28->VAR8 || VAR9 != VAR2->VAR21[0]->VAR28->VAR9 || VAR10 != 0 || VAR11 != 0)
    {
        if (VAR7 == 0 || VAR10 >= VAR2->VAR21[0]->VAR28->VAR8 || VAR8 > VAR2->VAR21[0]->VAR28->VAR8 - VAR10 || VAR11 >= VAR2->VAR21[0]->VAR28->VAR9 || VAR9 > VAR2->VAR21[0]->VAR28->VAR9 - VAR11)
            return VAR29;
        VAR4->VAR30 = 0;
    }
    else
    {
        if (VAR7 == 0 && VAR14 == VAR31)
            VAR14 = VAR32;
        VAR4->VAR30 = VAR14 == VAR32 || VAR15 == VAR33;
    }
    return 0;
}