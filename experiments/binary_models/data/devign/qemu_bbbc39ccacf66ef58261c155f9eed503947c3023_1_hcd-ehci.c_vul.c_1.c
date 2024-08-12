static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    VAR6 *VAR7 = VAR2->VAR8;
    EHCIqtd VAR9 = VAR2->VAR9;
    uint32_t VAR10;
    for (;;)
    {
        if (FUN2(VAR9.VAR11) != 0)
        {
            VAR10 = VAR9.VAR11;
            FUN3(VAR2, &VAR7->VAR12, VAR11)
            {
                if (VAR2->VAR10 == VAR10)
                {
                    goto VAR13;
                    if (FUN4(VAR7->VAR14, FUN5(VAR10), (VAR15 *)&VAR9, sizeof(VAR16) >> 2) < 0)
                    {
                        return -1;
                        FUN6(VAR7, FUN5(VAR10), &VAR9);
                        if (!(VAR9.VAR17 & VAR18))
                        {
                            VAR2 = FUN7(VAR7);
                            VAR2->VAR10 = VAR10;
                            VAR2->VAR9 = VAR9;
                            if (FUN8(VAR2, "") == -1)
                            {
                                return -1;
                                assert(VAR2->VAR5.VAR19 == VAR20);
                                VAR2->VAR21 = VAR22;
                            VAR13:
                                FUN9(VAR4->VAR23, VAR4);
                                return 1;