int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    FUN2(VAR5, &VAR2->VAR6, VAR7)
    {
        if (FUN3(VAR5->VAR8, VAR3, 0) == 0)
            return VAR5->VAR9 ? 0 : 1;
        if (strcmp(VAR5->VAR8, VAR3) == 0)
            return VAR5->VAR9 ? 0 : 1;
    }
    return VAR2->VAR10 ? 0 : 1;
}