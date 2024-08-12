static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    int VAR6 = 0;
    VAR7 *VAR8;
    int *VAR9;
    VAR2->VAR10 = 0;
    while (VAR4->VAR11[VAR2->VAR11].VAR8.VAR12)
    {
        VAR6 += 3;
        VAR6 += FUN2(&VAR4->VAR11[VAR2->VAR11++].VAR8, &VAR2->VAR10);
    }
    VAR2->VAR10 = FUN3(VAR2->VAR10);
    VAR2->VAR13 = FUN4(VAR2->VAR11 * sizeof(*VAR2->VAR13));
    VAR2->VAR9 = FUN4(VAR2->VAR10 * sizeof(*VAR2->VAR9));
    VAR8 = FUN5(VAR6);
    VAR2->VAR11 = 0;
    VAR9 = VAR2->VAR9;
    while (VAR4->VAR11[VAR2->VAR11].VAR8.VAR12)
    {
        VAR2->VAR13[VAR2->VAR11].VAR14 = VAR8;
        VAR6 = 0;
        VAR8[VAR6++] = VAR15 | VAR16;
        VAR8[VAR6++] = VAR4->VAR11[VAR2->VAR11].VAR17 >> 8;
        VAR8[VAR6++] = VAR4->VAR11[VAR2->VAR11].VAR17 & 0xff;
        VAR6 += FUN6(VAR8 + VAR6, &VAR4->VAR11[VAR2->VAR11].VAR8, &VAR9);
        if (VAR4->VAR11[VAR2->VAR11].VAR17 == VAR18)
            VAR4->VAR11[VAR2->VAR11].VAR8.VAR19.VAR20 = VAR5;
        VAR2->VAR13[VAR2->VAR11++].VAR6 = VAR6;
        VAR8 += VAR6;
    }
    FUN7(VAR2->VAR13, VAR2->VAR11, sizeof(*VAR2->VAR13), (void *)VAR21);
    FUN7(VAR2->VAR9, VAR2->VAR10, sizeof(*VAR2->VAR9), (void *)VAR22);
}