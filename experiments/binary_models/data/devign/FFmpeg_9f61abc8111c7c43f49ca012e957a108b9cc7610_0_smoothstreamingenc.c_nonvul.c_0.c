static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, int64_t VAR5)
{
    VAR6 *VAR7, *VAR8;
    int VAR9 = 0;
    if ((VAR9 = VAR2->FUN2(VAR2, &VAR7, VAR3, VAR10, NULL)) < 0)
        return VAR9;
    if ((VAR9 = VAR2->FUN2(VAR2, &VAR8, VAR4, VAR11, NULL)) < 0)
    {
        FUN3(VAR2, &VAR7);
        return VAR9;
    }
    while (VAR5 > 0)
    {
        uint8_t VAR12[8192];
        int VAR13 = FUN4(VAR5, sizeof(VAR12));
        VAR13 = FUN5(VAR7, VAR12, VAR13);
        if (VAR13 <= 0)
        {
            VAR9 = FUN6(VAR14);
            break;
        }
        FUN7(VAR8, VAR12, VAR13);
        VAR5 -= VAR13;
    }
    FUN8(VAR8);
    FUN3(VAR2, &VAR8);
    FUN3(VAR2, &VAR7);
    return VAR9;
}