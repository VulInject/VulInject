char *FUN1(const char *VAR1)
{
    VAR2 *VAR3 = FUN2(VAR1);
    VAR4 *VAR5;
    char *VAR6;
    VAR7 *VAR8 = NULL;
    assert(VAR3);
    VAR5 = FUN3(VAR3->VAR9, &VAR8);
    if (!VAR5)
    {
        return NULL;
    }
    if (VAR5->VAR10 != VAR11)
    {
        FUN4(VAR5);
        return NULL;
    }
    VAR6 = FUN5("", VAR5->VAR12.VAR13.VAR14->VAR15, VAR5->VAR12.VAR13.VAR14->VAR16);
    FUN4(VAR5);
    return VAR6;
}