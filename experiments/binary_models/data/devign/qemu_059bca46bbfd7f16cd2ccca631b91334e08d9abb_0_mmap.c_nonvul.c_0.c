int FUN1(unsigned long VAR1, unsigned long VAR2, unsigned long VAR3, int VAR4, int VAR5, int VAR6, unsigned long VAR7)
{
    unsigned long VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    VAR8 = VAR1 + VAR13;
    VAR11 = 0;
    for (VAR10 = VAR1; VAR10 < VAR8; VAR10++)
    {
        if (VAR10 < VAR2 || VAR10 >= VAR3)
            VAR11 |= FUN2(VAR10);
    }
    if (VAR11 == 0)
    {
        VAR9 = (long)FUN3((void *)VAR1, VAR13, VAR4, VAR5 | VAR14, -1, 0);
        if (VAR9 == -1)
            return VAR9;
    }
    VAR11 &= VAR15;
    VAR12 = VAR4 | VAR11;
    if (!(VAR5 & VAR14))
    { if ( ( VAR5 & VAR16 ) == VAR17 && if ( ( VAR5 & VAR17 ) && ( VAR4 & VAR18 ) ) return - 1 ; if ( ! ( VAR11 & VAR18 ) ) FUN4 ( ( void * ) VAR1 , VAR13 , VAR11 | VAR18 ) ; pread ( VAR6 , ( void * ) VAR2 , VAR3 - VAR2 , VAR7 ) ; if ( VAR12 != ( VAR11 | VAR18 ) ) FUN4 ( ( void * ) VAR1 , VAR13 , VAR12 ) ;
    }
    else
    {
        if (VAR12 != VAR11)
        {
            FUN4((void *)VAR1, VAR13, VAR12);
        }
    }
    return 0;
}