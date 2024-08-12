static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    const VAR15 *VAR16 = VAR12->VAR16;
    float *VAR17 = VAR3;
    enum FrameType VAR18;
    int VAR19, VAR20;
    static const enum FrameType VAR21[] = {VAR22, VAR22, VAR23, VAR22, VAR24, VAR22, VAR22, VAR24, VAR24};
    if (VAR9 * 8 < VAR2->VAR25 * VAR16->VAR10 / VAR2->VAR26 + 8)
    {
        FUN2(VAR2, VAR27, "", VAR9);
        return FUN3(VAR28);
    }
    VAR20 = VAR16->VAR10 * VAR2->VAR29 * FUN4(VAR2->VAR30);
    if (*VAR4 < VAR20)
    {
        FUN2(VAR2, VAR27, "");
        return FUN3(VAR28);
    }
    FUN5(&VAR14, VAR8, VAR9 * 8);
    FUN6(&VAR14, FUN7(&VAR14, 8));
    VAR19 = FUN7(&VAR14, VAR31);
    if (VAR19 > 8)
    {
        FUN2(VAR2, VAR27, "");
        return -1;
    }
    VAR18 = VAR21[VAR19];
    FUN8(VAR12, &VAR14, VAR12->VAR32, VAR18);
    FUN9(VAR12, VAR18, VAR19, VAR17);
    FUN10(float *, VAR12->VAR33, VAR12->VAR34);
    if (VAR12->VAR2->VAR35 < 2)
    {
        *VAR4 = 0;
        return VAR9;
    }
    *VAR4 = VAR20;
    return VAR9;
}