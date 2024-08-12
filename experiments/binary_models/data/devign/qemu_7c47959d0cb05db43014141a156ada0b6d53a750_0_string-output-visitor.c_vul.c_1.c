static void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = FUN2(sizeof(*VAR5));
    VAR5->VAR6 = VAR3;
    VAR5->VAR7 = VAR3 + 1;
    VAR2->VAR8 = FUN3(VAR2->VAR8, VAR5, VAR9);
}