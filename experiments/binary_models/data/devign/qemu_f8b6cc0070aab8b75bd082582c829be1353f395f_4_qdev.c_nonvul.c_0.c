static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    VAR7 *VAR8 = FUN2(VAR7, VAR2, VAR4);
    VAR9 *VAR10 = FUN2(VAR9, VAR11, VAR2->VAR12);
    if (!VAR6->VAR13.VAR14)
    {
        fprintf(VAR15, "", VAR2->VAR8->VAR16);
        goto VAR17;
    }
    if (VAR6->VAR18 == -1)
    {
        VAR6->VAR18 = VAR10->VAR19 ? 1 : 0;
    }
    switch (VAR6->VAR18)
    {
    case 0:
        if (VAR10->VAR19)
        {
            fprintf(VAR15, "");
            goto VAR17;
        }
        VAR10->VAR19 = VAR6;
        break;
    case 1:
        if (VAR10->VAR20)
        {
            fprintf(VAR15, "");
            goto VAR17;
        }
        VAR10->VAR20 = VAR6;
        break;
    default:
        goto VAR17;
    }
    return VAR8->FUN3(VAR6);
VAR17:
    return -1;
}