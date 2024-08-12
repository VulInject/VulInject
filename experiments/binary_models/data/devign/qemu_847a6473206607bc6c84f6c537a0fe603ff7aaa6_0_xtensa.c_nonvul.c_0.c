int FUN1(bfd_vma VAR1, struct VAR2 *VAR3)
{
    xtensa_isa VAR4 = VAR3->VAR5;
    xtensa_insnbuf VAR6 = FUN2(VAR4);
    xtensa_insnbuf VAR7 = FUN2(VAR4);
    VAR8 *VAR9 = FUN3(1);
    int VAR10 = VAR3->FUN4(VAR1, VAR9, 1, VAR3);
    xtensa_format VAR11;
    int VAR12, VAR13;
    unsigned VAR14;
    if (VAR10)
    {
        VAR3->FUN5(VAR10, VAR1, VAR3);
        VAR14 = -1;
        goto VAR15;
    }
    VAR14 = FUN6(VAR4, VAR9);
    if (VAR14 == VAR16)
    {
        VAR3->FUN7(VAR3->VAR17, "", VAR9[0]);
        VAR14 = 1;
        goto VAR15;
    }
    VAR9 = FUN8(VAR9, VAR14);
    VAR10 = VAR3->FUN4(VAR1 + 1, VAR9 + 1, VAR14 - 1, VAR3);
    if (VAR10)
    {
        VAR3->FUN7(VAR3->VAR17, "", VAR9[0]);
        VAR3->FUN5(VAR10, VAR1 + 1, VAR3);
        VAR14 = 1;
        goto VAR15;
    }
    FUN9(VAR4, VAR6, VAR9, VAR14);
    VAR11 = FUN10(VAR4, VAR6);
    if (VAR11 == VAR16)
    {
        unsigned VAR18;
        for (VAR18 = 0; VAR18 < VAR14; ++VAR18)
        {
            VAR3->FUN7(VAR3->VAR17, "", VAR18 ? "" : "", VAR9[VAR18]);
        }
        goto VAR15;
    }
    VAR13 = FUN11(VAR4, VAR11);
    if (VAR13 > 1)
    {
        VAR3->FUN7(VAR3->VAR17, "");
    }
    for (VAR12 = 0; VAR12 < VAR13; ++VAR12)
    {
        xtensa_opcode VAR19;
        int VAR20, VAR21, VAR22;
        if (VAR12)
        {
            VAR3->FUN7(VAR3->VAR17, "");
        }
        FUN12(VAR4, VAR11, VAR12, VAR6, VAR7);
        VAR19 = FUN13(VAR4, VAR11, VAR12, VAR7);
        if (VAR19 == VAR16)
        {
            VAR3->FUN7(VAR3->VAR17, "");
            continue;
        }
        VAR22 = FUN14(VAR4, VAR19);
        VAR3->FUN7(VAR3->VAR17, "", FUN15(VAR4, VAR19));
        for (VAR20 = VAR21 = 0; VAR20 < VAR22; ++VAR20)
        {
            if (FUN16(VAR4, VAR19, VAR20))
            {
                uint32_t VAR23 = 0xbadc0de;
                int VAR24;
                VAR3->FUN7(VAR3->VAR17, VAR21 ? "" : "");
                FUN17(VAR4, VAR19, VAR20, VAR11, VAR12, VAR7, &VAR23);
                VAR24 = FUN18(VAR4, VAR19, VAR20, &VAR23);
                if (VAR24 == VAR16)
                {
                    VAR3->FUN7(VAR3->VAR17, "");
                }
                else if (FUN19(VAR4, VAR19, VAR20))
                {
                    xtensa_regfile VAR25 = FUN20(VAR4, VAR19, VAR20);
                    VAR3->FUN7(VAR3->VAR17, "", FUN21(VAR4, VAR25), VAR23);
                }
                else if (FUN22(VAR4, VAR19, VAR20))
                {
                    FUN23(VAR4, VAR19, VAR20, &VAR23, VAR1);
                    VAR3->FUN7(VAR3->VAR17, "", VAR23);
                }
                else
                {
                    VAR3->FUN7(VAR3->VAR17, "", VAR23);
                }
                ++VAR21;
            }
        }
    }
    if (VAR13 > 1)
    {
        VAR3->FUN7(VAR3->VAR17, "");
    }
VAR15:
    FUN24(VAR9);
    FUN25(VAR4, VAR6);
    FUN25(VAR4, VAR7);
    return VAR14;
}