int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int VAR7)
{
    if (VAR4 > VAR5 || VAR6 < VAR5)
        return -1;
    if (VAR2->VAR8->VAR9)
    {
        FUN2(VAR2);
        return VAR2->VAR8->FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
    }
    if (VAR2->VAR8->VAR10)
    {
    }
    if (VAR2->VAR8->VAR11 || 1)
        return FUN4(VAR2, VAR3, VAR5, VAR7 | (VAR5 - VAR4 > (VAR12)(VAR6 - VAR5) ? VAR13 : 0));
}