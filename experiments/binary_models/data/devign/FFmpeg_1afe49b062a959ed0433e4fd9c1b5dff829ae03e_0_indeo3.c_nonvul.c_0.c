static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, int32_t VAR9, int32_t VAR10)
{
    Cell VAR11;
    uint32_t VAR12;
    VAR12 = FUN2(&VAR8);
    if (VAR12 >= VAR9 / 2)
        return VAR13;
    VAR2->VAR14 = VAR12 ? VAR8 : 0;
    VAR8 += VAR12 * 2;
    VAR9 -= VAR12 * 2;
    FUN3(&VAR2->VAR15, VAR8, VAR9 << 3);
    VAR2->VAR16 = 0;
    VAR2->VAR17 = 0;
    VAR2->VAR18 = VAR8 + VAR9 - 1;
    VAR11.VAR19 = VAR11.VAR20 = 0;
    VAR11.VAR21 = VAR6->VAR21 >> 2;
    VAR11.VAR22 = VAR6->VAR22 >> 2;
    VAR11.VAR23 = 0;
    VAR11.VAR24 = 0;
    return FUN4(VAR2, VAR4, VAR6, VAR25, &VAR11, VAR26, VAR10);
}