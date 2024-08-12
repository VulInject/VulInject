static void FUN1(VAR1 *VAR2, int VAR3)
{
    struct Vmxnet3_TxDesc VAR4;
    uint32_t VAR5;
    uint32_t VAR6;
    hwaddr VAR7;
    for (;;)
    {
        if (!FUN2(VAR2, VAR3, &VAR4, &VAR5))
        {
            break;
        }
        FUN3(&VAR4);
        if (!VAR2->VAR8)
        {
            VAR6 = (VAR4.VAR9 > 0) ? VAR4.VAR9 : VAR10;
            VAR7 = FUN4(VAR4.VAR11);
            if (!FUN5(VAR2->VAR12, VAR7, VAR6))
            {
                VAR2->VAR8 = true;
            }
        }
        if (VAR2->VAR13)
        {
            FUN6(VAR2, &VAR4);
            VAR2->VAR13 = false;
        }
        if (VAR4.VAR14)
        {
            if (!VAR2->VAR8 && FUN7(VAR2->VAR12))
            {
                if (VAR2->VAR15)
                {
                    FUN8(VAR2->VAR12, VAR2->VAR16);
                }
                FUN9(VAR2, VAR3);
            }
            else
            {
                FUN10(VAR2, VAR3, VAR17);
            }
            FUN11(VAR2, VAR3, VAR5);
            VAR2->VAR13 = true;
            VAR2->VAR8 = false;
            FUN12(VAR2->VAR12);
        }
    }
}