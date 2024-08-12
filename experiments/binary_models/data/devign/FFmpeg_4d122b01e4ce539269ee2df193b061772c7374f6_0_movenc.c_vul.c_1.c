static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR5->VAR9[VAR3];
    AVPacket VAR10 = {.VAR11 = VAR3, .VAR12 = VAR13};
    int VAR14, VAR15;
    uint8_t VAR16[43] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    };
    VAR8->VAR17 = VAR5->VAR17;
    VAR8->VAR18 = FUN2('', '', '', '');
    VAR8->VAR19 = VAR20;
    VAR8->VAR21 = FUN3(NULL);
    if (!VAR8->VAR21)
        VAR8->VAR21->VAR22 = VAR23;
    VAR8->VAR21->VAR24 = FUN4(sizeof(VAR16));
    if (VAR8->VAR21->VAR24 == NULL)
        VAR8->VAR21->VAR25 = sizeof(VAR16);
    memcpy(VAR8->VAR21->VAR24, VAR16, sizeof(VAR16));
    for (VAR14 = 0; VAR14 < VAR2->VAR26; VAR14++)
    {
        VAR27 *VAR28 = VAR2->VAR29[VAR14];
        VAR30 *VAR31;
        int64_t VAR32 = FUN5(VAR28->VAR32, VAR28->VAR33, (VAR34){1, VAR20});
        VAR10.VAR35 = VAR10.VAR36 = FUN5(VAR28->VAR37, VAR28->VAR33, (VAR34){1, VAR20});
        VAR10.VAR38 = VAR32 - VAR10.VAR36;
        if ((VAR31 = FUN6(VAR28->VAR39, "", NULL, 0)))
        {
            VAR15 = strlen(VAR31->VAR40);
            VAR10.VAR41 = VAR15 + 2;
            VAR10.VAR42 = FUN4(VAR10.VAR41);
            FUN7(VAR10.VAR42, VAR15);
            memcpy(VAR10.VAR42 + 2, VAR31->VAR40, VAR15);
            FUN8(VAR2, &VAR10);
            FUN9(&VAR10.VAR42);
        }
    }
    return 0;