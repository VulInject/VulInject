static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[0];
    VAR8 *VAR9 = VAR2->VAR10;
    int64_t VAR11;
    int VAR12, VAR13;
    VAR11 = VAR9->VAR14 - FUN2(VAR2->VAR15);
    if (VAR11 <= 0)
        return VAR16;
    if (VAR6->VAR17->VAR18 >= 33)
        VAR13 = VAR6->VAR17->VAR18;
    else
        VAR13 = (VAR19 / VAR6->VAR17->VAR18) * VAR6->VAR17->VAR18;
    VAR13 = FUN3(VAR11, VAR13);
    VAR12 = FUN4(VAR2->VAR15, VAR4, VAR13);
    if (VAR12 < 0)
        return VAR12;
    VAR4->VAR20 = 0;
    VAR4->VAR21 = (VAR12 / VAR6->VAR17->VAR18) * VAR9->VAR22;
    return 0;