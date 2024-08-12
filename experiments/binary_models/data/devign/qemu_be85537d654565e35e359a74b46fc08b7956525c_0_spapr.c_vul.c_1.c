static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    int VAR5 = 0;
    if (!FUN2(FUN3(VAR4->VAR6), VAR7))
    {
        VAR8 *VAR9;
        FUN4(VAR9)
        {
            VAR10 *VAR11 = FUN5(VAR9);
            FUN6(FUN7(VAR11->VAR12));
            if (VAR2 < 3)
            {
                VAR5 = FUN8(&VAR4->VAR13, VAR4->VAR14);
                if (FUN9() && VAR4->VAR15)
                {
                    VAR10 *VAR11 = FUN5(VAR16);
                    bool VAR17 = !!(VAR4->VAR15 & VAR18);
                    bool VAR19 = !!(VAR11->VAR20.VAR21[VAR22] & VAR23);
                    VAR5 = FUN10(VAR11, VAR17, VAR19, VAR4->VAR15);
                    FUN11("");
                    return -VAR24