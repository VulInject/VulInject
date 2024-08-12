static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    VAR6 **VAR7 = FUN2(VAR2, VAR4);
    *VAR7 = FUN3(VAR5);
    if (*VAR7 == NULL)
    {
        return -VAR8;
    }
    if ((*VAR7)->VAR9)
    {
        return -VAR10;
    }
    (*VAR7)->VAR9 = 1;
    return 0;
}