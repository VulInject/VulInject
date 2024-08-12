FUN1(const struct VAR1 *VAR2, int VAR3, size_t VAR4, struct VAR5 *VAR6, struct VAR7 *VAR8)
{
    struct VAR9 *VAR10 = (struct VAR9 *)VAR6;
    if ((VAR10->VAR11 == 2) && (VAR10->VAR12 == sizeof(struct VAR7) / 8) && (VAR10->VAR13 == 1))
    {
        size_t VAR14 = FUN2(VAR2, VAR3);
        size_t VAR15;
        if (VAR14 < VAR4 + sizeof(*VAR6))
        {
            return false;
        }
        VAR15 = FUN3(VAR2, VAR3, VAR4 + sizeof(*VAR6), VAR8, sizeof(*VAR8));
        return VAR15 == sizeof(VAR8);
    }
    return false;
}