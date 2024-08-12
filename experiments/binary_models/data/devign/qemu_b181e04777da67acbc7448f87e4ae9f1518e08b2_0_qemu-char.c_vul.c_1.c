static VAR1 *FUN1(VAR2 *VAR3)
{
    const char *VAR4 = FUN2(VAR3, "");
    VAR1 *VAR5;
    int VAR6;
    FUN3(VAR6 = open(VAR4, VAR7 | VAR8));
    if (VAR6 < 0)
    {
        return NULL;
    }
    FUN4(VAR6, 115200, '', 8, 1);
    VAR5 = FUN5(VAR6, VAR6);
    if (!VAR5)
    {
        close(VAR6);
        return NULL;
    }
    VAR5->VAR9 = VAR10;
    VAR5->VAR11 = VAR12;
    return VAR5;
}