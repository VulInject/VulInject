static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    ProbRangesQueue VAR11 = {{0}, 0};
    uint8_t VAR12[VAR13];
    BigInt VAR14 = {0};
    int VAR15, VAR16, VAR17, VAR18 = 0;
    const VAR19 *VAR20;
    VAR19 *VAR21;
    char VAR22[VAR23];
    if (VAR2->VAR24 || VAR2->VAR25)
    {
        if (VAR2->VAR24 != VAR26 || VAR2->VAR25 != VAR27)
        {
            FUN2(VAR2, VAR28, "", VAR2->VAR24, VAR2->VAR25, VAR26, VAR27);
            return FUN3(VAR29);
        }
    }
    VAR2->VAR24 = VAR26;
    VAR2->VAR25 = VAR27;
    VAR20 = VAR6->VAR30[0];
    VAR15 = VAR16 = 0;
    do
    {
        for (VAR17 = 0; VAR17 < 8; VAR17++)
            VAR9->VAR31[VAR15++] = (VAR20[VAR16] >> (7 - VAR17)) & 1;
        if (++VAR16 == VAR26 / 8)
        {
            VAR20 += VAR6->VAR32[0];
            VAR16 = 0;
        }
    } while (VAR15 < VAR13);
    memcpy(VAR12, VAR9->VAR31, VAR13);
    FUN4(VAR9->VAR31, VAR12);
    FUN5(VAR9->VAR31, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + 16, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + 32, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + VAR26 * 16, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + VAR26 * 16 + 16, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + VAR26 * 16 + 32, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + VAR26 * 32, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + VAR26 * 32 + 16, 16, 16, 0, &VAR11);
    FUN5(VAR9->VAR31 + VAR26 * 32 + 32, 16, 16, 0, &VAR11);
    while (VAR11.VAR33 > 0)
        FUN6(&VAR14, VAR11.VAR34[--VAR11.VAR33]);
    VAR15 = 0;
    while (VAR14.VAR35)
    {
        uint8_t VAR36;
        FUN7(&VAR14, VAR37, &VAR36);
        VAR22[VAR15++] = VAR36 + VAR38;
    }
    if ((VAR18 = FUN8(VAR2, VAR4, VAR15 + 2)) < 0)
        return VAR18;
    VAR21 = VAR4->VAR30;
    while (--VAR15 >= 0)
        *(VAR21++) = VAR22[VAR15];
    *(VAR21++) = '';
    *(VAR21++) = 0;
    VAR4->VAR39 |= VAR40;
    *VAR7 = 1;
    return 0;
}