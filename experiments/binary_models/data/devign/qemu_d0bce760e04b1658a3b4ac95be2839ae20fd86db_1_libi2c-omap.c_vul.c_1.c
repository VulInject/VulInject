static void FUN1(VAR1 *VAR2, uint8_t VAR3, const VAR4 *VAR5, uint16_t VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    uint16_t VAR9;
    FUN2(VAR8, VAR3);
    VAR9 = VAR6;
    FUN3(VAR8->VAR3 + VAR10, &VAR9, 2);
    VAR9 = VAR11 | VAR12 | VAR13 | VAR14 | VAR15;
    FUN3(VAR8->VAR3 + VAR16, &VAR9, 2);
    FUN4(VAR8->VAR3 + VAR16, &VAR9, 2);
    FUN5((VAR9 & VAR15) != 0);
    FUN4(VAR8->VAR3 + VAR17, &VAR9, 2);
    FUN5((VAR9 & VAR18) == 0);
    while (VAR6 > 1)
    {
        FUN4(VAR8->VAR3 + VAR17, &VAR9, 2);
        FUN5((VAR9 & VAR19) != 0);
        FUN3(VAR8->VAR3 + VAR20, VAR5, 2);
        VAR5 = (VAR4 *)VAR5 + 2;
        VAR6 -= 2;
    }
    if (VAR6 == 1)
    {
        FUN4(VAR8->VAR3 + VAR17, &VAR9, 2);
        FUN5((VAR9 & VAR19) != 0);
        FUN3(VAR8->VAR3 + VAR20, VAR5, 1);
    }
    FUN4(VAR8->VAR3 + VAR16, &VAR9, 2);
    FUN5((VAR9 & VAR15) == 0);
}