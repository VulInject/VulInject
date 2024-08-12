bool FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5;
    bool VAR6, VAR7;
    bool VAR8, VAR9;
    VAR6 = VAR2->VAR10[VAR11].VAR12 && (VAR2->VAR10[VAR13].VAR12 || VAR2->VAR10[VAR14].VAR12);
    VAR7 = VAR2->VAR10[VAR15].VAR12 && (VAR2->VAR10[VAR16].VAR12 || VAR2->VAR10[VAR17].VAR12);
    VAR8 = VAR2->VAR10[VAR11].VAR18 && (VAR2->VAR10[VAR13].VAR18 || VAR2->VAR10[VAR14].VAR18);
    VAR9 = VAR2->VAR10[VAR15].VAR18 && (VAR2->VAR10[VAR16].VAR18 || VAR2->VAR10[VAR17].VAR18);
    if (VAR6 || VAR7 || VAR8 || VAR9)
    {
        FUN2(VAR4, ""
                         "");
        if (VAR2->VAR19 && !VAR2->VAR10[VAR15].VAR12 && !VAR2->VAR10[VAR16].VAR12 && !VAR2->VAR10[VAR17].VAR12)
        {
            FUN2(VAR4, "");
            for (VAR5 = 0; VAR5 < VAR20; VAR5++)
            {
                VAR21 *VAR22 = &VAR2->VAR10[VAR5];
                if (VAR22->VAR12 > VAR23 || VAR22->VAR18 > VAR23)
                {
                    FUN2(VAR4, "", VAR23);
                    if (!VAR22->VAR24)
                    {
                        FUN2(VAR4, "");
                        if (VAR22->VAR24 > 1 && !VAR22->VAR18)
                        {
                            FUN2(VAR4, "");
                            if (VAR22->VAR18 && !VAR22->VAR12)
                            {
                                FUN2(VAR4, ""
                                                 "");
                                if (VAR22->VAR18 && VAR22->VAR18 < VAR22->VAR12)
                                {
                                    FUN2(VAR4, "");
                                    return true