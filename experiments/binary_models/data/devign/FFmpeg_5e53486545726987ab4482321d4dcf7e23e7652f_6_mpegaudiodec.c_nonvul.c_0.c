static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    if ((VAR2->VAR7 < 2) || (VAR2->VAR8 == NULL))
    {
        FUN2(VAR2, VAR9, "");
        return -1;
    }
    VAR4->VAR10 = (((unsigned char *)VAR2->VAR8)[1] >> 3) & 0x0f;
    VAR4->VAR11 = VAR12[VAR4->VAR10];
    if (!VAR4->VAR11)
    {
        FUN2(VAR2, VAR9, "");
        return -1;
    }
    VAR2->VAR13 = VAR14[VAR4->VAR10];
    VAR4->VAR15[0] = FUN3(sizeof(VAR16));
    VAR2->VAR5 = VAR4->VAR15[0];
    FUN4(VAR2);
    VAR2->VAR5 = VAR4;
    VAR4->VAR15[0]->VAR17 = 1;
    for (VAR6 = 1; VAR6 < VAR4->VAR11; VAR6++)
    {
        VAR4->VAR15[VAR6] = FUN3(sizeof(VAR16));
        VAR4->VAR15[VAR6]->VAR18 = VAR4->VAR15[0]->VAR18;
        VAR4->VAR15[VAR6]->VAR17 = 1;
        VAR4->VAR15[VAR6]->VAR2 = VAR2;
    }
    return 0;
}