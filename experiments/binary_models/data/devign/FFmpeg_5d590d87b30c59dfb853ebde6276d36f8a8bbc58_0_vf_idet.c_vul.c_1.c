static int FUN1(VAR1 **VAR2, const char *VAR3, uint64_t VAR4, unsigned int VAR5, int VAR6)
{
    char VAR7[44];
    snprintf(VAR7, sizeof(VAR7), "" VAR8 "" VAR8, VAR4 / VAR9, VAR5, (VAR4 % VAR9) / (VAR9 / FUN2(10, VAR5)));
    return FUN3(VAR2, VAR3, VAR7, VAR6);
}