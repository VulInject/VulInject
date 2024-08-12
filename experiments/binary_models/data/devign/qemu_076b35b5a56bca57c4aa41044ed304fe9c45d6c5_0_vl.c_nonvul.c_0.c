int FUN1(VAR1 *VAR2)
{
    char *VAR3 = FUN2(VAR2->VAR3, VAR4, NULL);
    TypeInfo VAR5 = {
        .VAR3 = VAR3,
        .VAR6 = VAR7,
        .VAR8 = VAR9,
        .VAR10 = (void *)VAR2,
    };
    FUN3(&VAR5);
    FUN4(VAR3);
    return 0;
}