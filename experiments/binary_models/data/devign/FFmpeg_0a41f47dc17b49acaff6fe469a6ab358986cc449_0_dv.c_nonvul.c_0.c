VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
        return NULL;
    VAR4->VAR5 = FUN3(VAR3, NULL);
    if (!VAR4->VAR5)
    {
        FUN4(VAR4);
        return NULL;
    }
    VAR4->VAR6 = VAR3;
    VAR4->VAR5->VAR7->VAR8 = VAR9;
    VAR4->VAR5->VAR7->VAR10 = VAR11;
    VAR4->VAR5->VAR7->VAR12 = 25000000;
    VAR4->VAR5->VAR13 = 0;
    return VAR4;
}