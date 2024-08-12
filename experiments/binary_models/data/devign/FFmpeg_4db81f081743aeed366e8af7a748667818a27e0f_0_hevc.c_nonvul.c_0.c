static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4->VAR3;
    int VAR5 = VAR2->VAR4->VAR5;
    int VAR6 = VAR2->VAR4->VAR6;
    int VAR7 = VAR5 * VAR6;
    int VAR8 = ((VAR5 >> VAR3) + 1) * ((VAR6 >> VAR3) + 1);
    int VAR9 = VAR2->VAR4->VAR10 * VAR2->VAR4->VAR11;
    int VAR12 = VAR5 >> VAR2->VAR4->VAR13;
    int VAR14 = VAR6 >> VAR2->VAR4->VAR13;
    int VAR15 = VAR12 * VAR14;
    int VAR16 = VAR5 >> VAR2->VAR4->VAR17;
    int VAR18 = VAR6 >> VAR2->VAR4->VAR17;
    VAR2->VAR19 = VAR5 >> 3;
    VAR2->VAR20 = VAR6 >> 3;
    VAR2->VAR21 = FUN2(VAR9, sizeof(*VAR2->VAR21));
    VAR2->VAR22 = FUN2(VAR9, sizeof(*VAR2->VAR22));
    VAR2->VAR23 = FUN3(VAR7);
    if (!VAR2->VAR21 || !VAR2->VAR22 || !VAR2->VAR23)
        goto VAR24;
    VAR2->VAR25 = FUN3(VAR8);
    VAR2->VAR26 = FUN3(VAR2->VAR4->VAR27 * VAR2->VAR4->VAR28);
    if (!VAR2->VAR25 || !VAR2->VAR26)
        goto VAR24;
    VAR2->VAR29 = FUN3(VAR16 * VAR18);
    VAR2->VAR30 = FUN3(VAR15);
    VAR2->VAR31 = FUN3(VAR15);
    if (!VAR2->VAR30 || !VAR2->VAR29 || !VAR2->VAR31)
        goto VAR24;
    VAR2->VAR32 = FUN3(VAR9);
    VAR2->VAR33 = FUN3(VAR8 * sizeof(*VAR2->VAR33));
    VAR2->VAR34 = FUN3(VAR8 * sizeof(*VAR2->VAR34));
    if (!VAR2->VAR34 || !VAR2->VAR32 || !VAR2->VAR33)
        goto VAR24;
    VAR2->VAR35 = FUN4(2 * VAR2->VAR19 * (VAR2->VAR20 + 1));
    VAR2->VAR36 = FUN4(2 * VAR2->VAR19 * (VAR2->VAR20 + 1));
    if (!VAR2->VAR35 || !VAR2->VAR36)
        goto VAR24;
    VAR2->VAR37 = FUN5(VAR15 * sizeof(VAR38), VAR39);
    VAR2->VAR40 = FUN5(VAR9 * sizeof(VAR41), VAR42);
    if (!VAR2->VAR37 || !VAR2->VAR40)
        goto VAR24;
    return 0;
VAR24:
    FUN6(VAR2);
    return FUN7(VAR43);
}