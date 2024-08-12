static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = &VAR2->VAR10[VAR8];
    GetBitContext VAR11;
    int VAR12 = FUN2(VAR7);
    int VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    if (VAR12 & 0x8000)
        return -1;
    FUN3(&VAR11, VAR7 + 2, (VAR18 - 2) * 8);
    VAR4 += VAR5;
    VAR15 = VAR10->VAR15;
    VAR16 = VAR10->VAR16;
    for (VAR13 = 0; VAR13 < VAR19; VAR13++)
    {
        VAR17 = FUN4(&VAR11, 4);
        VAR14 = ((VAR17 << VAR20) * VAR12 + VAR2->VAR21[0] * VAR15 + VAR2->VAR21[1] * VAR16) >> VAR20;
        VAR16 = VAR15;
        VAR15 = FUN5(VAR14);
        *VAR4++ = VAR15;
    }
    VAR10->VAR15 = VAR15;
    VAR10->VAR16 = VAR16;
    return 0;
}