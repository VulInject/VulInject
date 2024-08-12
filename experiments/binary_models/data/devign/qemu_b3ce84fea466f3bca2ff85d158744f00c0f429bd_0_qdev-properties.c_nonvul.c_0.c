void FUN1(VAR1 *VAR2, const char *typename, VAR3 **VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR6, &VAR7, VAR8)
    {
        VAR3 *VAR9 = NULL;
        if (strcmp(typename, VAR6->VAR10) != 0)
        {
            continue;
        }
        VAR6->VAR11 = true;
        FUN3(FUN4(VAR2), VAR6->VAR12, VAR6->VAR13, &VAR9);
        if (VAR9 != NULL)
        {
            FUN5(VAR4, VAR9);
            return;
        }
    }
}