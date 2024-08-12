VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4, size_t VAR5)
{
    VAR1 *VAR6;
    if (FUN2(VAR4))
    {
        fprintf(VAR7, ""
                        "",
                VAR4);
        return NULL;
    }
    if (!VAR5)
    {
        return NULL;
    }
    VAR6 = FUN3(FUN4(VAR8));
    VAR6->VAR4 = VAR4;
    VAR6->VAR5 = VAR5;
    FUN5(FUN6(VAR3), "", FUN6(VAR6), NULL);
    FUN7(FUN8(VAR6));
    return VAR6;
}