static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    struct VAR9 *VAR10 = VAR2->VAR11;
    const VAR12 *VAR13 = VAR7->VAR14.VAR15;
    struct VAR16 *VAR17 = VAR13->VAR18;
    unsigned VAR19;
    if (VAR17->VAR20 >= VAR21)
        return -1;
    if (!VAR17->VAR22)
        VAR17->VAR22 = VAR4;
    VAR17->VAR23 += VAR5;
    VAR19 = VAR4 - VAR17->VAR22;
    if (FUN2(VAR10))
        FUN3(&VAR17->VAR24[VAR17->VAR20], VAR19, VAR5);
    else
        FUN4(VAR2, &VAR17->VAR25[VAR17->VAR20], VAR19, VAR5);
    VAR17->VAR20++;
    if (VAR7->VAR26 != VAR27 && VAR7->VAR26 != VAR28)
        VAR17->VAR29.VAR30 &= ~(1 << 15);
    return 0;
}