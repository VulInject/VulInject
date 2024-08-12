void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 **VAR4, *VAR5, *VAR6;
    int VAR7;
    int VAR8;
    if (FUN2(VAR2))
        VAR8 = VAR9;
    else if (FUN3(VAR2))
        VAR8 = VAR10;
    else if (FUN4(VAR2) || FUN5(VAR2))
        VAR8 = VAR11;
    else if (FUN6(VAR2))
        VAR8 = VAR12;
    else if (FUN7(VAR2))
        VAR8 = VAR12;
    else
        return;
    for (VAR4 = VAR13, VAR7 = 0; *VAR4; VAR4++)
        if ((*VAR4)->VAR14 & VAR8)
            VAR7++;
    VAR2->VAR15 = (struct VAR3 *)FUN8(sizeof(struct VAR3) * (VAR7 + 1));
    for (VAR4 = VAR13, VAR5 = VAR2->VAR15; *VAR4; VAR4++)
        if ((*VAR4)->VAR14 & VAR8)
        {
            memcpy(VAR5, *VAR4, sizeof(struct VAR3));
            for (VAR6 = VAR2->VAR15; VAR6 < VAR5; VAR6++)
                if (VAR5->VAR16 && !strcmp(VAR5->VAR16->VAR17, VAR6->VAR17))
                {
                    VAR5->VAR16 = VAR6;
                    VAR5->VAR18 = VAR6->VAR19;
                    VAR6->VAR19 = VAR5;
                }
                else if (VAR6->VAR16 && !strcmp(VAR6->VAR16->VAR17, VAR5->VAR17))
                {
                    VAR6->VAR16 = VAR5;
                    VAR6->VAR18 = VAR5->VAR19;
                    VAR5->VAR19 = VAR6;
                }
            VAR5->VAR20 = VAR5->VAR20 ?: 1;
            VAR5->VAR21 = VAR5->VAR21 ?: 1;
            VAR5++;
        }
    for (VAR5 = VAR2->VAR15; VAR7--; VAR5++)
    {
        FUN9(VAR5);
        FUN10(VAR5);
    }
}