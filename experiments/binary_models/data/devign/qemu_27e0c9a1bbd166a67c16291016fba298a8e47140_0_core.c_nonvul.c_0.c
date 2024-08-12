void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, qemu_irq VAR6)
{
    int VAR7;
    VAR3 *VAR8;
    for (VAR7 = 0; VAR7 < 2; VAR7++)
    {
        VAR8 = VAR7 == 0 ? VAR4 : VAR5;
        FUN2(VAR2, VAR7);
        if (VAR8)
        {
            if (FUN3(&VAR2->VAR9[VAR7], VAR8->VAR10, VAR8->VAR11 ? VAR12 : VAR13, NULL, *VAR8->VAR14 ? VAR8->VAR14 : NULL, NULL) < 0)
            {
                FUN4("", VAR8->VAR15);
                FUN5(1);
            }
            FUN6(VAR8->VAR10, &VAR2->VAR9[VAR7]);
        }
        else
        {
            FUN7(&VAR2->VAR9[VAR7]);
        }
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR16 = &VAR17;
}