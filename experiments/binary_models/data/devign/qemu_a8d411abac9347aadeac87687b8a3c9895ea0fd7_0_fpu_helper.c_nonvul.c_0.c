void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    ppc_vsr_t VAR4;
    ppc_vsr_t VAR5;
    float_status VAR6;
    FUN2(FUN3(VAR3) + 32, &VAR4, VAR2);
    memset(&VAR5, 0, sizeof(VAR5));
    FUN4(VAR2);
    VAR6 = VAR2->VAR7;
    if (FUN5(FUN6(VAR3) != 0))
    {
        VAR6.VAR8 = VAR9;
    }
    FUN7(0, &VAR6);
    VAR5.VAR10 = FUN8(VAR4.VAR10, &VAR6);
    VAR2->VAR7.VAR11 |= VAR6.VAR11;
    if (FUN5(VAR6.VAR11 & VAR12))
    {
        if (FUN9(VAR4.VAR10, &VAR6))
        {
            FUN10(VAR2, VAR13, 1);
            VAR5.VAR10 = FUN11(VAR4.VAR10);
        }
        else if (FUN12(VAR4.VAR10, &VAR6))
        {
            VAR5.VAR10 = VAR4.VAR10;
        }
        else if (FUN13(VAR4.VAR10) && !FUN14(VAR4.VAR10))
        {
            FUN10(VAR2, VAR14, 1);
            FUN15(0, &VAR2->VAR7);
            VAR5.VAR10 = FUN16(&VAR2->VAR7);
        }
    }
    FUN17(VAR2, VAR5.VAR10);
    FUN18(FUN19(VAR3) + 32, &VAR5, VAR2);
    FUN20(VAR2);
}