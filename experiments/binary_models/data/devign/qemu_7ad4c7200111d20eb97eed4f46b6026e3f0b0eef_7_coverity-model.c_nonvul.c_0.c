char *FUN1(const char *VAR1)
{
    char *VAR2;
    size_t VAR3;
    if (!VAR1)
    {
        return NULL;
    }
    FUN2(VAR1);
    FUN3(VAR1);
    VAR2 = FUN4();
    FUN5(VAR2, "");
    for (VAR3 = 0; (VAR2[VAR3] = VAR1[VAR3]); VAR3++)
        ;
    return VAR2;
}