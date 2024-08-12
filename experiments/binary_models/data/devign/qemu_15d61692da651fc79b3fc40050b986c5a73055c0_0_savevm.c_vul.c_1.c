static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    const char *VAR5 = FUN2(VAR6)->VAR7;
    if (FUN3(VAR4->VAR7, VAR5, VAR4->VAR8) != 0)
    {
        FUN4("", VAR4->VAR7, VAR5);
        return -VAR9;
    }
    return 0;
}