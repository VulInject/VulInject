static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = &VAR4->VAR7->VAR8.VAR9[0];
    if (VAR2 == -VAR10)
    {
        return;
    }
    VAR4->VAR7->VAR11.VAR12 &= ~(1 << VAR4->VAR13);
    if (VAR2 < 0)
    {
        VAR6->VAR14 = VAR15;
        VAR6->VAR16 = VAR17 | VAR18;
        VAR4->VAR7->VAR11.VAR19 |= (1 << VAR4->VAR13);
    }
    else
    {
        VAR6->VAR16 = VAR17 | VAR20;
    }
    FUN2(VAR4->VAR7->VAR21, VAR4->VAR7->VAR22, (1 << VAR4->VAR13));
    FUN3(VAR4->VAR7->VAR22, "", VAR4->VAR13);
    FUN4(FUN5(VAR4->VAR7->VAR8.VAR9[0].VAR23), &VAR4->VAR24);
    FUN6(&VAR4->VAR25);
    VAR4->VAR26 = 0;
}