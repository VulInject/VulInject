static int FUN1(int VAR1, int VAR2, uint32_t VAR3)
{
    char VAR4[VAR5];
    int VAR6;
    ssize_t VAR7 = sizeof(VAR4);
    int VAR8 = snprintf(VAR4, VAR7, "", 0, 0, 0, 0, "");
    if (VAR8 >= VAR7 || VAR8 < 0)
    {
        return -VAR9;
    }
    VAR6 = open(VAR4, VAR10);
    if (VAR6 < 0)
    {
        return -VAR9;
    }
    if (FUN2(VAR6, VAR1, VAR11) != VAR1)
    {
        return -VAR12;
    }
    do
    {
        VAR8 = read(VAR6, (VAR13 *)&VAR3, VAR2);
    } while (VAR8 < 0 && (VAR12 == VAR14 || VAR12 == VAR15));
    if (VAR8 != VAR2)
    {
        return -VAR12;
    }
    return 0;
}