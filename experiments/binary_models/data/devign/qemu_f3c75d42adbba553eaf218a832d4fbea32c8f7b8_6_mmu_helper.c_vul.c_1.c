void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    FUN2("" VAR4 "", VAR5, VAR3);
    if (VAR2->VAR6[VAR7] != VAR3)
    {
        VAR2->VAR6[VAR7] = VAR3;
        if (VAR2->VAR8 & VAR9)
        {
            target_ulong VAR10 = VAR3 & VAR11;
            if (VAR10 > 28)
            {
                fprintf(VAR12, "" VAR4 "", VAR10);
                VAR10 = 28;
            }
            VAR2->VAR13 = (1ULL << (VAR10 + 18)) - 1;
            VAR2->VAR14 = VAR3 & VAR15;
        }
        else
        {
            VAR2->VAR13 = ((VAR3 & VAR16) << 16) | 0xFFFF;
            VAR2->VAR14 = VAR3 & VAR17;
        }
        FUN3(VAR2, 1);
    }
}