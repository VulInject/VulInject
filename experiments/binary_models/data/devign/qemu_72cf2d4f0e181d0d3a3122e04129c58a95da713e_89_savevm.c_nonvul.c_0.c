static int FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    int VAR4 = 0;
    FUN2(VAR3, &VAR5, VAR6)
    {
        if (strcmp(VAR1, VAR3->VAR1) == 0 && VAR4 <= VAR3->VAR4)
        {
            VAR4 = VAR3->VAR4 + 1;
        }
    }
    return VAR4;
}