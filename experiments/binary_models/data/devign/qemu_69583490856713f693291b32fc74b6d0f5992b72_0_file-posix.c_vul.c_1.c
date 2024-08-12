static int FUN1(const struct VAR1 *VAR2)
{
    char VAR3[32];
    const char *VAR4;
    char *VAR5;
    int VAR6;
    int VAR7 = -1;
    long VAR8;
    VAR5 = FUN2("", FUN3(VAR2->VAR9), FUN4(VAR2->VAR9));
    VAR7 = open(VAR5, VAR10);
    if (VAR7 == -1)
    {
        VAR6 = -VAR11;
        goto VAR12;
    }
    do
    {
        VAR6 = read(VAR7, VAR3, sizeof(VAR3));
    } while (VAR6 == -1 && VAR11 == VAR13);
    if (VAR6 < 0)
    {
        VAR6 = -VAR11;
        goto VAR12;
    }
    else if (VAR6 == 0)
    {
        VAR6 = -VAR14;
        goto VAR12;
    }
    VAR3[VAR6] = 0;
    VAR6 = FUN5(VAR3, &VAR4, 10, &VAR8);
    if (VAR6 == 0 && VAR4 && *VAR4 == '')
    {
        VAR6 = VAR8;
    }
VAR12:
    FUN6(VAR5);
    return VAR6;
    return -VAR15;
}