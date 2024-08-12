static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    unsigned int VAR4;
    VAR3 = FUN2(VAR2->VAR5, 21, 23);
    VAR4 = VAR2->VAR5 & (1 << 25);
    FUN3("", VAR4 ? "" : "", VAR2->VAR6, VAR2->VAR7);
    VAR2->VAR8 = 1;
    if (VAR4)
    {
        VAR2->VAR8 = 2;
        VAR2->VAR9 |= VAR10;
        FUN4(FUN5(VAR2->VAR11 && (VAR2->VAR9 & VAR12)), VAR13, FUN6(VAR14, VAR15));
    }
    if (FUN7(VAR2))
    {
        int32_t VAR16 = (VAR17)((VAR18)VAR2->VAR7);
        FUN8(VAR19, VAR2->VAR20 + VAR16);
        VAR2->VAR21 = VAR22;
        VAR2->VAR23 = VAR2->VAR20 + VAR16;
    }
    else
    {
        VAR2->VAR21 = VAR24;
        FUN8(VAR19, VAR2->VAR20);
        FUN9(VAR19, VAR19, *(FUN10(VAR2)));
    }
    FUN11(VAR2, VAR3, VAR25, VAR26[VAR2->VAR6], FUN5(0));
}