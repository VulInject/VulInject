static VAR1 FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    int64_t VAR8;
    VAR8 = FUN2(VAR9, VAR5);
    if (VAR8 < 0)
    {
        return -1;
    }
    VAR7 = FUN3(sizeof(VAR6));
    VAR7->VAR10 = VAR8;
    VAR7->VAR3 = VAR3;
    FUN4(&VAR11.VAR12, VAR7, VAR13);
    return VAR8;
}