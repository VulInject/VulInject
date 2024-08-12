static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    char *VAR5;
    ssize_t VAR6;
    size_t VAR7 = 4096 - VAR2->VAR8.VAR9;
    FUN2(&VAR2->VAR8, VAR7);
    VAR6 = FUN3(VAR2->VAR10, (char *)FUN4(&VAR2->VAR8), VAR7, VAR4);
    if (VAR6 < 0)
    {
        return -1;
    }
    VAR2->VAR8.VAR9 += VAR6;
    VAR5 = FUN5((char *)VAR2->VAR8.VAR11, VAR2->VAR8.VAR9, VAR12);
    if (!VAR5)
    {
        if (VAR2->VAR8.VAR9 >= 4096)
        {
            FUN6(VAR4, "");
            return -1;
        }
        else
        {
            return 0;
        }
    }
    *VAR5 = '';
    if (FUN7(VAR2, (char *)VAR2->VAR8.VAR11, VAR4) < 0)
    {
        return -1;
    }
    FUN8(&VAR2->VAR8, VAR5 - (char *)VAR2->VAR8.VAR11 + strlen(VAR12));
    return 1;
}