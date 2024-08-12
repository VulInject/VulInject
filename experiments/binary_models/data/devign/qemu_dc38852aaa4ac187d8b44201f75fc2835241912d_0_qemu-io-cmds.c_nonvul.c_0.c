static void FUN1(const char *VAR1, struct VAR2 *VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int VAR7, bool VAR8)
{
    char VAR9[64], VAR10[64], VAR11[64];
    FUN2(VAR3, VAR11, sizeof(VAR11), VAR8 ? VAR12 : 0);
    if (!VAR8)
    {
        FUN3((double)VAR6, VAR9, sizeof(VAR9));
        FUN3(FUN4((double)VAR6, *VAR3), VAR10, sizeof(VAR10));
        FUN5("" VAR13 "" VAR13 "" VAR13 "", VAR1, VAR6, VAR5, VAR4);
        FUN5("", VAR9, VAR7, VAR11, VAR10, FUN4((double)VAR7, *VAR3));
    }
    else
    {
        FUN5("" VAR13 "", VAR6, VAR7, VAR11, FUN4((double)VAR6, *VAR3), FUN4((double)VAR7, *VAR3));
    }
}