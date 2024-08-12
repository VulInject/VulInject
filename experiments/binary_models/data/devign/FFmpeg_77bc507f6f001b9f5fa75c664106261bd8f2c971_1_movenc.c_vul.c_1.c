static void FUN1(char *VAR1, int VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = (VAR4->VAR8->VAR9 == 1280 && VAR4->VAR8->VAR10 == 720) || (VAR4->VAR8->VAR9 == 1440 && VAR4->VAR8->VAR10 == 1080) || (VAR4->VAR8->VAR9 == 1920 && VAR4->VAR8->VAR10 == 1080);
    if (VAR4->VAR11 == VAR12 && (VAR6 = FUN2(VAR4->VAR13->VAR14, "", NULL, 0)))
    {
        FUN3(VAR1, VAR6->VAR15, 32);
    }
    else if (VAR4->VAR8->VAR16 == VAR17 && VAR7)
    {
        int VAR18 = VAR4->VAR8->VAR19 > VAR20;
        VAR21 *VAR13 = VAR4->VAR13;
        int VAR22 = FUN4(FUN5(NULL, VAR13));
        FUN6(VAR1, VAR2, "");
        if (VAR4->VAR8->VAR23 == VAR24)
        {
            FUN6(VAR1, VAR2, "");
        }
        else if (VAR4->VAR8->VAR9 == 1440)
        {
            FUN6(VAR1, VAR2, "");
        }
        else
            FUN6(VAR1, VAR2, "");
        FUN6(VAR1, VAR2, "", VAR4->VAR8->VAR10, VAR18 ? '' : '');
        FUN6(VAR1, VAR2, "", VAR22 * (VAR18 + 1));
    }
}