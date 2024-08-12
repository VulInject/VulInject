static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5, enum AVCodecID VAR6)
{
    VAR7 *VAR8;
    VAR1 *VAR9;
    *VAR5 = FUN2(VAR6);
    if (!(*VAR5))
    {
        fprintf(VAR10, "", FUN3(VAR6));
        FUN4(1);
    }
    VAR9 = FUN5(VAR3, *VAR5);
    if (!VAR9)
    {
        fprintf(VAR10, "");
        FUN4(1);
    }
    VAR9->VAR11 = VAR3->VAR12 - 1;
    VAR8 = VAR9->VAR5;
    switch ((*VAR5)->VAR13)
    {
    case VAR14:
        VAR9->VAR11 = 1;
        VAR8->VAR15 = VAR16;
        VAR8->VAR17 = 64000;
        VAR8->VAR18 = 44100;
        VAR8->VAR19 = 2;
        break;
    case VAR20:
        FUN6(VAR8, *VAR5);
        VAR8->VAR6 = VAR6;
        VAR8->VAR17 = 400000;
        VAR8->VAR21 = 352;
        VAR8->VAR22 = 288;
        VAR8->VAR23.VAR24 = VAR25;
        VAR8->VAR23.VAR26 = 1;
        VAR8->VAR27 = 12;
        VAR8->VAR28 = VAR29;
        if (VAR8->VAR6 == VAR30)
        {
            VAR8->VAR31 = 2;
        }
        if (VAR8->VAR6 == VAR32)
        {
            VAR8->VAR33 = 2;
        }
        break;
    default:
        break;
    }
    if (VAR3->VAR34->VAR35 & VAR36)
        VAR8->VAR35 |= VAR37;
    return VAR9;
}