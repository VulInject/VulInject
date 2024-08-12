static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11 = 0;
    AVFrame VAR12;
    if (!VAR2->VAR8->VAR8)
    {
        VAR8 = FUN2(VAR2->VAR8->VAR13);
        if (!VAR8)
            return -1;
        VAR11 = FUN3(VAR2->VAR8, VAR8);
        if (VAR11 < 0)
            return VAR11;
    }
    if (!FUN4(VAR2->VAR8))
    {
        switch (VAR2->VAR8->VAR14)
        {
        case VAR15:
            VAR11 = FUN5(VAR2->VAR8, &VAR12, &VAR9, VAR4);
            break;
        case VAR16:
            VAR10 = FUN6(VAR4->VAR17, VAR18);
            VAR6 = FUN7(VAR10);
            if (!VAR6)
                goto VAR19;
            VAR11 = FUN8(VAR2->VAR8, VAR6, &VAR10, VAR4);
            FUN9(VAR6);
            break;
        default:
            break;
        }
    }
VAR19:
    return VAR11;