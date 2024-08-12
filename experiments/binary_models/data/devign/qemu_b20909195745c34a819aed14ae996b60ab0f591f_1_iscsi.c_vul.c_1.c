FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR5;
    if (VAR7->VAR8)
    {
        FUN2(VAR7);
        return;
    }
    VAR7->VAR3 = 0;
    if (VAR3 < 0)
    {
        FUN3("", FUN4(VAR2));
        VAR7->VAR3 = -VAR9;
    }
    VAR7->VAR10->VAR11 = 0;
    VAR7->VAR10->VAR12 = 0;
    VAR7->VAR10->VAR13 = 0;
    if (VAR3 == VAR14 && VAR7->VAR15->VAR16.VAR17 >= 2)
    {
        int VAR18;
        VAR7->VAR10->VAR11 |= VAR19;
        VAR7->VAR10->VAR20 = VAR7->VAR15->VAR16.VAR17 - 2;
        VAR18 = (VAR7->VAR10->VAR21 >= VAR7->VAR10->VAR20) ? VAR7->VAR10->VAR21 : VAR7->VAR10->VAR20;
        memcpy(VAR7->VAR10->VAR22, &VAR7->VAR15->VAR16.VAR23[2], VAR18);
    }
    FUN5(VAR24, VAR7);
}