int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2 ? (VAR4 *)VAR2->VAR6 : VAR7;
    if (!VAR5)
    {
        return -VAR8;
    }
    if (!VAR3)
    {
        return FUN2(VAR2);
    }
    if (VAR5->VAR3)
    {
        FUN3(VAR5->VAR3);
        VAR5->VAR3 = NULL;
    }
    VAR5->VAR3 = FUN4(VAR3);
    if (VAR5->VAR9 == VAR10)
    {
        VAR5->VAR9 = VAR11;
    }
    return 0;
}