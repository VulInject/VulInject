static VAR1 *FUN1(VAR2 *VAR3, int VAR4, const char *VAR5, uint32_t VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR7 = FUN2(FUN3(VAR12, VAR5));
    if (VAR7 == NULL)
    {
        fprintf(VAR13, "");
        FUN4(1);
    }
    VAR9 = &VAR7->VAR9;
    FUN5(VAR7, VAR6, 0);
    FUN6(VAR9, NULL, NULL);
    VAR11 = FUN7(sizeof(VAR10) * VAR14);
    VAR11[VAR15] = ((VAR10 *)VAR9->VAR16)[VAR17];
    VAR11[VAR18] = ((VAR10 *)VAR9->VAR16)[VAR19];
    FUN8(VAR9, VAR11, 0x0C0, 0, 1);
    return VAR7;
}