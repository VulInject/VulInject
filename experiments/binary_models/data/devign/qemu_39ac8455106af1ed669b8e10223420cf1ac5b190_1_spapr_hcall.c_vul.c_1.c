VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, VAR1 *VAR5)
{
    if (VAR6)
    {
        FUN2("");
        return VAR7;
    }
    if ((VAR4 <= VAR8) && ((VAR4 & 0x3) == 0))
    {
        spapr_hcall_fn VAR9 = VAR10[VAR4 / 4];
        if (VAR9)
        {
            return FUN3(VAR3, VAR11, VAR4, VAR5);
        }
    }
    FUN2("" VAR12 "", VAR4);
    return VAR13;
}