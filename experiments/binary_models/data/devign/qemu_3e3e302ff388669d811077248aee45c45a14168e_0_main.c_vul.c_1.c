int main(int argc, char **argv)
{
    int VAR1 = VAR2;
    VAR3 *VAR4 = FUN1(VAR3, 1);
    VAR5 *VAR6 = FUN1(VAR5, 1);
    VAR6->VAR7 = VAR8 | VAR9;
    FUN2(VAR10);
    FUN3();
    FUN4(VAR6);
    FUN5(VAR6, argc, argv);
    if (VAR6->VAR11 == NULL)
    {
        VAR6->VAR11 = FUN6(VAR12.VAR13);
        if (VAR6->VAR14 == NULL)
        {
            VAR6->VAR14 = FUN6(VAR12.VAR14);
            if (VAR6->VAR15 == NULL)
            {
                VAR6->VAR15 = FUN6("");
                if (VAR6->VAR16 == NULL)
                {
                    if (strcmp(VAR6->VAR15, "") == 0)
                    {
                        VAR6->VAR16 = FUN6(VAR17);
                    }
                    else if (strcmp(VAR6->VAR15, "") == 0)
                    {
                        VAR6->VAR16 = FUN6(VAR18);
                    }
                    else
                    {
                        FUN7("");
                        VAR1 = VAR19;
                        goto VAR20;
                        VAR4->VAR7 = VAR6->VAR7;
                        VAR4->VAR21 = VAR22;
                        VAR4->VAR23 = VAR6->VAR23;
                        VAR4->VAR24 = FUN8("", VAR6->VAR14);
                        VAR4->VAR25 = FUN8("", VAR6->VAR14);
                        VAR4->VAR26 = FUN9(VAR4);
                        if (VAR6->VAR27)
                        {
                            FUN10(VAR6);
                            goto VAR20;
                            VAR1 = FUN11(VAR4, VAR6);
                        VAR20:
                            if (VAR4->VAR28)
                            {
                                FUN12(VAR4->VAR28);
                                FUN13(VAR4->VAR28);
                                FUN14(&VAR4->VAR29);
                                if (VAR4->VAR30)
                                {
                                    FUN15(VAR4->VAR30);
                                    FUN16(VAR4->VAR24);
                                    FUN16(VAR4->VAR25);
                                    if (VAR6->VAR31)
                                    {
                                        unlink(VAR6->VAR11);
                                        FUN17(VAR6);
                                        return VAR1;