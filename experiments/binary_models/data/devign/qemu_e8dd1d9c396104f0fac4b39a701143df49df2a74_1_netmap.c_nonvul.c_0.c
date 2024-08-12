static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    struct VAR4 *VAR5 = VAR3->VAR6.VAR7;
    while (!FUN2(VAR5))
    {
        uint32_t VAR8;
        uint32_t VAR9;
        bool VAR10;
        int VAR11 = 0;
        int VAR12;
        do
        {
            VAR8 = VAR5->VAR13;
            VAR9 = VAR5->VAR14[VAR8].VAR15;
            VAR10 = (VAR5->VAR14[VAR8].VAR16 & VAR17);
            VAR3->VAR18[VAR11].VAR19 = (VAR20 *)FUN3(VAR5, VAR9);
            VAR3->VAR18[VAR11].VAR21 = VAR5->VAR14[VAR8].VAR22;
            VAR11++;
            VAR5->VAR13 = VAR5->VAR23 = FUN4(VAR5, VAR8);
        } while (!FUN2(VAR5) && VAR10);
        if (FUN5(FUN2(VAR5) && VAR10))
        {
            FUN6(5, ""
                  "");
        }
        VAR12 = FUN7(&VAR3->VAR24, VAR3->VAR18, VAR11, VAR25);
        if (VAR12 == 0)
        {
            FUN8(VAR3, false);
            break;
        }
    }
}