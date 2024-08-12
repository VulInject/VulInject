static int FUN1(rados_t VAR1, const char *VAR2, VAR3 **VAR4)
{
    char *VAR5, *VAR6;
    char *VAR7;
    char *VAR8;
    int VAR9 = 0;
    VAR6 = FUN2(VAR2);
    VAR5 = VAR6;
    while (VAR5)
    {
        VAR7 = FUN3(VAR5, '', &VAR5);
        if (!VAR5)
        {
            FUN4(VAR4, "", VAR7);
            VAR9 = -VAR10;
            break;
        }
        VAR8 = FUN3(VAR5, '', &VAR5);
        VAR9 = FUN5(VAR1, VAR7, VAR8);
        if (VAR9 < 0)
        {
            FUN6(VAR4, -VAR9, "", VAR7);
            VAR9 = -VAR10;
            break;
        }
    }
    FUN7(VAR6);
    return VAR9;
}