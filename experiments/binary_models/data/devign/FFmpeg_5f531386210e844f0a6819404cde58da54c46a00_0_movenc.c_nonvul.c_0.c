static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, int VAR7)
{
    VAR8 *VAR9 = NULL;
    uint8_t VAR10;
    if (!(VAR9 = FUN2(VAR2->VAR11, VAR6, NULL, 0)))
        return 0;
    VAR10 = FUN3(VAR9->VAR12);
    FUN4(VAR4, VAR7 + 8);
    FUN5(VAR4, VAR5);
    if (VAR7 == 4)
        FUN4(VAR4, VAR10);
    else
        FUN6(VAR4, VAR10);
    return VAR7 + 8;
}