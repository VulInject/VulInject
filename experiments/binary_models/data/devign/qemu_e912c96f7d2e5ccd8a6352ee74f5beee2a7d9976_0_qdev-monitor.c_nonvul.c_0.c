static VAR1 *FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7, *VAR8;
    int VAR9 = 1;
    if (VAR3 && (strcmp(VAR2->VAR3, VAR3) != 0))
    {
        VAR9 = 0;
    }
    if (VAR4 && !FUN2(FUN3(VAR2), VAR4))
    {
        VAR9 = 0;
    }
    if (VAR9)
    {
        return VAR2;
    }
    FUN4(VAR6, &VAR2->VAR10, VAR11)
    {
        VAR12 *VAR13 = VAR6->VAR7;
        FUN5(VAR7, &VAR13->VAR14, VAR11)
        {
            VAR8 = FUN1(VAR7, VAR3, VAR4);
            if (VAR8)
            {
                return VAR8;
            }
        }
    }
    return NULL;
}