static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    uint64_t VAR5;
    VAR4 = 0 + 8 + 8 + 8 + 8 + 8 + 8 + VAR6 + FUN2(VAR7) * 8;
    VAR4 = (VAR4 + 15) & ~15;
    VAR5 = (VAR8)VAR2->VAR9 + 24;
    FUN3(VAR2, VAR5 >> 32);
    FUN3(VAR2, VAR5);
    VAR2->VAR9 += 16;
    FUN3(VAR2, VAR10 | FUN4(0) | VAR11);
    FUN3(VAR2, VAR12 | FUN5(1) | FUN6(1) | (-VAR4 & 0xffff));
    for (VAR3 = 0; VAR3 < FUN2(VAR7); ++VAR3)
        FUN3(VAR2, (VAR13 | FUN5(VAR7[VAR3]) | FUN6(1) | (VAR3 * 8 + 48 + VAR6)));
    FUN3(VAR2, VAR13 | FUN5(0) | FUN6(1) | (VAR4 + 16));
    if (VAR14)
    {
        FUN7(VAR2, VAR15, VAR16, VAR14);
        FUN8(VAR2->VAR17, VAR16);
    }
    FUN9(VAR2, VAR18, VAR19, VAR20[0]);
    FUN3(VAR2, VAR21 | FUN5(VAR20[1]) | VAR22);
    FUN3(VAR2, VAR23 | VAR24);
    VAR25 = VAR2->VAR9;
    for (VAR3 = 0; VAR3 < FUN2(VAR7); ++VAR3)
        FUN3(VAR2, (VAR26 | FUN4(VAR7[VAR3]) | FUN6(1) | (VAR3 * 8 + 48 + VAR6)));
    FUN3(VAR2, VAR26 | FUN4(0) | FUN6(1) | (VAR4 + 16));
    FUN3(VAR2, VAR21 | FUN5(0) | VAR11);
    FUN3(VAR2, VAR27 | FUN4(1) | FUN6(1) | VAR4);
    FUN3(VAR2, VAR28 | VAR24);
}