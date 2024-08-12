int FUN1(TCGType VAR1, TCGv_ptr VAR2, intptr_t VAR3, const char *VAR4)
{
    VAR5 *VAR6 = &VAR7;
    VAR8 *VAR9, *VAR10 = &VAR6->VAR11[FUN2(VAR2)];
    int VAR12;
    VAR12 = VAR6->VAR13;
    if (VAR1 == VAR14)
    {
        char VAR15[64];
        FUN3(VAR6, VAR6->VAR13 + 2);
        VAR9 = &VAR6->VAR11[VAR6->VAR13];
        VAR9->VAR16 = VAR1;
        VAR9->VAR1 = VAR17;
        VAR9->VAR18 = 0;
        VAR9->VAR19 = 1;
        VAR9->VAR20 = VAR10;
        VAR9->VAR21 = VAR3 + 4;
        VAR9->VAR21 = VAR3;
        FUN4(VAR15, sizeof(VAR15), VAR4);
        FUN5(VAR15, sizeof(VAR15), "");
        VAR9->VAR4 = strdup(VAR15);
        VAR9++;
        VAR9->VAR16 = VAR1;
        VAR9->VAR1 = VAR17;
        VAR9->VAR18 = 0;
        VAR9->VAR19 = 1;
        VAR9->VAR20 = VAR10;
        VAR9->VAR21 = VAR3;
        VAR9->VAR21 = VAR3 + 4;
        FUN4(VAR15, sizeof(VAR15), VAR4);
        FUN5(VAR15, sizeof(VAR15), "");
        VAR9->VAR4 = strdup(VAR15);
        VAR6->VAR13 += 2;
    }
    else
    {
        FUN3(VAR6, VAR6->VAR13 + 1);
        VAR9 = &VAR6->VAR11[VAR6->VAR13];
        VAR9->VAR16 = VAR1;
        VAR9->VAR1 = VAR1;
        VAR9->VAR18 = 0;
        VAR9->VAR19 = 1;
        VAR9->VAR20 = VAR10;
        VAR9->VAR21 = VAR3;
        VAR9->VAR4 = VAR4;
        VAR6->VAR13++;
    }
    return VAR12;
}