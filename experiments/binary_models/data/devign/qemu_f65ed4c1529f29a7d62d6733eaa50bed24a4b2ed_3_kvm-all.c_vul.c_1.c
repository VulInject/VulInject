int FUN1(int VAR1)
{
    VAR2 *VAR3;
    int VAR4;
    int VAR5;
    if (VAR1 > 1)
        return -VAR6;
    VAR3 = FUN2(sizeof(VAR2));
    if (VAR3 == NULL)
        return -VAR7;
    for (VAR5 = 0; VAR5 < FUN3(VAR3->VAR8); VAR5++)
        VAR3->VAR8[VAR5].VAR9 = VAR5;
    VAR3->VAR10 = -1;
    VAR3->VAR11 = open("", VAR12);
    if (VAR3->VAR11 == -1)
    {
        fprintf(VAR13, "");
        VAR4 = -VAR14;
        goto VAR15;
    }
    VAR4 = FUN4(VAR3, VAR16, 0);
    if (VAR4 < VAR17)
    {
        VAR4 = -VAR6;
        fprintf(VAR13, "");
        goto VAR15;
    }
    if (VAR4 > VAR17)
    {
        VAR4 = -VAR6;
        fprintf(VAR13, "");
        goto VAR15;
    }
    VAR3->VAR10 = FUN4(VAR3, VAR18, 0);
    if (VAR3->VAR10 < 0)
        goto VAR15;
    VAR4 = FUN4(VAR3, VAR19, VAR20);
    if (VAR4 <= 0)
    {
        if (VAR4 == 0)
            VAR4 = -VAR6;
        fprintf(VAR13, "");
        goto VAR15;
    }
    VAR4 = FUN4(VAR3, VAR19, VAR21);
    if (VAR4 <= 0)
    {
        if (VAR4 == 0)
            VAR4 = -VAR6;
        fprintf(VAR13, ""
                        "");
        goto VAR15;
    }
    VAR4 = FUN5(VAR3, VAR1);
    if (VAR4 < 0)
        goto VAR15;
    VAR22 = VAR3;
    return 0;
VAR15:
    if (VAR3)
    {
        if (VAR3->VAR10 != -1)
            close(VAR3->VAR10);
        if (VAR3->VAR11 != -1)
            close(VAR3->VAR11);
    }
    FUN6(VAR3);
    return VAR4;