void FUN1(const char *VAR1, void *VAR2)
{
    VAR3 *VAR4, *VAR5;
    FUN2(VAR4, &VAR6, VAR7, VAR5)
    {
        if (strcmp(VAR4->VAR1, VAR1) == 0 && VAR4->VAR2 == VAR2)
        {
            FUN3(&VAR6, VAR4, VAR7);
            FUN4(VAR4);
        }
    }
}