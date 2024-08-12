static void FUN1(VAR1 *VAR2, uint32_t VAR3, bool VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7, unsigned int VAR8, unsigned int VAR9, unsigned int VAR10)
{
    const VAR11 *VAR12;
    TCGv_i64 VAR13;
    VAR12 = FUN2(VAR2->VAR14, FUN3(VAR15, VAR8, VAR9, VAR5, VAR6, VAR7));
    if (!VAR12)
    {
        if (!FUN4(VAR2->VAR16, VAR12, VAR4))
        {
            FUN5(VAR2);
            return;
            switch (VAR12->VAR17 & ~(VAR18 & ~VAR19))
            {
            case VAR20:
                return;
            case VAR21:
                VAR13 = FUN6(VAR2, VAR10);
                if (VAR4)
                {
                    FUN7(VAR13);
                }
                else
                {
                    FUN8(VAR13);
                    return;
                default:
                    break;
                    if (VAR22 && (VAR12->VAR17 & VAR23))
                    {
                        FUN9();
                        VAR13 = FUN6(VAR2, VAR10);
                        if (VAR4)
                        {
                            if (VAR12->VAR17 & VAR24)
                            {
                                FUN10(VAR13, VAR12->VAR25);
                            }
                            else if (VAR12->VAR26)
                            {
                                FUN11(VAR13, VAR27, VAR28);
                            }
                            else
                            {
                                FUN12(VAR13, VAR27, VAR12->VAR29);
                            }
                            else
                            {
                                if (VAR12->VAR17 & VAR24)
                                {
                                    return;
                                }
                                else if (VAR12->VAR30)
                                {
                                    FUN13(VAR27, VAR28, VAR13);
                                }
                                else
                                {
                                    FUN14(VAR13, VAR27, VAR12->VAR29);
                                    if (VAR22 && (VAR12->VAR17 & VAR23))
                                    {
                                        FUN15();
                                        VAR2->VAR31 = VAR32;
                                    }
                                    else if (!VAR4 && !(VAR12->VAR17 & VAR33))
                                    {