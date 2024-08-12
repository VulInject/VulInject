VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR3 *VAR5, uint32_t VAR6)
{
    VAR1 *VAR7;
    VAR7 = FUN2(VAR2);
    if (!VAR7)
    {
        fprintf(VAR8, "", VAR2);
        FUN3(1);
    }
    VAR4->VAR9 = NULL;
    VAR4->VAR10 = VAR7;
    VAR5->VAR9 = FUN4(VAR7, VAR6, VAR11);
    VAR5->VAR10 = VAR7;
    FUN5(VAR7, NULL, NULL);
    FUN6((VAR12 *)&VAR13, VAR7);
    return VAR7;
}