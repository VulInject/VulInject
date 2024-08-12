int FUN1(const char *VAR1, int VAR2, int VAR3)
{
    int VAR4;
    int VAR5;
    wchar_t *VAR6;
    VAR5 = FUN2(VAR7, 0, VAR1, -1, NULL, 0);
    if (VAR5 <= 0)
        return -1;
    VAR6 = FUN3(sizeof(wchar_t) * VAR5);
    FUN2(VAR7, 0, VAR1, -1, VAR6, VAR5);
    VAR4 = FUN4(VAR6, VAR2, VAR8, VAR3);
    FUN5(&VAR6);
    if (VAR4 == -1 && !(VAR2 & VAR9))
        return FUN6(VAR1, VAR2, VAR8, VAR3);
    return VAR4;
}