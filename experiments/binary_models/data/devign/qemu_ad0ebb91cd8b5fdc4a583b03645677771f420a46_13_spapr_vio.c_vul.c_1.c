static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = FUN2(VAR4);
    char *VAR7;
    if (VAR4->VAR8 != -1)
    {
        VAR3 *VAR9 = FUN3(VAR4);
        if (VAR9)
        {
            fprintf(VAR10, "", FUN4(FUN5(VAR2)), FUN4(FUN5(&VAR9->VAR2)), VAR4->VAR8);
            return -1;
        }
    }
    else
    {
        VAR11 *VAR12 = FUN6(VAR11, VAR12, VAR4->VAR2.VAR13);
        do
        {
            VAR4->VAR8 = VAR12->VAR14++;
        } while (FUN3(VAR4));
    }
    if (!VAR4->VAR2.VAR7)
    {
        VAR7 = FUN7(VAR4);
        if (!VAR7)
        {
            return -1;
        }
        VAR4->VAR2.VAR7 = VAR7;
    }
    VAR4->VAR15 = FUN8(VAR4->VAR16, &VAR4->VAR16);
    if (!VAR4->VAR15)
    {
        return -1;
    }
    FUN9(VAR4);
    return VAR6->FUN10(VAR4);
}