static int FUN1(const struct VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4)
        return FUN2(((const struct VAR5 *)VAR2)->VAR6);
    if (VAR2->VAR3 == VAR7)
        return FUN2(((const struct VAR8 *)VAR2)->VAR9);
    return 0;
}