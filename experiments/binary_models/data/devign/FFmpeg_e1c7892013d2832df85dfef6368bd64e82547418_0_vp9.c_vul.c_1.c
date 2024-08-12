static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    if (VAR6->VAR10 && VAR3 == VAR2->VAR11 && VAR4 == VAR2->VAR12)
        return 0;
    VAR2->VAR11 = VAR3;
    VAR2->VAR12 = VAR4;
    VAR6->VAR13 = (VAR3 + 63) >> 6;
    VAR6->VAR14 = (VAR4 + 63) >> 6;
    VAR6->VAR15 = (VAR3 + 7) >> 3;
    VAR6->VAR16 = (VAR4 + 7) >> 3;
    FUN2(VAR6->VAR10);
    VAR9 = FUN3(VAR6->VAR13 * (240 + sizeof(*VAR6->VAR17) + 16 * sizeof(*VAR6->VAR18) + 64 * VAR6->VAR14 * (1 + sizeof(*VAR6->VAR19[0]) * 2)));
    if (!VAR9)
        return FUN4(VAR20);
    FUN5(VAR6->VAR10, VAR8 *, 8);
    FUN5(VAR6->VAR21, VAR8 *, 8);
    FUN5(VAR6->VAR22, VAR8 *, 8);
    FUN5(VAR6->VAR23, VAR8 *, 16);
    FUN5(VAR6->VAR24, VAR8 *, 16);
    FUN5(VAR6->VAR25[0], VAR8 *, 8);
    FUN5(VAR6->VAR25[1], VAR8 *, 8);
    FUN5(VAR6->VAR26[0], VAR8 *, 64);
    FUN5(VAR6->VAR26[1], VAR8 *, 32);
    FUN5(VAR6->VAR26[2], VAR8 *, 32);
    FUN5(VAR6->VAR27, VAR8 *, 8);
    FUN5(VAR6->VAR28, VAR8 *, 8);
    FUN5(VAR6->VAR29, VAR8 *, 8);
    FUN5(VAR6->VAR30, VAR8 *, 8);
    FUN5(VAR6->VAR31, VAR8 *, 8);
    FUN5(VAR6->VAR17, struct VAR32 *, 1);
    FUN5(VAR6->VAR18, FUN6(*)[2], 16);
    FUN5(VAR6->VAR33, VAR8 *, 64 * VAR6->VAR14);
    FUN5(VAR6->VAR19[0], struct VAR34 *, 64 * VAR6->VAR14);
    FUN5(VAR6->VAR19[1], struct VAR34 *, 64 * VAR6->VAR14);
    return 0;
}