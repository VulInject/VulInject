static VAR1 FUN1(void *VAR2, const void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR2;
    ssize_t VAR7;
    do
    {
        VAR7 = send(VAR6->VAR8, VAR3, VAR4, 0);
    } while (VAR7 == -1 && VAR9 == VAR10);
    if (VAR7 == -1)
        VAR7 = -VAR9;
    if (VAR7 == -VAR11)
        FUN2(VAR6->VAR8, NULL, NULL, VAR12, VAR6);
    return VAR7;
}