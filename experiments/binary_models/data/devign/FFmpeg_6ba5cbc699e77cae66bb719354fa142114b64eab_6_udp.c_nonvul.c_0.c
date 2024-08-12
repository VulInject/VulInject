int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char VAR7[256];
    int VAR8;
    FUN2(NULL, 0, NULL, 0, VAR7, sizeof(VAR7), &VAR8, NULL, 0, VAR3);
    if (FUN3(&VAR5->VAR9.VAR10, VAR7) < 0)
        return VAR11;
    VAR5->VAR9.VAR12 = VAR13;
    VAR5->VAR9.VAR14 = FUN4(VAR8);
    return 0;
}