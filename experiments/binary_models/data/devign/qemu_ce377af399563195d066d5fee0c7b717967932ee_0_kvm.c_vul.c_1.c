void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    if (VAR2->VAR5 & VAR6)
    {
        VAR2->VAR5 &= ~VAR6;
        FUN2("");
        FUN3(VAR2, VAR7);
    }
    if (!FUN4())
    {
        if (VAR2->VAR5 & VAR8)
        {
            VAR2->VAR9 = 1;
        }
        if (VAR4->VAR10 && (VAR2->VAR5 & VAR11) && (VAR2->VAR12 & VAR13))
        {
            int VAR14;
            VAR2->VAR5 &= ~VAR11;
            VAR14 = FUN5(VAR2);
            if (VAR14 >= 0)
            {
                struct kvm_interrupt VAR15;
                VAR15.VAR14 = VAR14;
                FUN2("", VAR14);
                FUN3(VAR2, VAR16, &VAR15);
            }
        }
        if ((VAR2->VAR5 & VAR11))
        {
            VAR4->VAR17 = 1;
        }
        else
        {
            VAR4->VAR17 = 0;
        }
        FUN2("");
        VAR4->VAR18 = FUN6(VAR2->VAR19);
    }
}