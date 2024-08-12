static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    uint64_t VAR7 = (VAR8)VAR2->VAR9 * (VAR8)VAR2->VAR10 * 20;
    uint64_t VAR11 = VAR6->VAR12 * 8;
    GetBitContext VAR13;
    VAR14 *VAR15, *VAR16, *VAR17;
    int VAR18, VAR19;
    VAR18 = FUN2(VAR2, VAR4, 0);
    if (VAR18 < 0)
        return VAR18;
    VAR15 = (VAR14 *)VAR4->VAR20[0];
    VAR16 = (VAR14 *)VAR4->VAR20[1];
    VAR17 = (VAR14 *)VAR4->VAR20[2];
    if (VAR7 > VAR11)
        return VAR21;
    if (VAR2->VAR9 % 2)
        return VAR22;
    VAR18 = FUN3(&VAR13, VAR6->VAR20, VAR2->VAR9 * VAR2->VAR10 * 20);
    if (VAR18)
        return VAR18;
    for (VAR19 = 0; VAR19 < VAR2->VAR10; VAR19++)
    {
        VAR15 = (VAR14 *)(VAR4->VAR20[0] + VAR19 * VAR4->VAR23[0]);
        VAR16 = (VAR14 *)(VAR4->VAR20[1] + VAR19 * VAR4->VAR23[1]);
        VAR17 = (VAR14 *)(VAR4->VAR20[2] + VAR19 * VAR4->VAR23[2]);
        for (int VAR24 = 0; VAR24 < VAR2->VAR9; VAR24 += 2)
        {
            *VAR16++ = FUN4(&VAR13, 10);
            *VAR15++ = FUN4(&VAR13, 10);
            *VAR17++ = FUN4(&VAR13, 10);
            *VAR15++ = FUN4(&VAR13, 10);
        }
    }
    return 0;
}