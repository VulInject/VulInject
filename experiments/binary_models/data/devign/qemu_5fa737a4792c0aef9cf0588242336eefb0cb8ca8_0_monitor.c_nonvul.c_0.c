static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR7;
    VAR7 = VAR1;
    FUN2(&VAR7->VAR8->VAR9, (const char *)VAR3, VAR4);
    VAR7 = VAR6;
}