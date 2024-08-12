void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    FUN2("", VAR4, VAR3);
    if ((VAR3 & VAR5) != (VAR2->VAR6 & VAR5))
    {
        if (!(VAR3 & VAR5))
        {
            if (VAR2->VAR7->VAR8->VAR9)
            {
                FUN3();
                assert(VAR2->VAR7->VAR8->VAR9 == NULL);
                assert((VAR2->VAR10 & VAR11) == 0);
            }
        }
        else
        {
            VAR2->VAR12 = VAR2->VAR13;
            if (!(VAR2->VAR10 & VAR11))
            {
                VAR2->VAR10 |= VAR11;
                if (VAR2->VAR14)
                    VAR2->FUN4(FUN5(VAR2), 0);
            }
        }
    }
    VAR2->VAR6 = VAR3 & 0x09;
}