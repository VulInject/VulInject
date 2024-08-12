static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8;
    *VAR5 = FUN2(VAR2, 0);
    if (!*VAR5)
        return FUN3(VAR9);
    FUN4(VAR7, (*VAR5)->VAR10, VAR3);
    if (VAR8 < 0)
        return VAR8;
    (*VAR5)->VAR11 = VAR12;
    FUN5(*VAR5, 64, 1, (*VAR5)->VAR10->VAR13);
    return 0;
}