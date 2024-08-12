VAR1 FUN1(void *VAR2, const void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR2;
    ssize_t VAR7;
    do
    {
        VAR7 = VAR6->write(VAR6, VAR3, VAR4);
    } while (VAR7 == -1 && ((VAR6->FUN2(VAR6)) == VAR8));
    if (VAR7 == -1)
        VAR7 = -(VAR6->FUN2(VAR6));
    if (VAR7 == -VAR9)
        FUN3(VAR6->VAR10, NULL, NULL, VAR11, VAR6);
    return VAR7;
}