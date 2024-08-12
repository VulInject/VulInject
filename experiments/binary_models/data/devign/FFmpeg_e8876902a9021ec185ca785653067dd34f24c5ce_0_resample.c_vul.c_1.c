VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, enum AVSampleFormat VAR6, enum AVSampleFormat VAR7, int VAR8, int VAR9, int VAR10, double VAR11)
{
    VAR1 *VAR12;
    if (VAR3 > VAR13)
    {
        FUN2(NULL, VAR14, "", VAR13);
        return NULL;
    }
    if (VAR2 > 2 && !(VAR2 == 6 && VAR3 == 2) && VAR2 != VAR3)
    {
        FUN2(NULL, VAR14, "");
        return NULL;
    }
    VAR12 = FUN3(sizeof(VAR1));
    if (!VAR12)
    {
        FUN2(NULL, VAR14, "");
        return NULL;
    }
    VAR12->VAR15 = (float)VAR4 / (float)VAR5;
    VAR12->VAR3 = VAR3;
    VAR12->VAR2 = VAR2;
    VAR12->VAR16 = VAR12->VAR3;
    if (VAR12->VAR2 < VAR12->VAR16)
        VAR12->VAR16 = VAR12->VAR2;
    VAR12->VAR17[0] = VAR7;
    VAR12->VAR17[1] = VAR6;
    VAR12->VAR18[0] = FUN4(VAR12->VAR17[0]) >> 3;
    VAR12->VAR18[1] = FUN4(VAR12->VAR17[1]) >> 3;
    if (VAR12->VAR17[0] != VAR19)
    {
        if (!(VAR12->VAR20[0] = FUN5(VAR19, 1, VAR12->VAR17[0], 1, NULL, 0)))
        {
            FUN2(VAR12, VAR14, "", FUN6(VAR12->VAR17[0]));
            FUN7(VAR12);
            return NULL;
        }
    }
    if (VAR12->VAR17[1] != VAR19)
    {
        if (!(VAR12->VAR20[1] = FUN5(VAR12->VAR17[1], 1, VAR19, 1, NULL, 0)))
        {
            FUN2(VAR12, VAR14, "", FUN6(VAR12->VAR17[1]));
            FUN8(VAR12->VAR20[0]);
            FUN7(VAR12);
            return NULL;
        }
    }
    VAR12->VAR21 = FUN9(VAR4, VAR5, VAR8, VAR9, VAR10, VAR11);
    *(const VAR22 **)VAR12->VAR21 = &VAR23;
    return VAR12;
}