VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5)
{
    VAR1 *VAR6 = NULL;
    if (VAR4)
    {
        VAR6 = FUN2(VAR3, VAR4);
        if (VAR6 != NULL)
        {
            if (VAR5)
            {
                fprintf(VAR7, ""%VAR8\""%VAR8\"", VAR4, VAR3->VAR9);
                return NULL;
            }
            else
            {
                return VAR6;
            }
        }
    }
    VAR6 = FUN3(sizeof(*VAR6));
    if (VAR4)
    {
        VAR6->VAR4 = FUN4(VAR4);
    }
    VAR6->VAR3 = VAR3;
    FUN5(&VAR6->VAR10);
    FUN6(&VAR3->VAR10, VAR6, VAR11);
    return VAR6;
}