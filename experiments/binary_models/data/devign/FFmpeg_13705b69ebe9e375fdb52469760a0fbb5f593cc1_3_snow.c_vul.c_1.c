static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8 = VAR2->VAR8;
    int VAR9 = FUN2(VAR8 - 1, VAR6 - 1);
    int VAR10 = FUN2(VAR8 + 0, VAR6 - 1);
    int VAR11 = FUN2(VAR8 + 1, VAR6 - 1);
    int VAR12 = FUN2(VAR8 + 2, VAR6 - 1);
    int VAR13 = FUN2(VAR8 + 3, VAR6 - 1);
    int VAR14 = FUN2(VAR8 + 4, VAR6 - 1);
    VAR15 *VAR16 = VAR2->VAR16;
    VAR15 *VAR17 = VAR2->VAR17;
    VAR15 *VAR18 = VAR2->VAR18;
    VAR15 *VAR19 = VAR2->VAR19;
    VAR15 *VAR20 = FUN3(VAR4, VAR13 * VAR7);
    VAR15 *VAR21 = FUN3(VAR4, VAR14 * VAR7);
    {
        START_TIMER if (VAR8 > 0 && VAR8 + 4 < VAR6) { FUN4(VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR5); }
        else
        {
            if (VAR12 <= VAR14)
                FUN5(VAR19, VAR20, VAR21, VAR5);
            if (VAR11 <= VAR13)
                FUN6(VAR18, VAR19, VAR20, VAR5);
            if (VAR10 <= VAR12)
                FUN7(VAR17, VAR18, VAR19, VAR5);
            if (VAR9 <= VAR11)
                FUN8(VAR16, VAR17, VAR18, VAR5);
        }
        if (VAR5 > 400)
        {
            FUN9("")
        }
    }
    {
        START_TIMER if (VAR8 - 1 >= 0) FUN10(VAR16, VAR5);
        if (VAR9 <= VAR11)
            FUN10(VAR17, VAR5);
        if (VAR5 > 400 && VAR9 <= VAR11)
        {
            FUN9("")
        }
    }
    VAR2->VAR16 = VAR18;
    VAR2->VAR17 = VAR19;
    VAR2->VAR18 = VAR20;
    VAR2->VAR19 = VAR21;
    VAR2->VAR8 += 2;
}