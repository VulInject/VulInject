static char *FUN1(char *VAR1, int VAR2, struct unit_value VAR3)
{
    double VAR4;
    int VAR5 = 0;
    if (VAR3.VAR6 == VAR7)
    {
        VAR4 = VAR3.VAR8.VAR9;
        VAR5 = 1;
    }
    else
    {
        VAR4 = VAR3.VAR8.VAR10;
    }
    if (VAR3.VAR6 == VAR7 && VAR11)
    {
        double VAR12;
        int VAR13, VAR14;
        VAR12 = VAR4;
        VAR14 = (int)VAR12 / 60;
        VAR12 = VAR12 - VAR14 * 60;
        VAR13 = VAR14 / 60;
        VAR14 %= 60;
        snprintf(VAR1, VAR2, "", VAR13, VAR14, VAR12);
    }
    else
    {
        const char *VAR15 = "";
        if (VAR16 && VAR4 > 1)
        {
            long long int VAR17;
            if (VAR3.VAR6 == VAR18 && VAR19)
            {
                VAR17 = (long long int)(FUN2(VAR4)) / 10;
                VAR17 = FUN3(VAR17, 0, FUN4(VAR20) - 1);
                VAR4 /= FUN5(VAR17 * 10);
                VAR15 = VAR20[VAR17];
            }
            else
            {
                VAR17 = (long long int)(FUN6(VAR4)) / 3;
                VAR17 = FUN3(VAR17, 0, FUN4(VAR21) - 1);
                VAR4 /= FUN7(10, VAR17 * 3);
                VAR15 = VAR21[VAR17];
            }
        }
        if (VAR5 || (VAR16 && VAR4 != (long long int)VAR4))
            snprintf(VAR1, VAR2, "", VAR4);
        else
            snprintf(VAR1, VAR2, "", (long long int)VAR4);
        FUN8(VAR1, VAR2, "", *VAR15 || VAR22 ? "" : "", VAR15, VAR22 ? VAR3.VAR6 : "");
    }
    return VAR1;
}