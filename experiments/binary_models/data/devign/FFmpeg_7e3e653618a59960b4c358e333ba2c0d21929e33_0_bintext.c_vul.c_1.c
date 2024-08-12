static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR6;
    VAR1 *VAR7 = FUN2(VAR3, NULL);
    if (!VAR7)
        return NULL;
    VAR7->VAR8->VAR9 = 0;
    VAR7->VAR8->VAR10 = VAR11;
    if (!VAR5->VAR12)
    {
        VAR7->VAR8->VAR12 = (80 << 3);
        VAR7->VAR8->VAR13 = (25 << 4);
    }
    FUN3(VAR7, 60, VAR5->VAR14.VAR15, VAR5->VAR14.VAR16);
    VAR5->VAR17 = FUN4(FUN5(VAR7->VAR18) * VAR5->VAR17, 1);
    return VAR7;
}