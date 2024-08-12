VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR3 *VAR5, uint32_t VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(FUN3(VAR10, VAR2));
    if (VAR7 == NULL)
    {
        fprintf(VAR11, "", VAR2);
        FUN4(1);
    }
    VAR9 = &VAR7->VAR9;
    VAR4->VAR12 = NULL;
    VAR4->VAR13 = VAR9;
    VAR5->VAR12 = FUN5(VAR9, VAR6, VAR14);
    VAR5->VAR13 = VAR9;
    FUN6(VAR9, NULL, NULL);
    FUN7(VAR15, VAR7);
    return VAR7;
}