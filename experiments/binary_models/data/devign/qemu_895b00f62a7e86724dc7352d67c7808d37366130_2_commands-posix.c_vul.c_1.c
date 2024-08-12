VAR1 *FUN1(int64_t VAR2, const char *VAR3, bool VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10;
    gsize VAR11;
    int VAR12;
    VAR13 *VAR14 = FUN2(VAR2, VAR7);
    VAR15 *VAR16;
    if (!VAR14)
    {
        VAR16 = VAR14->VAR16;
        VAR10 = FUN3(VAR3, &VAR11);
        if (!VAR4)
        {
            VAR5 = VAR11;
        }
        else if (VAR5 < 0 || VAR5 > VAR11)
        {
            FUN4(VAR7, "" VAR17 "", VAR5);
            FUN5(VAR10);
            VAR12 = fwrite(VAR10, 1, VAR5, VAR16);
            if (FUN6(VAR16))
            {
                FUN7(VAR7, VAR18, "");
                FUN8("" VAR17, VAR2);
            }
            else
            {
                VAR8 = FUN9(VAR1, 1);
                VAR8->VAR5 = VAR12;
                VAR8->VAR19 = FUN10(VAR16);
                VAR14->VAR20 = VAR21;
                FUN5(VAR10);
                FUN11(VAR16);
                return VAR8