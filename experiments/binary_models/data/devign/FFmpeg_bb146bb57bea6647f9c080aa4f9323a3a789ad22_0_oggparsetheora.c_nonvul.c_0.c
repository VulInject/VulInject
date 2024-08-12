FUN1(VAR1 *VAR2, int VAR3, uint64_t VAR4, VAR5 *VAR6)
{
    struct VAR7 *VAR7 = VAR2->VAR8;
    struct VAR9 *VAR10 = VAR7->VAR11 + VAR3;
    struct VAR12 *VAR13 = VAR10->private;
    uint64_t VAR14, VAR15;
    if (!VAR13)
        return VAR16;
    VAR14 = VAR4 >> VAR13->VAR17;
    VAR15 = VAR4 & VAR13->VAR18;
    if (VAR13->VAR19 < 0x030201)
        VAR14++;
    if (!VAR15)
        VAR10->VAR20 |= VAR21;
    if (VAR6)
        *VAR6 = VAR14 + VAR15;
    return VAR14 + VAR15;
}