void FUN1(struct VAR1 *VAR2)
{
    struct VAR1 **VAR3 = &VAR2->VAR4->VAR5;
    while (*VAR3 && *VAR3 != VAR2)
        VAR3 = &(*VAR3)->VAR6;
    if (*VAR3 != VAR2)
    {
        fprintf(VAR7, ""%VAR8\"", VAR9, VAR2->VAR10 ?: "");
        FUN2(-1);
    }
    *VAR3 = VAR2->VAR6;
}