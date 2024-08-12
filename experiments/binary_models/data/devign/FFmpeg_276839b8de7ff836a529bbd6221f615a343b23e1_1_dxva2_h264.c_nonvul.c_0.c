static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR8;
    struct VAR9 *VAR10 = VAR2->VAR11;
    const VAR12 *VAR13 = VAR7->VAR14;
    struct VAR15 *VAR16 = VAR13->VAR17;
    unsigned VAR18;
    if (VAR16->VAR19 >= VAR20)
        return -1;
    if (!VAR16->VAR21)
        VAR16->VAR21 = VAR4;
    VAR16->VAR22 += VAR5;
    VAR18 = VAR4 - VAR16->VAR21;
    if (FUN2(VAR10))
        FUN3(&VAR16->VAR23[VAR16->VAR19], VAR18, VAR5);
    else
        FUN4(VAR2, &VAR16->VAR24[VAR16->VAR19], &VAR16->VAR25, VAR18, VAR5);
    VAR16->VAR19++;
    if (VAR7->VAR26 != VAR27 && VAR7->VAR26 != VAR28)
        VAR16->VAR25.VAR29 &= ~(1 << 15);
    return 0;
}