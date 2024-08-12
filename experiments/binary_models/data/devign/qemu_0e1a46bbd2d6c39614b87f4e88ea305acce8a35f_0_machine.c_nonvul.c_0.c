static bool FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR3->VAR5;
    return FUN2(VAR5, VAR6) && FUN2(VAR5, VAR7) && !FUN2(VAR5, VAR8);
}