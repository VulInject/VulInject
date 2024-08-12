static int FUN1(const char *VAR1, const char *VAR2)
{
    const char *VAR3 = VAR1;
    int VAR4, VAR5;
    for (; !(VAR4 = *(const unsigned char *)VAR1 - *(const unsigned char *)VAR2) && *VAR1; VAR1++, VAR2++)
        ;
    for (; FUN2(*VAR1) && FUN2(*VAR2); VAR1++, VAR2++)
        ;
    if (VAR1 > VAR3 && FUN2(VAR1[-1]) && (VAR5 = FUN2(*VAR1) - FUN2(*VAR2)))
        return VAR5;
    return VAR4;
}