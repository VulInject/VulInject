static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 == 0 || VAR6 != VAR7)
    {
        VAR5 = -VAR6;
        goto VAR8;
    }
    if (VAR4->VAR9 & VAR10)
    {
        VAR5 = FUN2(VAR2, VAR4);
        FUN3(VAR2, VAR4, VAR5);
    }
    else if (VAR4->VAR9 & VAR11)
    {
        VAR5 = FUN4(VAR2, VAR4);
        FUN5(VAR2, VAR4, VAR5);
    }
    else if (VAR4->VAR9 & VAR12)
    {
        int32_t VAR13 = FUN6(VAR4->VAR14.VAR15);
        VAR16 *VAR17 = FUN7(VAR2, VAR13);
        if (VAR17 == NULL)
        {
            VAR5 = -VAR6;
            FUN8(VAR2, VAR4, VAR5);
        }
        VAR5 = FUN9(VAR2, &VAR17->VAR18, &VAR4->VAR19);
        FUN5(VAR2, VAR4, VAR5);
    }
    else if (VAR4->VAR9 & VAR20)
    {
        char VAR21;
        uint32_t VAR22, VAR23;
        mode_t VAR24 = 0;
        if (sscanf(VAR4->VAR14.VAR15, "", &VAR21, &VAR22, &VAR23) != 3)
        {
            VAR5 = -VAR6;
            FUN8(VAR2, VAR4, VAR5);
        }
        switch (VAR21)
        {
        case '':
            VAR24 = VAR25;
            break;
        case '':
            VAR24 = VAR26;
            break;
        default:
            VAR5 = -VAR27;
            FUN8(VAR2, VAR4, VAR5);
        }
        VAR24 |= VAR4->VAR9 & 0777;
        VAR5 = FUN10(VAR2, VAR4, VAR24, FUN11(VAR22, VAR23));
        FUN5(VAR2, VAR4, VAR5);
    }
    else if (VAR4->VAR9 & VAR28)
    {
        VAR5 = FUN10(VAR2, VAR4, VAR29 | (VAR4->VAR9 & 0777), 0);
        FUN8(VAR2, VAR4, VAR5);
    }
    else if (VAR4->VAR9 & VAR30)
    {
        VAR5 = FUN10(VAR2, VAR4, VAR31 | (VAR4->VAR9 & 0777), 0);
        FUN8(VAR2, VAR4, VAR5);
    }
    else
    {
        VAR4->VAR32->VAR33 = FUN12(VAR2, VAR4);
        FUN13(VAR2, VAR4, VAR5);
    }
    return;
VAR8:
    FUN8(VAR2, VAR4, VAR5);
}