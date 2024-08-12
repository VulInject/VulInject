void FUN1(void *VAR1, int VAR2, int VAR3)
{
    const VAR4 *class = *(VAR4 **)VAR1;
    const VAR5 *VAR6 = NULL;
    while ((VAR6 = FUN2(VAR1, VAR6)) != NULL)
    {
        if ((VAR6->VAR3 & VAR2) != VAR3)
            continue;
        switch (VAR6->VAR7)
        {
        case VAR8:
            break;
        case VAR9:
        case VAR10:
        case VAR11:
            FUN3(VAR1, VAR6->VAR12, VAR6->VAR13.VAR14, 0);
            break;
        case VAR15:
        case VAR16:
        {
            double VAR17;
            VAR17 = VAR6->VAR13.VAR18;
            FUN4(VAR1, VAR6->VAR12, VAR17, 0);
        }
        break;
        case VAR19:
        {
            AVRational VAR17;
            VAR17 = FUN5(VAR6->VAR13.VAR18, VAR20);
            FUN6(VAR1, VAR6->VAR12, VAR17, 0);
        }
        break;
        case VAR21:
        case VAR22:
            FUN7(VAR1, VAR6->VAR12, VAR6->VAR13.VAR23, 0);
            break;
        case VAR24:
            if (class->VAR25 && class->VAR25 < FUN8(52, 10, 100))
                FUN7(VAR1, VAR6->VAR12, VAR6->VAR13.VAR23, 0);
            else
                FUN9(VAR1, VAR6->VAR12, VAR6->VAR13.VAR14, 0);
            break;
        case VAR26:
            if (class->VAR25 && class->VAR25 < FUN8(52, 10, 100))
                FUN7(VAR1, VAR6->VAR12, VAR6->VAR13.VAR23, 0);
            else
                FUN10(VAR1, VAR6->VAR12, VAR6->VAR13.VAR14, 0);
            break;
        case VAR27:
            break;
        default:
            FUN11(VAR1, VAR28, "", VAR6->VAR7, VAR6->VAR12);
        }
    }
}