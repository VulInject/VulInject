int FUN1(VAR1 *VAR2, target_ulong VAR3, target_phys_addr_t VAR4, int VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9;
    unsigned long VAR10;
    unsigned int VAR11;
    target_ulong VAR12;
    target_phys_addr_t VAR13;
    int VAR14;
    VAR15 *VAR16;
    int VAR17;
    VAR9 = FUN2(VAR4 >> VAR18);
    if (!VAR9)
    {
        VAR10 = VAR19;
        VAR10 = VAR9->VAR20;
        FUN3("" VAR21 "", VAR3, (int)VAR4, VAR5, VAR6, VAR7, VAR10);
        VAR14 = 0;
        if (VAR7)
        {
            if ((VAR10 & ~VAR22) > VAR23 && !(VAR10 & VAR24))
            {
                VAR12 = VAR3 | VAR10;
                VAR13 = VAR4;
                VAR12 = VAR3;
                VAR13 = (unsigned long)VAR25 + (VAR10 & VAR22);
                VAR11 = (VAR3 >> VAR18) & (VAR26 - 1);
                VAR13 -= VAR3;
                VAR16 = &VAR2->VAR27[VAR6][VAR11];
                VAR16->VAR13 = VAR13;
                if (VAR5 & VAR28)
                {
                    VAR16->VAR29 = VAR12;
                    VAR16->VAR29 = -1;
                    if (VAR5 & VAR30)
                    {
                        VAR16->VAR31 = VAR12;
                        VAR16->VAR31 = -1;
                        if (VAR5 & VAR32)
                        {
                            if ((VAR10 & ~VAR22) == VAR23 || (VAR10 & VAR24))
                            {
                                VAR16->VAR33 = VAR3 | (VAR10 & ~(VAR22 | VAR24));
                            }
                            else if ((VAR10 & ~VAR22) == VAR34 && !FUN4(VAR10))
                            {
                                VAR16->VAR33 = VAR3 | VAR35;
                                VAR16->VAR33 = VAR12;
                                VAR16->VAR33 = -1;
                                else
                                {
                                    if ((VAR10 & ~VAR22) > VAR23)
                                    {
                                        if (!(VAR2->VAR36 & VAR37))
                                            VAR14 = 2;
                                        void *VAR38;
                                        if (VAR3 >= VAR39)
                                        {
                                            VAR14 = 2;
                                            if (VAR5 & VAR40)
                                            {
                                                if ((VAR10 & ~VAR22) == VAR23 || VAR41 || ((VAR10 & ~VAR22) == VAR34 && !FUN4(VAR10)))
                                                {
                                                    VAR42 *VAR43;
                                                    VAR43 = FUN5(VAR3 >> VAR18, 1);
                                                    VAR43->VAR44 = VAR10;
                                                    VAR43->VAR5 = VAR5;
                                                    VAR43->VAR45 = VAR46;
                                                    VAR5 &= ~VAR32;
                                                    VAR38 = FUN6((void *)VAR3, VAR47, VAR5, VAR48 | VAR49, VAR50, (VAR10 & VAR22));
                                                    if (VAR38 == VAR51)
                                                    {
                                                        FUN7(VAR2, "", VAR4, VAR3);
                                                        return VAR14