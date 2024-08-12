static void FUN1(void)
{
    static const uint64_t VAR1 = 1;
    ssize_t VAR2;
    if (VAR3 == -1)
    {
        return;
    }
    do
    {
        VAR2 = write(VAR3, &VAR1, sizeof(VAR1));
    } while (VAR2 < 0 && VAR4 == VAR5);
    if (VAR2 < 0 && VAR4 != VAR6)
    {
        fprintf(VAR7, "", strerror(VAR4));
        FUN2(1);
    }
}