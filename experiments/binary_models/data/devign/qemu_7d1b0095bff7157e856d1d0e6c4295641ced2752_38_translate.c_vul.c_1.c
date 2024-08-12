static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6 = (VAR5 >> 16) & 0xf;
    int VAR7 = VAR5 & 0xf;
    int VAR8 = (VAR5 >> 21) & 7;
    int VAR9 = (VAR5 >> 5) & 7;
    int VAR10 = (VAR5 >> 12) & 0xf;
    TCGv VAR11;
    if (FUN2(VAR2, VAR12))
    {
        if (VAR8 == 6 && VAR6 == 0 && VAR7 == 0 && VAR9 == 0)
        {
            if (FUN3(VAR4))
                return 1;
            VAR11 = FUN4(VAR4, VAR10);
            FUN5(VAR13, VAR11);
            FUN6(VAR11);
            return 0;
        }
        if (VAR8 == 6 && VAR6 == 1 && VAR7 == 0 && VAR9 == 0)
        {
            if (FUN3(VAR4) && (VAR2->VAR14 & 1))
                return 1;
            VAR11 = FUN4(VAR4, VAR10);
            FUN7(VAR11, VAR15);
            return 0;
        }
    }
    fprintf(VAR16, "", VAR8, VAR6, VAR7, VAR9);
    return 1;
}