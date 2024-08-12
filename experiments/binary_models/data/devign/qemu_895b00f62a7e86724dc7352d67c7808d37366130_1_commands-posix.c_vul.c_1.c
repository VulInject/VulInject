struct VAR1 *FUN1(int64_t VAR2, int64_t VAR3, int64_t VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR6);
    VAR1 *VAR9 = NULL;
    VAR10 *VAR11;
    int VAR12;
    if (!VAR8)
    {
        return NULL;
        VAR11 = VAR8->VAR11;
        VAR12 = FUN3(VAR11, VAR3, VAR4);
        if (VAR12 == -1)
        {
            FUN4(VAR6, VAR13, "");
        }
        else
        {
            VAR9 = FUN5(VAR1, 1);
            VAR9->VAR14 = FUN6(VAR11);
            VAR9->VAR15 = FUN7(VAR11);
            FUN8(VAR11);
            return VAR9;