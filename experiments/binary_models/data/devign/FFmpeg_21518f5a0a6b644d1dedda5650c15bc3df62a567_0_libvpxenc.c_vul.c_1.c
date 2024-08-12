static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    struct VAR11 *VAR12 = NULL;
    struct VAR11 *VAR13 = NULL;
    int64_t VAR14 = 0;
    int VAR15, VAR16;
    vpx_enc_frame_flags_t VAR17 = 0;
    if (VAR6)
    {
        VAR12 = &VAR9->VAR12;
        VAR12->VAR18[VAR19] = VAR6->VAR20[0];
        VAR12->VAR18[VAR21] = VAR6->VAR20[1];
        VAR12->VAR18[VAR22] = VAR6->VAR20[2];
        VAR12->VAR23[VAR19] = VAR6->VAR24[0];
        VAR12->VAR23[VAR21] = VAR6->VAR24[1];
        VAR12->VAR23[VAR22] = VAR6->VAR24[2];
        if (VAR9->VAR25)
        {
            VAR26 *VAR27, *VAR28;
            VAR13 = &VAR9->VAR13;
            VAR13->VAR18[VAR19] = VAR6->VAR20[3];
            VAR27 = FUN2(VAR6->VAR24[1] * VAR6->VAR29);
            memset(VAR27, 0x80, VAR6->VAR24[1] * VAR6->VAR29);
            VAR13->VAR18[VAR21] = VAR27;
            VAR28 = FUN2(VAR6->VAR24[2] * VAR6->VAR29);
            memset(VAR28, 0x80, VAR6->VAR24[2] * VAR6->VAR29);
            VAR13->VAR18[VAR22] = VAR28;
            VAR13->VAR23[VAR19] = VAR6->VAR24[0];
            VAR13->VAR23[VAR21] = VAR6->VAR24[1];
            VAR13->VAR23[VAR22] = VAR6->VAR24[2];
        }
        VAR14 = VAR6->VAR30;
        if (VAR6->VAR31 == VAR32)
            VAR17 |= VAR33;
    }
    VAR15 = FUN3(&VAR9->VAR34, VAR12, VAR14, VAR2->VAR35, VAR17, VAR9->VAR36);
    if (VAR15 != VAR37)
    {
        FUN4(VAR2, "");
        return VAR38;
    }
    if (VAR9->VAR25)
    {
        VAR15 = FUN3(&VAR9->VAR39, VAR13, VAR14, VAR2->VAR35, VAR17, VAR9->VAR36);
        if (VAR15 != VAR37)
        {
            FUN4(VAR2, "");
            return VAR38;
        }
    }
    VAR16 = FUN5(VAR2, VAR4, VAR2->VAR40);
    if (!VAR6 && VAR2->VAR17 & VAR41)
    {
        unsigned int VAR42 = FUN6(VAR9->VAR43.VAR44);
        VAR2->VAR45 = FUN2(VAR42);
        if (!VAR2->VAR45)
        {
            FUN7(VAR2, VAR46, "", VAR42);
            return FUN8(VAR47);
        }
        FUN9(VAR2->VAR45, VAR42, VAR9->VAR43.VAR48, VAR9->VAR43.VAR44);
    }
    if (VAR13)
    {
        FUN10(&VAR13->VAR18[VAR21]);
        FUN10(&VAR13->VAR18[VAR22]);
    }
    *VAR7 = !!VAR16;
    return 0;
}