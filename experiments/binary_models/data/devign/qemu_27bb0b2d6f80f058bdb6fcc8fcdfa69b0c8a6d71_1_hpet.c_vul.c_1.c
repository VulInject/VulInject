static void FUN1(struct VAR1 *VAR2)
{
    qemu_irq VAR3;
    int VAR4;
    if (VAR2->VAR5 <= 1 && FUN2())
    {
        if (VAR2->VAR5 == 0)
        {
            VAR3 = VAR2->VAR6->VAR7[0];
        }
        else
            VAR3 = VAR2->VAR6->VAR7[8];
    }
    else
    {
        VAR4 = FUN3(VAR2);
        VAR3 = VAR2->VAR6->VAR7[VAR4];
    }
    if (FUN4(VAR2) && FUN5())
    {
        FUN6(VAR3);
    }
}