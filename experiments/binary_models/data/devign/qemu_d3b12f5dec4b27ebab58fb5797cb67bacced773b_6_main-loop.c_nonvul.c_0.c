static void FUN1(void *VAR1)
{
    int VAR2 = (VAR3)VAR1;
    ssize_t VAR4;
    char VAR5[512];
    do
    {
        VAR4 = read(VAR2, VAR5, sizeof(VAR5));
    } while ((VAR4 == -1 && VAR6 == VAR7) || VAR4 == sizeof(VAR5));
}