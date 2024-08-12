int FUN1(void *VAR1, const char *VAR2, const char *VAR3, VAR4 *VAR5, VAR4 *VAR6, int *VAR7, int *VAR8)
{
    const VAR9 *VAR10 = FUN2(VAR5->VAR11);
    const VAR9 *VAR12 = FUN2(VAR6->VAR11);
    const char *VAR13;
    int VAR14, VAR15;
    int VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20;
    const char VAR21 = VAR6->VAR22->VAR23 == 2 && VAR6->VAR22->VAR24[1] == VAR5;
    double VAR25[VAR26 + VAR27], VAR28;
    const VAR9 *VAR29;
    const VAR4 *VAR30;
    const char *const *VAR31 = VAR21 ? VAR32 : VAR33;
    if (VAR21)
    {
        VAR30 = VAR6->VAR22->VAR24[0];
        VAR29 = FUN2(VAR30->VAR11);
    }
    VAR25[VAR34] = VAR35;
    VAR25[VAR36] = VAR37;
    VAR25[VAR38] = VAR39;
    VAR25[VAR40] = VAR25[VAR41] = VAR5->VAR14;
    VAR25[VAR42] = VAR25[VAR43] = VAR5->VAR15;
    VAR25[VAR44] = VAR25[VAR45] = VAR46;
    VAR25[VAR47] = VAR25[VAR48] = VAR46;
    VAR25[VAR49] = (double)VAR5->VAR14 / VAR5->VAR15;
    VAR25[VAR50] = VAR5->VAR51.VAR52 ? (double)VAR5->VAR51.VAR52 / VAR5->VAR51.VAR53 : 1;
    VAR25[VAR54] = VAR25[VAR49] * VAR25[VAR50];
    VAR25[VAR55] = 1 << VAR10->VAR56;
    VAR25[VAR57] = 1 << VAR10->VAR58;
    VAR25[VAR59] = 1 << VAR12->VAR56;
    VAR25[VAR60] = 1 << VAR12->VAR58;
    if (VAR21)
    {
        VAR25[VAR26 + VAR61] = VAR30->VAR14;
        VAR25[VAR26 + VAR62] = VAR30->VAR15;
        VAR25[VAR26 + VAR63] = (double)VAR30->VAR14 / VAR30->VAR15;
        VAR25[VAR26 + VAR64] = VAR30->VAR51.VAR52 ? (double)VAR30->VAR51.VAR52 / VAR30->VAR51.VAR53 : 1;
        VAR25[VAR26 + VAR65] = VAR25[VAR26 + VAR66] = VAR25[VAR26 + VAR63] * VAR25[VAR26 + VAR64];
        VAR25[VAR26 + VAR67] = 1 << VAR29->VAR56;
        VAR25[VAR26 + VAR68] = 1 << VAR29->VAR58;
    }
    FUN3(&VAR28, (VAR13 = VAR2), VAR31, VAR25, NULL, NULL, NULL, NULL, NULL, 0, VAR1);
    VAR18 = VAR25[VAR44] = VAR25[VAR45] = (int)VAR28 == 0 ? VAR5->VAR14 : (int)VAR28;
    if ((VAR20 = FUN3(&VAR28, (VAR13 = VAR3), VAR31, VAR25, NULL, NULL, NULL, NULL, NULL, 0, VAR1)) < 0)
        goto VAR69;
    VAR19 = VAR25[VAR47] = VAR25[VAR48] = (int)VAR28 == 0 ? VAR5->VAR15 : (int)VAR28;
    if ((VAR20 = FUN3(&VAR28, (VAR13 = VAR2), VAR31, VAR25, NULL, NULL, NULL, NULL, NULL, 0, VAR1)) < 0)
        goto VAR69;
    VAR18 = (int)VAR28 == 0 ? VAR5->VAR14 : (int)VAR28;
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
    {
        VAR14 = VAR5->VAR14;
        VAR15 = VAR5->VAR15;
    }
    if (VAR14 < 0)
        VAR14 = FUN4(VAR15, VAR5->VAR14, VAR5->VAR15 * VAR16) * VAR16;
    if (VAR15 < 0)
        VAR15 = FUN4(VAR14, VAR5->VAR15, VAR5->VAR14 * VAR17) * VAR17;
    *VAR7 = VAR14;
    *VAR8 = VAR15;
    return 0;
VAR69:
    FUN5(VAR1, VAR70, ""
                                  "",
           VAR13, VAR2, VAR3);
    return VAR20;
}