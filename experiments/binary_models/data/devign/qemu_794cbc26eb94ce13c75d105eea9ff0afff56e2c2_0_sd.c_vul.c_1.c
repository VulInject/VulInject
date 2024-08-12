VAR1 *FUN1(VAR2 *VAR3, bool VAR4)
{
    VAR1 *VAR5;
    if (FUN2(VAR3))
    {
        fprintf(VAR6, "");
        return NULL;
    }
    VAR5 = (VAR1 *)FUN3(sizeof(VAR1));
    VAR5->VAR7 = FUN4(VAR3, 512);
    VAR5->VAR8 = VAR4;
    VAR5->VAR9 = true;
    FUN5(VAR5, VAR3);
    if (VAR5->VAR10)
    {
        FUN6(VAR5->VAR10, VAR5);
        FUN7(VAR5->VAR10, &VAR11, VAR5);
    }
    FUN8(NULL, -1, &VAR12, VAR5);
    return VAR5;
}