int FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    const VAR6 *VAR7;
    int VAR8, VAR9 = 0, VAR10 = 0, VAR11;
    const char *VAR12 = NULL;
    const char *VAR13 = NULL;
    const char *VAR14;
    char VAR15[128];
    assert(VAR2->VAR16 == VAR17);
    VAR7 = VAR2->VAR7;
    VAR11 = VAR7->VAR18 ? VAR7->VAR11 : 1;
    VAR14 = VAR7->VAR19 ? VAR7->VAR20 : NULL;
    if (VAR7->VAR21)
    {
        if (VAR7->VAR22 || VAR7->VAR23 || VAR7->VAR24 || VAR7->VAR25 || VAR7->VAR26 || VAR7->VAR18 || VAR7->VAR27)
        {
            FUN2(""
                         "");
            VAR8 = FUN3(VAR28, VAR7->VAR8);
            if (VAR8 == -1)
            {
                FUN4(VAR8, VAR29, VAR30);
                VAR9 = FUN5(VAR8);
                if (FUN6(VAR7, VAR5, "", VAR3, NULL, VAR12, VAR13, VAR14, VAR9, VAR8))
                {
                }
                else if (VAR7->VAR27)
                {
                    char *VAR31[VAR32];
                    char *VAR33[VAR32];
                    int VAR34, VAR35;
                    if (VAR7->VAR22 || VAR7->VAR23 || VAR7->VAR24 || VAR7->VAR25 || VAR7->VAR26 || VAR7->VAR18 || VAR7->VAR21)
                    {
                        FUN2(""
                                     "");
                        VAR34 = FUN7(VAR7->VAR31, VAR31, VAR32);
                        if (VAR7->VAR36)
                        {
                            VAR35 = FUN7(VAR7->VAR37, VAR33, VAR32);
                            if (VAR34 != VAR35)
                            {
                                FUN2(""
                                             "");
                                for (VAR10 = 0; VAR10 < VAR34; VAR10++)
                                {
                                    VAR8 = FUN3(VAR28, VAR31[VAR10]);
                                    if (VAR8 == -1)
                                    {
                                        FUN4(VAR8, VAR29, VAR30);
                                        if (VAR10 == 0)
                                        {
                                            VAR9 = FUN5(VAR8);
                                        }
                                        else if (VAR9 != FUN5(VAR8))
                                        {
                                            FUN2("");
                                            if (FUN6(VAR7, VAR5, "", VAR3, VAR15, VAR12, VAR13, VAR7->VAR36 ? VAR33[VAR10] : NULL, VAR9, VAR8))
                                            {
                                            }
                                            else if (VAR7->VAR26)
                                            {
                                                if (VAR7->VAR22 || VAR7->VAR23 || VAR7->VAR24 || VAR7->VAR25 || VAR7->VAR18 || VAR7->VAR27)
                                                {
                                                    FUN2(""
                                                                 "");
                                                    VAR8 = FUN8(VAR7->VAR38, VAR39);
                                                    if (VAR8 == -1)
                                                    {
                                                        FUN4(VAR8, VAR29, VAR30);
                                                        VAR9 = FUN5(VAR8);
                                                        if (FUN6(VAR7, VAR5, "", VAR3, VAR15, VAR12, VAR13, VAR14, VAR9, VAR8))
                                                        {
                                                        }
                                                        else
                                                        {
                                                            VAR12 = VAR7->VAR23 ? VAR7->VAR12 : VAR40;
                                                            VAR13 = VAR7->VAR24 ? VAR7->VAR13 : VAR41;
                                                            if (VAR7->VAR22)
                                                            {
                                                                FUN9(VAR15, sizeof VAR15, VAR7->VAR15);
                                                            }
                                                            else
                                                            {
                                                                VAR15[0] = '';
                                                                for (VAR10 = 0; VAR10 < VAR11; VAR10++)
                                                                {
                                                                    VAR8 = FUN10(VAR7, &VAR9, VAR10 >= 1 ? "" : VAR12, VAR15, sizeof VAR15, VAR11 > 1);
                                                                    if (VAR8 == -1)
                                                                    {
                                                                        if (VAR11 > 1 && VAR10 == 0 && !VAR7->VAR22)
                                                                        {
                                                                            if (FUN11(VAR8, VAR15))
                                                                            {
                                                                                FUN2("");
                                                                                if (FUN6(VAR7, VAR5, "", VAR3, VAR15, VAR10 >= 1 ? "" : VAR12, VAR10 >= 1 ? "" : VAR13, VAR14, VAR9, VAR8))
                                                                                {
                                                                                    return 0