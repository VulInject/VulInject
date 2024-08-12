static inline void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    char *VAR6 = FUN2(VAR3);
    char *VAR7 = FUN2(VAR4);
    FUN3(""%VAR8\""%VAR8\"", VAR5, VAR6 ? VAR6 : "", VAR7 ? VAR7 : "");
    FUN4(VAR6);
    FUN4(VAR7);
}