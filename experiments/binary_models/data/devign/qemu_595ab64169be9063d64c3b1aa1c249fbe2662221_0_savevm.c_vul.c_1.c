static int FUN1(void *VAR1, VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR1;
    ssize_t VAR8;
    do
    {
        VAR8 = FUN2(VAR7->VAR9, VAR3, VAR5, 0);
    } while (VAR8 == -1 && FUN3() == VAR10);
    if (VAR8 == -1)
        VAR8 = -FUN3();
    return VAR8;
}