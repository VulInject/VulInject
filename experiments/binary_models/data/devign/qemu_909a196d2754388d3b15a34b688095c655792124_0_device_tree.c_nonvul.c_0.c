VAR1 FUN1(void *VAR2, const char *VAR3)
{
    uint32_t VAR4;
    VAR4 = FUN2(VAR2, FUN3(VAR2, VAR3));
    if (VAR4 == 0)
    {
        fprintf(VAR5, "", VAR6, VAR3, FUN4(VAR4));
        FUN5(1);
    }
    return VAR4;
}