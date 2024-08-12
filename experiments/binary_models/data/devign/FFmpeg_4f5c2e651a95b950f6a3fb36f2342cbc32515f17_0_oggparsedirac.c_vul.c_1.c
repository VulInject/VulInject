static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    dirac_source_params VAR11;
    GetBitContext VAR12;
    if (VAR10->VAR13->VAR14 == VAR15)
        return 0;
    FUN2(&VAR12, VAR7->VAR16 + VAR7->VAR17 + 13, (VAR7->VAR18 - 13) * 8);
    if (FUN3(VAR10->VAR13, &VAR12, &VAR11) < 0)
        return -1;
    VAR10->VAR13->VAR19 = VAR20;
    VAR10->VAR13->VAR14 = VAR15;
    FUN4(VAR10, 64, VAR10->VAR13->VAR21.VAR22, 2 * VAR10->VAR13->VAR21.VAR23);
    return 1;
}