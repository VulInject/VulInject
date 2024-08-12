static void FUN1(VAR1 *VAR2, qemu_irq VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7;
    if (!FUN3() || !FUN4() || !VAR5->VAR8)
    {
        goto VAR9;
    }
    FUN5(VAR7, &VAR5->VAR10, VAR11)
    {
        if (VAR7->VAR12 == VAR3)
        {
            break;
        }
    }
    assert(VAR7);
    if (FUN6(VAR13, VAR7->VAR14, VAR7->VAR15, VAR3) < 0)
    {
        goto VAR9;
    }
    if (FUN7(VAR7, NULL) < 0)
    {
        goto VAR16;
    }
    if (FUN8(VAR7) < 0)
    {
        goto VAR16;
    }
    VAR7->VAR17 = true;
    FUN9(VAR7->VAR18, FUN10(VAR7->VAR14), FUN10(VAR7->VAR15));
    return;
VAR16:
    FUN11(VAR13, VAR7->VAR14, VAR3);
    FUN12("", VAR7->VAR18);
    FUN13();
VAR9:
    FUN14(VAR2, VAR3);
    return;
}