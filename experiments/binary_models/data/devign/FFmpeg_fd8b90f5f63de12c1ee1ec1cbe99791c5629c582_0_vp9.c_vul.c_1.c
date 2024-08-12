static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, enum AVPixelFormat VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11 = VAR7->VAR11;
    FUN2(VAR3 > 0 && VAR4 > 0);
    if (VAR7->VAR12[0] && VAR3 == VAR2->VAR13 && VAR4 == VAR2->VAR14 && VAR2->VAR15 == VAR5)
        return 0;
    VAR2->VAR13 = VAR3;
    VAR2->VAR14 = VAR4;
    VAR2->VAR15 = VAR5;
    VAR7->VAR16 = (VAR3 + 63) >> 6;
    VAR7->VAR17 = (VAR4 + 63) >> 6;
    VAR7->VAR18 = (VAR3 + 7) >> 3;
    VAR7->VAR19 = (VAR4 + 7) >> 3;
    FUN3(&VAR7->VAR12[0]);
    VAR10 = FUN4(VAR7->VAR16 * (128 + 192 * VAR11 + sizeof(*VAR7->VAR20) + 16 * sizeof(*VAR7->VAR21)));
    if (!VAR10)
        return FUN5(VAR22);
    FUN6(VAR7->VAR12[0], VAR9 *, 64 * VAR11);
    FUN6(VAR7->VAR12[1], VAR9 *, 64 * VAR11);
    FUN6(VAR7->VAR12[2], VAR9 *, 64 * VAR11);
    FUN6(VAR7->VAR23, VAR9 *, 16);
    FUN6(VAR7->VAR24, VAR9 *, 16);
    FUN6(VAR7->VAR21, FUN7(*)[2], 16);
    FUN6(VAR7->VAR25[0], VAR9 *, 16);
    FUN6(VAR7->VAR25[1], VAR9 *, 16);
    FUN6(VAR7->VAR26, VAR9 *, 8);
    FUN6(VAR7->VAR27, VAR9 *, 8);
    FUN6(VAR7->VAR28, VAR9 *, 8);
    FUN6(VAR7->VAR29, VAR9 *, 8);
    FUN6(VAR7->VAR30, VAR9 *, 8);
    FUN6(VAR7->VAR31, VAR9 *, 8);
    FUN6(VAR7->VAR32, VAR9 *, 8);
    FUN6(VAR7->VAR33, VAR9 *, 8);
    FUN6(VAR7->VAR20, struct VAR34 *, 1);
    FUN3(&VAR7->VAR35);
    FUN3(&VAR7->VAR36);
    if (VAR7->VAR37 != VAR7->VAR38)
    {
        FUN8(&VAR7->VAR39, VAR7->VAR37);
        FUN9(&VAR7->VAR40, VAR7->VAR37);
        VAR7->VAR38 = VAR7->VAR37;
    }
    return 0;
}