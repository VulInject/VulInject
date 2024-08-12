VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, uint64_t VAR5, uint32_t VAR6, uint32_t VAR7, bool VAR8)
{
    VAR1 *VAR9;
    char VAR10[64];
    if (FUN2(VAR4))
    {
        fprintf(VAR11, ""
                        "",
                VAR4);
        return NULL;
    }
    if (!VAR7)
    {
        return NULL;
    }
    VAR9 = FUN3(FUN4(VAR12));
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;
    VAR9->VAR8 = VAR8;
    snprintf(VAR10, sizeof(VAR10), "", VAR4);
    FUN5(FUN6(VAR3), VAR10, FUN6(VAR9), NULL);
    FUN7(FUN6(VAR9), true, "", NULL);
    return VAR9;
}