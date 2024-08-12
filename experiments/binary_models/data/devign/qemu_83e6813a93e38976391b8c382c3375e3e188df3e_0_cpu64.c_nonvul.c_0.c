static void FUN1(const VAR1 *VAR2)
{
    TypeInfo VAR3 = {
        .VAR4 = VAR5,
        .VAR6 = sizeof(VAR7),
        .VAR8 = VAR2->VAR9,
        .VAR10 = sizeof(VAR11),
        .VAR12 = VAR2->VAR12,
    };
    VAR3.VAR13 = FUN2("" VAR14, VAR2->VAR13);
    FUN3(&VAR3);
    FUN4((void *)VAR3.VAR13);
}