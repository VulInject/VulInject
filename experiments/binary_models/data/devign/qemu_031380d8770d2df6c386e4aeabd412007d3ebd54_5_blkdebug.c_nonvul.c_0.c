static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    char *VAR9, *VAR10;
    if (FUN2(VAR3, "", strlen("")))
    {
        return -VAR11;
    }
    VAR3 += strlen("");
    VAR10 = strchr(VAR3, '');
    if (VAR10 == NULL)
    {
        return -VAR11;
    }
    VAR9 = FUN3(VAR3);
    VAR9[VAR10 - VAR3] = '';
    VAR8 = FUN4(VAR6, VAR9);
    FUN5(VAR9);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    VAR3 = VAR10 + 1;
    VAR6->VAR12.VAR13 = 1;
    VAR8 = FUN6(&VAR2->VAR14, VAR3, VAR4);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    return 0;
}