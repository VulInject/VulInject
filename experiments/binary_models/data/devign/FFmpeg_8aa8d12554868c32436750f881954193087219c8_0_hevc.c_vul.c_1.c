static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR5;
    int VAR6 = VAR4->VAR6;
    int VAR7 = VAR4->VAR7;
    int VAR8 = ((VAR6 >> VAR5) + 1) * ((VAR7 >> VAR5) + 1);
    int VAR9 = VAR4->VAR10 * VAR4->VAR11;
    int VAR12 = VAR4->VAR13 * VAR4->VAR14;
    VAR2->VAR15 = (VAR6 >> 2) + 1;
    VAR2->VAR16 = (VAR7 >> 2) + 1;
    VAR2->VAR17 = FUN2(VAR9, sizeof(*VAR2->VAR17));
    VAR2->VAR18 = FUN2(VAR9, sizeof(*VAR2->VAR18));
    if (!VAR2->VAR17 || !VAR2->VAR18)
        goto VAR19;
    VAR2->VAR20 = FUN3(VAR4->VAR21 * VAR4->VAR22);
    VAR2->VAR23 = FUN4(VAR4->VAR21, VAR4->VAR22);
    if (!VAR2->VAR20 || !VAR2->VAR23)
        goto VAR19;
    VAR2->VAR24 = FUN4(VAR4->VAR25, VAR4->VAR26);
    VAR2->VAR27 = FUN5(VAR12);
    VAR2->VAR28 = FUN3((VAR4->VAR13 + 1) * (VAR4->VAR14 + 1));
    if (!VAR2->VAR27 || !VAR2->VAR24 || !VAR2->VAR28)
        goto VAR19;
    VAR2->VAR29 = FUN3(VAR9);
    VAR2->VAR30 = FUN4(VAR8, sizeof(*VAR2->VAR30));
    VAR2->VAR31 = FUN4(VAR8, sizeof(*VAR2->VAR31));
    if (!VAR2->VAR31 || !VAR2->VAR29 || !VAR2->VAR30)
        goto VAR19;
    VAR2->VAR32 = FUN2(VAR2->VAR15, VAR2->VAR16);
    VAR2->VAR33 = FUN2(VAR2->VAR15, VAR2->VAR16);
    if (!VAR2->VAR32 || !VAR2->VAR33)
        goto VAR19;
    VAR2->VAR34 = FUN6(VAR12 * sizeof(VAR35), VAR36);
    VAR2->VAR37 = FUN6(VAR9 * sizeof(VAR38), VAR36);
    if (!VAR2->VAR34 || !VAR2->VAR37)
        goto VAR19;
    return 0;
VAR19:
    FUN7(VAR2);
    return FUN8(VAR39);
}