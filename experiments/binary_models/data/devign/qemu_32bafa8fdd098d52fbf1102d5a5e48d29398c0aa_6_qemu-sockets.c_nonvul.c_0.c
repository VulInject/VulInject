FUN1(struct VAR1 *VAR2, socklen_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    struct VAR8 *VAR9 = (struct VAR8 *)VAR2;
    VAR7 = FUN2(VAR6, 1);
    VAR7->VAR10 = VAR11;
    VAR7->VAR12.VAR13.VAR14 = FUN2(VAR15, 1);
    if (VAR9->VAR16[0])
    {
        VAR7->VAR12.VAR13.VAR14->VAR17 = FUN3(VAR9->VAR16, sizeof(VAR9->VAR16));
    }
    return VAR7;
}