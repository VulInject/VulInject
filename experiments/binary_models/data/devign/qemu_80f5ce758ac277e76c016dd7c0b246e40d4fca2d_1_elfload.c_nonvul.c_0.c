static void FUN1(struct VAR1 *VAR2, const char *VAR3, int VAR4, unsigned int VAR5, void *VAR6)
{
    unsigned int VAR7;
    VAR7 = strlen(VAR3) + 1;
    VAR2->VAR3 = VAR3;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = FUN2(VAR7, sizeof(VAR9));
    VAR2->VAR4 = VAR4;
    VAR2->VAR10 = VAR5;
    VAR2->VAR11 = FUN2(VAR5, sizeof(VAR9));
    VAR2->VAR6 = VAR6;
    VAR2->VAR12 = sizeof(struct VAR13) + VAR2->VAR8 + VAR2->VAR11;
}