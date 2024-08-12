static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    FUN2(VAR2->VAR3, sizeof(VAR2->VAR3), VAR3 ?: "");
    FUN2(VAR2->VAR5, sizeof(VAR2->VAR5), VAR4 ?: "");
    return FUN3(VAR2);
}