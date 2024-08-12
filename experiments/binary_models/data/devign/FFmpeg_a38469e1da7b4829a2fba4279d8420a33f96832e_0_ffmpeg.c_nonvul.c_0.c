int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    VAR1 *VAR5;
    VAR5 = FUN2(VAR3, NULL, VAR6, NULL);
    if (!VAR5)
        return -VAR7;
    VAR2->VAR8 = VAR5->VAR8;
    for (VAR4 = 0; VAR4 < VAR5->VAR8; VAR4++)
    {
        VAR9 *VAR10;
        VAR10 = FUN3(sizeof(VAR1));
        memcpy(VAR10, VAR5->VAR11[VAR4], sizeof(VAR9));
        VAR2->VAR11[VAR4] = VAR10;
    }
    FUN4(VAR5);
    return 0;
}