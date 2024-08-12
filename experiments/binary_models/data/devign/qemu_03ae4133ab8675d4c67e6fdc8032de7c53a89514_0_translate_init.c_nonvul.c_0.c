static VAR1 FUN1(gconstpointer VAR2, gconstpointer VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    uint32_t VAR6 = *(VAR7 *)VAR3;
    VAR8 *VAR9 = (VAR8 *)VAR2;
    if (FUN2(strcmp(FUN3(VAR5), VAR10) == 0))
    {
        return -1;
    }
    if (!FUN4(VAR9))
    {
        return -1;
    }
    if (VAR9->FUN5(VAR9, VAR6))
    {
        return 0;
    }
    return -1;
}