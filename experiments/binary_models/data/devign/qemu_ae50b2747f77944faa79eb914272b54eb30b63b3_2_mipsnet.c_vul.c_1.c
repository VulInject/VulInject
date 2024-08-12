void FUN1(int VAR1, qemu_irq VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR4, "");
    VAR6 = FUN3(sizeof(VAR5));
    FUN4(VAR1, 36, 1, VAR7, VAR6);
    FUN5(VAR1, 36, 1, VAR8, VAR6);
    FUN4(VAR1, 36, 2, VAR7, VAR6);
    FUN5(VAR1, 36, 2, VAR8, VAR6);
    FUN4(VAR1, 36, 4, VAR7, VAR6);
    FUN5(VAR1, 36, 4, VAR8, VAR6);
    VAR6->VAR9 = VAR1;
    VAR6->VAR2 = VAR2;
    if (VAR4 && VAR4->VAR10)
    {
        VAR6->VAR11 = FUN6(VAR4->VAR10, VAR4->VAR12, VAR4->VAR13, VAR14, VAR15, NULL, VAR16, VAR6);
    }
    else
    {
        VAR6->VAR11 = NULL;
    }
    FUN7(VAR6->VAR11, VAR4->VAR17);
    FUN8(VAR6);
    FUN9("", 0, 0, VAR18, VAR19, VAR6);
}