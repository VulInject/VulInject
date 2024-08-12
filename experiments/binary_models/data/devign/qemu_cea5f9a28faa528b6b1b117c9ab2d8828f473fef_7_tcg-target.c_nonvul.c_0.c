static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR4 = 0 + VAR5 + VAR6 + FUN2(VAR7) * 4;
    VAR4 = (VAR4 + 15) & ~15;
    {
        uint32_t VAR8;
        VAR8 = (VAR9)VAR2->VAR10 + 12;
        FUN3(VAR2, VAR8);
        VAR2->VAR10 += 8;
    }
    FUN3(VAR2, VAR11 | FUN4(0) | VAR12);
    FUN3(VAR2, VAR13 | FUN5(1) | FUN6(1) | (-VAR4 & 0xffff));
    for (VAR3 = 0; VAR3 < FUN2(VAR7); ++VAR3)
        FUN3(VAR2, (VAR14 | FUN5(VAR7[VAR3]) | FUN6(1) | (VAR3 * 4 + VAR5 + VAR6)));
    FUN3(VAR2, VAR14 | FUN5(0) | FUN6(1) | (VAR4 + VAR15));
    if (VAR16)
    {
        FUN7(VAR2, VAR17, VAR18, VAR16);
        FUN8(VAR2->VAR19, VAR18);
    }
    FUN9(VAR2, VAR20, VAR21, VAR22[0]);
    FUN3(VAR2, VAR23 | FUN5(VAR22[1]) | VAR24);
    FUN3(VAR2, VAR25 | VAR26);
    VAR27 = VAR2->VAR10;
    for (VAR3 = 0; VAR3 < FUN2(VAR7); ++VAR3)
        FUN3(VAR2, (VAR28 | FUN4(VAR7[VAR3]) | FUN6(1) | (VAR3 * 4 + VAR5 + VAR6)));
    FUN3(VAR2, VAR28 | FUN4(0) | FUN6(1) | (VAR4 + VAR15));
    FUN3(VAR2, VAR23 | FUN5(0) | VAR12);
    FUN3(VAR2, VAR29 | FUN4(1) | FUN6(1) | VAR4);
    FUN3(VAR2, VAR30 | VAR26);
}