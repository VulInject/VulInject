int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, AVRational VAR6, int VAR7, int VAR8, enum PixelFormat VAR9, const char *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    if (VAR12->VAR15)
    {
        FUN2(VAR2, VAR16, ""
                                            "");
    }
    if (VAR7 != VAR12->VAR17 || VAR8 != VAR12->VAR18 || VAR9 != VAR12->VAR9)
    {
        VAR1 *VAR19 = VAR2->VAR20[0]->VAR21;
        VAR22 *VAR23;
        FUN2(VAR2, VAR24, "", VAR7, VAR8, VAR9, VAR12->VAR9, VAR19->VAR20[0]->VAR25);
        if (!VAR19 || strcmp(VAR19->VAR26->VAR27, ""))
        {
            VAR28 *VAR29 = FUN3("");
            FUN2(VAR2, VAR24, "");
            if (FUN4(&VAR19, VAR29, "") < 0)
                return -1;
            if ((VAR14 = FUN5(VAR19, VAR10, NULL)) < 0)
            {
                FUN6(VAR19);
                return VAR14;
            }
            if ((VAR14 = FUN7(VAR2->VAR20[0], VAR19, 0, 0)) < 0)
            {
                FUN6(VAR19);
                return VAR14;
            }
            VAR19->VAR20[0]->VAR25 = VAR12->VAR9;
        }
        VAR12->VAR9 = VAR19->VAR30[0]->VAR25 = VAR9;
        VAR12->VAR17 = VAR19->VAR30[0]->VAR17 = VAR7;
        VAR12->VAR18 = VAR19->VAR30[0]->VAR18 = VAR8;
        VAR23 = VAR19->VAR20[0];
        if ((VAR14 = VAR23->VAR31->FUN8(VAR23)) < 0)
            return VAR14;
    }
    memcpy(VAR12->VAR4.VAR32, VAR4->VAR32, sizeof(VAR4->VAR32));
    memcpy(VAR12->VAR4.VAR33, VAR4->VAR33, sizeof(VAR4->VAR33));
    VAR12->VAR4.VAR34 = VAR4->VAR34;
    VAR12->VAR4.VAR35 = VAR4->VAR35;
    VAR12->VAR4.VAR36 = VAR4->VAR36;
    VAR12->VAR4.VAR37 = VAR4->VAR37;
    VAR12->VAR5 = VAR5;
    VAR12->VAR6 = VAR6;
    VAR12->VAR15 = 1;
    return 0;
}