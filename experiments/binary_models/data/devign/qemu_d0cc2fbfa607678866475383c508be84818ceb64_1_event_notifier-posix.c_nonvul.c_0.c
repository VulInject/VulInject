int FUN1(VAR1 *VAR2)
{
    static const uint64_t VAR3 = 1;
    ssize_t VAR4;
    do
    {
        VAR4 = write(VAR2->VAR5, &VAR3, sizeof(VAR3));
    } while (VAR4 < 0 && VAR6 == VAR7);
    if (VAR4 < 0 && VAR6 != VAR8)
    {
        return -VAR6;
    }
    return 0;
}