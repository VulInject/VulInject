static int FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4, VAR5 **VAR6)
{
    FUN2(VAR6);
    *VAR6 = FUN3(VAR4);
    return *VAR6 ? 0 : FUN4(VAR7);
}