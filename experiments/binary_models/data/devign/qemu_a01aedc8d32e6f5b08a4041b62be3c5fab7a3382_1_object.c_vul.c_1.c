void FUN1(VAR1 *VAR2, const char *VAR3, char *(*VAR4)(VAR1 *, VAR5 **), void (*VAR6)(VAR1 *, const char *, VAR5 **), VAR5 **VAR7)
{
    VAR8 *VAR9 = FUN2(sizeof(*VAR9));
    VAR9->VAR4 = VAR4;
    VAR9->VAR6 = VAR6;
    FUN3(VAR2, VAR3, "", VAR4 ? VAR10 : NULL, VAR6 ? VAR11 : NULL, VAR12, VAR9, VAR7);
}