static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    char VAR6[VAR7 + 1];
    int VAR8;
    int64_t VAR9 = FUN2(VAR2->VAR10);
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        VAR6[VAR5] = FUN3(VAR2->VAR10);
        if (VAR6[VAR5] == '')
        {
            VAR6[VAR5 + 1] = 0;
            break;
        }
    }
    if (VAR2->VAR10->VAR11)
        return VAR2->VAR10->VAR11;
    else if (VAR2->VAR10->VAR12)
        return VAR13;
    else if (VAR5 == VAR7)
        return VAR14;
    if (FUN4(VAR6, VAR15, strlen(VAR15)))
        return VAR14;
    VAR8 = FUN5(VAR2->VAR10, VAR4, VAR2->VAR16 - VAR17);
    if (VAR8 < 0)
        return VAR8;
    else if (VAR8 != VAR2->VAR16 - VAR17)
        return VAR2->VAR10->VAR12 ? VAR13 : FUN6(VAR18);
    VAR4->VAR19 = 0;
    VAR4->VAR20 = (VAR9 - VAR2->VAR21->VAR22) / VAR2->VAR16;
    VAR4->VAR23 = 1;
    return 0;
}