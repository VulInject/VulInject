int FUN1(void *VAR1, const char *VAR2, const char *VAR3, VAR4 *VAR5, VAR4 *VAR6, int *VAR7, int *VAR8)
{
    const VAR9 *VAR10 = FUN2(VAR5->VAR11);
    const VAR9 *VAR12 = FUN2(VAR6->VAR11);
    const char *VAR13;
    int VAR14, VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20;
    double VAR21[VAR22], VAR23;
    VAR21[VAR24] = VAR25;
    VAR21[VAR26] = VAR27;
    VAR21[VAR28] = VAR29;
    VAR21[VAR30] = VAR21[VAR31] = VAR5->VAR14;
    VAR21[VAR32] = VAR21[VAR33] = VAR5->VAR15;
    VAR21[VAR34] = VAR21[VAR35] = VAR36;
    VAR21[VAR37] = VAR21[VAR38] = VAR36;
    VAR21[VAR39] = (double)VAR5->VAR14 / VAR5->VAR15;
    VAR21[VAR40] = VAR5->VAR41.VAR42 ? (double)VAR5->VAR41.VAR42 / VAR5->VAR41.VAR43 : 1;
    VAR21[VAR44] = VAR21[VAR39] * VAR21[VAR40];
    VAR21[VAR45] = 1 << VAR10->VAR46;
    VAR21[VAR47] = 1 << VAR10->VAR48;
    VAR21[VAR49] = 1 << VAR12->VAR46;
    VAR21[VAR50] = 1 << VAR12->VAR48;
    FUN3(&VAR23, (VAR13 = VAR2), VAR51, VAR21, NULL, NULL, NULL, NULL, NULL, 0, VAR1);
    VAR18 = VAR21[VAR34] = VAR21[VAR35] = VAR23;
    if ((VAR20 = FUN3(&VAR23, (VAR13 = VAR3), VAR51, VAR21, NULL, NULL, NULL, NULL, NULL, 0, VAR1)) < 0)
        goto VAR52;
    VAR19 = VAR21[VAR37] = VAR21[VAR38] = VAR23;
    if ((VAR20 = FUN3(&VAR23, (VAR13 = VAR2), VAR51, VAR21, NULL, NULL, NULL, NULL, NULL, 0, VAR1)) < 0)
        goto VAR52;
    VAR18 = VAR23;
    VAR14 = VAR18;
    VAR15 = VAR19;
    VAR16 = 1;
    VAR17 = 1;
    if (VAR14 < -1)
    {
        VAR16 = -VAR14;
    }
    if (VAR15 < -1)
    {
        VAR17 = -VAR15;
    }
    if (VAR14 < 0 && VAR15 < 0)
        VAR18 = VAR19 = 0;
    if (!(VAR14 = VAR18))
        VAR14 = VAR5->VAR14;
    if (!(VAR15 = VAR19))
        VAR15 = VAR5->VAR15;
    if (VAR14 < 0)
        VAR14 = FUN4(VAR15, VAR5->VAR14, VAR5->VAR15 * VAR16) * VAR16;
    if (VAR15 < 0)
        VAR15 = FUN4(VAR14, VAR5->VAR15, VAR5->VAR14 * VAR17) * VAR17;
    *VAR7 = VAR14;
    *VAR8 = VAR15;
    return 0;
VAR52:
    FUN5(VAR1, VAR53, ""
                                  "",
           VAR13, VAR2, VAR3);
    return VAR20;
}