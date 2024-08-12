static void *FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = FUN2(sizeof(VAR4));
    if (FUN3(VAR3))
    {
        return NULL;
    }
    VAR5->VAR2 = VAR2;
    if (VAR3[0] == '')
    {
        VAR5->VAR6 = FUN4(VAR5, &VAR7);
    }
    else
    {
        VAR5->VAR6 = FUN4(VAR5, &VAR8);
    }
    return VAR5->VAR6;
}