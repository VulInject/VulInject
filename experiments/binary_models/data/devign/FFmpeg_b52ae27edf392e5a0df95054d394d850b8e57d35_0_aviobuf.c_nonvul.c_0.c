int FUN1(VAR1 *VAR2, const char *VAR3)
{
    const VAR4 *VAR5 = VAR3;
    int VAR6 = 0;
    while (*VAR5)
    {
        uint32_t VAR7;
        uint16_t VAR8;
        FUN2(VAR7, *VAR5++, goto VAR9;)
        FUN3(VAR7, VAR8, FUN4(VAR2, VAR8); VAR6 += 2;) continue;
    VAR9:
        FUN5(VAR2, VAR10, "");
    }
    FUN4(VAR2, 0);
    VAR6 += 2;
    return VAR6;
}