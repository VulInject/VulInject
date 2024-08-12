VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    if (FUN2(VAR3))
    {
        return NULL;
    }
    VAR5 = FUN3(sizeof(VAR4));
    VAR5->VAR6 = fopen(VAR2, VAR3);
    if (!VAR5->VAR6)
    {
        goto VAR7;
    }
    if (VAR3[0] == '')
    {
        VAR5->VAR8 = FUN4(VAR5, &VAR9);
    }
    else
    {
        VAR5->VAR8 = FUN4(VAR5, &VAR10);
    }
    return VAR5->VAR8;
VAR7:
    FUN5(VAR5);
    return NULL;
}