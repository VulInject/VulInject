static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (FUN2(VAR2, VAR4) < 0)
    {
        return -VAR6;
    }
    while (VAR4->VAR7)
    {
        VAR5 = FUN3(VAR4, VAR8, NULL);
        if (VAR5 < 0)
        {
            fprintf(VAR9, "");
            return -VAR6;
        }
    }
    FUN4(VAR4);
    return 0;
}