int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    if ((VAR6 >= 0x80000000 && VAR6 < 0xc0000000) || VAR6 >= 0xe0000000)
    {
        if (!(VAR2->VAR9 & VAR10) && (VAR6 < 0xe0000000 || VAR6 > 0xe4000000))
        {
            fprintf(VAR11, "");
            return (VAR7 & VAR12) ? VAR13 : VAR14;
        }
        if (VAR6 >= 0x80000000 && VAR6 < 0xc0000000)
        {
            *VAR4 = VAR6 & 0x1fffffff;
        }
        else if (VAR6 >= 0xfc000000)
        {
            *VAR4 = VAR6 & 0x1fffffff;
        }
        else
        {
            *VAR4 = VAR6;
        }
        *VAR5 = VAR15 | VAR12;
        return VAR16;
    }
    if (!VAR2->VAR17 & VAR18)
    {
        *VAR4 = VAR6 & 0x1FFFFFFF;
        *VAR5 = VAR15 | VAR12;
        return VAR16;
    }
    return FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
}