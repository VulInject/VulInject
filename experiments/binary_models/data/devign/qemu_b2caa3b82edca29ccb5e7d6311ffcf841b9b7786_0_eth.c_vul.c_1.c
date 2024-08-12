FUN1(const struct VAR1 *VAR2, int VAR3, size_t VAR4, struct VAR5 *VAR6, struct VAR7 *VAR8)
{
    size_t VAR9 = (VAR6->VAR10 + 1) * 8 - sizeof(*VAR6);
    struct ip6_option_hdr VAR11;
    size_t VAR12 = VAR4 + sizeof(*VAR6);
    while (VAR9 > sizeof(VAR11))
    {
        size_t VAR13 = FUN2(VAR2, VAR3);
        size_t VAR14, VAR15;
        if (VAR13 < VAR12)
        {
            return false;
        }
        VAR14 = FUN3(VAR2, VAR3, VAR12, &VAR11, sizeof(VAR11));
        if (VAR14 != sizeof(VAR11))
        {
            return false;
        }
        VAR15 = (VAR11.VAR16 == VAR17) ? 1 : (VAR11.VAR18 + sizeof(VAR11));
        if (VAR15 > VAR9)
        {
            return false;
        }
        if (VAR11.VAR16 == VAR19)
        {
            size_t VAR13 = FUN2(VAR2, VAR3);
            if (VAR13 < VAR12 + sizeof(VAR11))
            {
                return false;
            }
            VAR14 = FUN3(VAR2, VAR3, VAR12 + sizeof(VAR11), VAR8, sizeof(*VAR8));
            return VAR14 == sizeof(VAR8);
        }
        VAR12 += VAR15;
        VAR9 -= VAR15;
    }
    return false;
}