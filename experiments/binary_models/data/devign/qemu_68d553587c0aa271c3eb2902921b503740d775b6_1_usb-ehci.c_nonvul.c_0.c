static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)&VAR2->VAR4;
    uint32_t VAR5 = sizeof(VAR6) >> 2;
    uint32_t VAR7 = FUN2(VAR2->VAR8);
    FUN3(VAR2->VAR9, VAR7 + 3 * sizeof(VAR3), VAR4 + 3, VAR5 - 3);
}