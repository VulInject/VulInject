void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2("", VAR6, VAR3);
    if ((VAR3 & VAR7) != (VAR5->VAR8 & VAR7))
    {
        if (!(VAR3 & VAR7))
        {
            if (VAR5->VAR9->VAR10->VAR11)
            {
                FUN3();
                assert(VAR5->VAR9->VAR10->VAR11 == NULL);
                assert((VAR5->VAR12 & VAR13) == 0);
            }
        }
        else
        {
            VAR5->VAR14 = VAR5->VAR2;
            if (!(VAR5->VAR12 & VAR13))
            {
                VAR5->VAR12 |= VAR13;
                if (VAR5->VAR15)
                    VAR5->FUN4(FUN5(VAR5), 0);
            }
        }
    }
    VAR5->VAR8 = VAR3 & 0x09;
}