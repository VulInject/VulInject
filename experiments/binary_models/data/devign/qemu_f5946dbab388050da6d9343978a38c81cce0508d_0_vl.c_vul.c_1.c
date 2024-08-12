int FUN1(VAR1 *VAR2)
{
    TypeInfo VAR3 = {
        .VAR4 = FUN2(VAR2->VAR4, VAR5, NULL),
        .VAR6 = VAR7,
        .VAR8 = VAR9,
        .VAR10 = (void *)VAR2,
    };
    FUN3(&VAR3);
    return 0;
}