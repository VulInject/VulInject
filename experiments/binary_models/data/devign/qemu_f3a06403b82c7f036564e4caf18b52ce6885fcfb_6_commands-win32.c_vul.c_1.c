static VAR1 FUN1(HANDLE VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int64_t VAR7;
    VAR7 = FUN2(VAR8, VAR4);
    if (VAR7 < 0)
    {
        return -1;
    }
    VAR6 = FUN3(sizeof(VAR5));
    VAR6->VAR9 = VAR7;
    VAR6->VAR2 = VAR2;
    FUN4(&VAR10.VAR11, VAR6, VAR12);
    return VAR7;
}