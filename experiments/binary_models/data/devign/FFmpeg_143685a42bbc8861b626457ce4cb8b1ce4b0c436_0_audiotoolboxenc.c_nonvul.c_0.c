static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    OSStatus VAR11;
    AudioBufferList VAR12 = {.VAR13 = 1, .VAR14 = {{
                                                            .VAR15 = VAR2->VAR16,
                                                            .VAR17 = VAR9->VAR18,
                                                        }}};
    AudioStreamPacketDescription VAR19 = {0};
    if (VAR6)
    {
        VAR5 *VAR20;
        if (FUN2(&VAR9->VAR21))
        {
            FUN3(VAR2, VAR22, "");
            return VAR23;
        }
        if ((VAR11 = FUN4(&VAR9->VAR24, VAR6)) < 0)
            return VAR11;
        VAR20 = FUN5(VAR6);
        if (!VAR20)
            return FUN6(VAR25);
        FUN7(VAR2, &VAR9->VAR21, VAR20);
    }
    else
    {
        VAR9->VAR26 = 1;
    }
    if ((VAR11 = FUN8(VAR2, VAR4, VAR9->VAR18, 0)) < 0)
        return VAR11;
    VAR12.VAR14[0].VAR27 = VAR4->VAR28;
    *VAR7 = VAR2->VAR29 / VAR9->VAR29;
    VAR11 = FUN9(VAR9->VAR30, VAR31, VAR2, VAR7, &VAR12, (VAR2->VAR29 > VAR9->VAR29) ? NULL : &VAR19);
    FUN10(&VAR9->VAR32);
    if ((!VAR11 || VAR11 == 1) && *VAR7)
    {
        VAR4->VAR33 = VAR12.VAR14[0].VAR17;
        FUN11(&VAR9->VAR24, VAR19.VAR34 ? VAR19.VAR34 : VAR2->VAR29, &VAR4->VAR35, &VAR4->VAR36);
    }
    else if (VAR11 && VAR11 != 1)
    {
        FUN3(VAR2, VAR37, "", VAR11);
    }
    return 0;
}