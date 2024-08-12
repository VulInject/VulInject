static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    int64_t VAR6 = FUN2(VAR2);
    uint32_t VAR7 = VAR8 | VAR9 | VAR10;
    if (!VAR4->VAR11)
    {
        VAR7 |= VAR12;
    }
    else
    {
        VAR7 |= VAR13;
    }
    if (VAR4->VAR14 == VAR15)
        VAR7 &= ~(VAR8 | VAR9 | VAR10);
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    FUN5(VAR2, 0);
    FUN6(VAR2, VAR7);
    FUN3(VAR2, VAR4->VAR16);
    if (VAR7 & VAR10)
        FUN7(VAR2, VAR5);
    if (VAR7 & VAR9)
    {
        VAR4->VAR17 = FUN8(VAR4, 0);
        FUN3(VAR2, VAR4->VAR17);
    }
    if (VAR7 & VAR8)
    {
        VAR4->VAR18 = VAR4->VAR11 ? VAR4->VAR19[0].VAR20 : 1;
        FUN3(VAR2, VAR4->VAR18);
    }
    else
        VAR4->VAR18 = -1;
    if (VAR7 & VAR13)
    {
        VAR4->VAR21 = VAR4->VAR22->VAR23 == VAR24 ? (VAR25 | VAR26) : VAR27;
        FUN3(VAR2, VAR4->VAR21);
    }
    return FUN9(VAR2, VAR6);
}