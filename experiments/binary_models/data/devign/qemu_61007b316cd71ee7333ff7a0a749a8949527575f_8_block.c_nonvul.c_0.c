VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4, *VAR5;
    VAR6 *VAR7;
    VAR4 = NULL;
    FUN2(VAR7, &VAR8, VAR9)
    {
        VAR10 *VAR11 = FUN3(VAR7, VAR3);
        if (!VAR11)
        {
            FUN4(VAR4);
            return NULL;
        }
        VAR5 = FUN5(sizeof(*VAR5));
        VAR5->VAR12 = VAR11;
        VAR5->VAR13 = VAR4;
        VAR4 = VAR5;
    }
    return VAR4;
}