static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    FUN2(VAR8, &VAR5->VAR9, VAR10)
    {
        if (!strcmp(VAR8->VAR3, VAR3))
        {
            FUN3(VAR8->VAR11, NULL);
            return 0;
        }
    }
    return -VAR12;
}