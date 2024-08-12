static int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    int VAR6;
    VAR2->VAR7->VAR8 = FUN2(FUN3(VAR2->VAR7->VAR9) * sizeof(unsigned long));
    VAR6 = FUN4(&VAR2->VAR10, VAR2->VAR7->VAR9, VAR2->VAR11[VAR2->VAR7->VAR12].VAR13.VAR14, VAR2->VAR7->VAR12, VAR2->VAR7->VAR15, VAR2->VAR11[VAR2->VAR7->VAR16].VAR13.VAR14, VAR2->VAR7->VAR16, VAR2->VAR7->VAR17, VAR3);
    if (VAR6 < 0)
    {
        if (VAR6 == -VAR18)
        {
            return 0;
        }
        FUN5(VAR5, "");
        return VAR6;
    }
    FUN6(&VAR2->VAR10.VAR19, false);
    return 0;
}