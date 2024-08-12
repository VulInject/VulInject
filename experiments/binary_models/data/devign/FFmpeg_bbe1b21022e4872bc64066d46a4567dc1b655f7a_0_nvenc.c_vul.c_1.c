static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    VAR13 *VAR14 = &VAR11->VAR15;
    int VAR16;
    NVENCSTATUS VAR17;
    if (VAR2->VAR18 == VAR19 || VAR2->VAR18 == VAR20)
    {
        int VAR21 = FUN2(VAR2, VAR4);
        if (VAR21 < 0)
        {
            FUN3(VAR2, VAR22, "");
            return VAR21;
        }
        VAR16 = FUN4(VAR6->VAR23, VAR4);
        if (VAR16 < 0)
            return VAR16;
        VAR6->VAR24.VAR25 = VAR26;
        VAR6->VAR24.VAR27 = VAR8->VAR28[VAR21].VAR29;
        VAR17 = VAR14->FUN5(VAR8->VAR30, &VAR6->VAR24);
        if (VAR17 != VAR31)
        {
            FUN6(VAR6->VAR23);
            return FUN7(VAR2, VAR17, "");
        }
        VAR8->VAR28[VAR21].VAR32 = 1;
        VAR6->VAR21 = VAR21;
        VAR6->VAR33 = VAR6->VAR24.VAR34;
        VAR6->VAR35 = VAR6->VAR24.VAR36;
        VAR6->VAR37 = VAR4->VAR38[0];
        return 0;
    }
    else
    {
        NV_ENC_LOCK_INPUT_BUFFER VAR39 = {0};
        VAR39.VAR25 = VAR40;
        VAR39.VAR41 = VAR6->VAR33;
        VAR17 = VAR14->FUN8(VAR8->VAR30, &VAR39);
        if (VAR17 != VAR31)
        {
            return FUN7(VAR2, VAR17, "");
        }
        VAR6->VAR37 = VAR39.VAR37;
        VAR16 = FUN9(VAR2, VAR6, &VAR39, VAR4);
        VAR17 = VAR14->FUN10(VAR8->VAR30, VAR6->VAR33);
        if (VAR17 != VAR31)
        {
            return FUN7(VAR2, VAR17, "");
        }
        return VAR16;
    }
}