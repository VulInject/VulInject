VAR1 *FUN1(VAR2 *VAR3, void (*VAR4)(struct VAR1 *VAR5))
{
    VAR1 *VAR6;
    int VAR7;
    if (FUN2(VAR3) == NULL)
    {
        fprintf(VAR8, "");
        for (VAR7 = 0; VAR7 < FUN3(VAR9); VAR7++)
        {
            if (strcmp(VAR9[VAR7].VAR10, FUN4(VAR3, "")) == 0)
                break;
            if (VAR7 == FUN3(VAR9))
            {
                fprintf(VAR8, ""%VAR5\"", FUN4(VAR3, ""));
                VAR6 = VAR9[VAR7].open(VAR3);
                if (!VAR6)
                {
                    fprintf(VAR8, ""%VAR5\"", FUN4(VAR3, ""));
                    if (!VAR6->VAR11)
                        VAR6->VAR11 = FUN5(FUN4(VAR3, ""));
                    VAR6->VAR4 = VAR4;
                    FUN6(&VAR12, VAR6, VAR13);
                    if (FUN7(VAR3, "", 0))
                    {
                        VAR1 *VAR14 = VAR6;
                        int VAR15 = strlen(FUN2(VAR3)) + 6;
                        VAR14->VAR16 = FUN8(VAR15);
                        snprintf(VAR14->VAR16, VAR15, "", FUN2(VAR3));
                        VAR6 = FUN9(VAR14);
                        VAR6->VAR11 = VAR14->VAR11;
                        FUN6(&VAR12, VAR6, VAR13);
                        VAR6->VAR16 = FUN5(FUN2(VAR3));
                        return VAR6;