static int FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4];
    int VAR5;
    VAR5 = FUN2(VAR2, "", VAR3, sizeof(VAR3));
    if (VAR5)
    {
        return VAR5;
    }
    VAR2->VAR6 = open(VAR3, VAR7);
    if (VAR2->VAR6 < 0)
    {
        return -VAR8;
    }
    return 0;
}