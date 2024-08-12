static void FUN1(VAR1 *VAR2)
{
    target_phys_addr_t VAR3 = 0;
    int VAR4 = FUN2(VAR2) - 1;
    int VAR5 = 0;
    VAR2->VAR6 = -1;
    if (!FUN3(VAR2))
    {
        VAR2->VAR7[0] &= ~0x0008;
        return;
    }
    VAR2->VAR8 = 1;
VAR9:
    if (FUN4(VAR2))
    {
        struct pcnet_TMD VAR10;
        FUN5(&VAR10, FUN6(VAR2, FUN7(VAR2)));
        FUN8("", FUN6(VAR2, FUN7(VAR2)));
        FUN9(&VAR10);
        if (FUN10(VAR10.VAR11, VAR12, VAR13))
        {
            VAR2->VAR6 = 0;
            VAR3 = FUN6(VAR2, FUN7(VAR2));
            if (FUN11(VAR2) != 1)
                VAR5 = FUN10(VAR10.VAR11, VAR12, VAR14);
        }
        if (!FUN10(VAR10.VAR11, VAR12, VAR15))
        {
            int VAR16 = 4096 - FUN10(VAR10.VAR17, VAR18, VAR19);
            VAR2->FUN12(VAR2->VAR20, FUN6(VAR2, VAR10.VAR21), VAR2->VAR22 + VAR2->VAR6, VAR16, FUN13(VAR2));
            VAR2->VAR6 += VAR16;
        }
        else if (VAR2->VAR6 >= 0)
        {
            int VAR16 = 4096 - FUN10(VAR10.VAR17, VAR18, VAR19);
            VAR2->FUN12(VAR2->VAR20, FUN6(VAR2, VAR10.VAR21), VAR2->VAR22 + VAR2->VAR6, VAR16, FUN13(VAR2));
            VAR2->VAR6 += VAR16;
            FUN8("", VAR2->VAR6);
            if (FUN14(VAR2))
            {
                if (FUN11(VAR2) == 1)
                    VAR5 = !FUN10(VAR10.VAR11, VAR12, VAR23);
                VAR2->VAR24 = VAR5 ? VAR25 : VAR26;
                FUN15(VAR2, VAR2->VAR22, VAR2->VAR6);
                VAR2->VAR24 = 0;
            }
            else if (VAR2->VAR27)
                FUN16(VAR2->VAR27, VAR2->VAR22, VAR2->VAR6);
            VAR2->VAR7[0] &= ~0x0008;
            VAR2->VAR7[4] |= 0x0004;
            VAR2->VAR6 = -1;
        }
        FUN17(&VAR10.VAR11, VAR12, VAR28, 0);
        FUN18(&VAR10, FUN6(VAR2, FUN7(VAR2)));
        if (!FUN19(VAR2) || (FUN20(VAR2) && FUN10(VAR10.VAR11, VAR12, VAR29)))
            VAR2->VAR7[0] |= 0x0200;
        if (FUN21(VAR2) <= 1)
            FUN21(VAR2) = FUN2(VAR2);
        else
            FUN21(VAR2)
            --;
        if (VAR4--)
            goto VAR9;
    }
    else if (VAR2->VAR6 >= 0)
    {
        struct pcnet_TMD VAR10;
        FUN5(&VAR10, FUN6(VAR2, VAR3));
        FUN17(&VAR10.VAR30, VAR31, VAR32, 1);
        FUN17(&VAR10.VAR30, VAR31, VAR33, 1);
        FUN17(&VAR10.VAR11, VAR12, VAR34, 1);
        FUN17(&VAR10.VAR11, VAR12, VAR28, 0);
        FUN18(&VAR10, FUN6(VAR2, VAR3));
        VAR2->VAR7[0] |= 0x0200;
        if (!FUN22(VAR2))
        {
            VAR2->VAR7[0] &= ~0x0010;
        }
        else if (VAR4--)
            goto VAR9;
    }
    VAR2->VAR8 = 0;
}