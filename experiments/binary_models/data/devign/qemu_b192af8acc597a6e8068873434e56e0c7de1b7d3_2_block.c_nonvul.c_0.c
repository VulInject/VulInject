static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, VAR6 **VAR7)
{
    VAR4 *VAR8;
    uint8_t VAR9[VAR10];
    int VAR11 = 0;
    if (FUN2(VAR2) || !FUN3(VAR2) || FUN4(VAR2) == 0)
    {
        *VAR5 = &VAR12;
        return VAR11;
    }
    VAR11 = FUN5(VAR2, 0, VAR9, sizeof(VAR9));
    if (VAR11 < 0)
    {
        FUN6(VAR7, -VAR11, ""
                                     "");
        *VAR5 = NULL;
        return VAR11;
    }
    VAR8 = FUN7(VAR9, VAR11, VAR3);
    if (!VAR8)
    {
        FUN8(VAR7, ""
                         "");
        VAR11 = -VAR13;
    }
    *VAR5 = VAR8;
    return VAR11;
}