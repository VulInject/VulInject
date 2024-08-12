int FUN1(VAR1 *VAR2, const void *VAR3, void *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    switch (VAR2->VAR11)
    {
    case VAR12:
        VAR9->FUN2(VAR9->VAR13, VAR5, VAR4, VAR3);
        break;
    case VAR14:
        FUN3(VAR9->VAR13, VAR9->VAR15, VAR9->VAR16, VAR9->VAR17, VAR5, VAR4, VAR3);
        break;
    default:
        FUN4(VAR7, "", VAR2->VAR18);
        return -1;
    }
    return 0;
}