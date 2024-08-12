void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    ppc_vsr_t VAR4, VAR5, VAR6;
    float_status VAR7;
    FUN2(FUN3(VAR3) + 32, &VAR5, VAR2);
    FUN2(FUN4(VAR3) + 32, &VAR6, VAR2);
    FUN2(FUN5(VAR3) + 32, &VAR4, VAR2);
    FUN6(VAR2);
    VAR7 = VAR2->VAR8;
    if (FUN7(FUN8(VAR3) != 0))
    {
        VAR7.VAR9 = VAR10;
    }
    FUN9(0, &VAR7);
    VAR4.VAR11 = FUN10(VAR5.VAR11, VAR6.VAR11, &VAR7);
    VAR2->VAR8.VAR12 |= VAR7.VAR12;
    if (FUN7(VAR7.VAR12 & VAR13))
    {
        if (FUN11(VAR5.VAR11) && FUN11(VAR6.VAR11))
        {
            FUN12(VAR2, VAR14, 1);
        }
        else if (FUN13(VAR5.VAR11, &VAR7) || FUN13(VAR6.VAR11, &VAR7))
        {
            FUN12(VAR2, VAR15, 1);
        }
    }
    FUN14(VAR2, VAR4.VAR11);
    FUN15(FUN5(VAR3) + 32, &VAR4, VAR2);
    FUN16(VAR2);
}