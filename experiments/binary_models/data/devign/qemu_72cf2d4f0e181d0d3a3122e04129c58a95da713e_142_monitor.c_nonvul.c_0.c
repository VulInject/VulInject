int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    FUN2(VAR5, &VAR2->VAR6, VAR7)
    {
        int VAR8;
        if (strcmp(VAR5->VAR9, VAR3) != 0)
        {
            continue;
        }
        VAR8 = VAR5->VAR8;
        FUN3(VAR5, VAR7);
        FUN4(VAR5->VAR9);
        FUN4(VAR5);
        return VAR8;
    }
    return -1;
}