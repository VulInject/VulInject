static void FUN1(TCGv VAR1)
{
    FUN2(VAR2, VAR1, ~((1u << VAR3) | (1u << VAR4) | (1u << VAR5)));
    FUN3(VAR6, VAR1, VAR3, 1);
    FUN3(VAR7, VAR1, VAR4, 1);
    FUN3(VAR8, VAR1, VAR5, 1);
}