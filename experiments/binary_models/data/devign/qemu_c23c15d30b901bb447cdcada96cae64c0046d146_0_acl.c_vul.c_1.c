int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    int VAR6 = 0;
    FUN2(VAR5, &VAR2->VAR7, VAR8)
    {
        VAR6++;
        if (strcmp(VAR5->VAR3, VAR3) == 0)
        {
            FUN3(&VAR2->VAR7, VAR5, VAR8);
            return VAR6;
        }
    }
    return -1;