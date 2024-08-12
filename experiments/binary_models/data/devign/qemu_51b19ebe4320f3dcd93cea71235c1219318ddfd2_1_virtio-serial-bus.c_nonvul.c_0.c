static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, uint32_t VAR6)
{
    uint32_t VAR7;
    VAR5->VAR8 = FUN2(sizeof(*VAR5->VAR8));
    VAR5->VAR8->VAR6 = VAR6;
    VAR5->VAR8->VAR9 = FUN2(sizeof(*VAR5->VAR8->VAR9) * VAR6);
    VAR5->VAR8->VAR10 = FUN3(VAR11, VAR12, VAR5);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR13 *VAR14;
        uint32_t VAR15;
        VAR15 = FUN4(VAR2);
        VAR14 = FUN5(VAR5, VAR15);
        if (!VAR14)
        {
            return -VAR16;
        }
        VAR14->VAR17 = FUN6(VAR2);
        VAR5->VAR8->VAR9[VAR7].VAR14 = VAR14;
        VAR5->VAR8->VAR9[VAR7].VAR18 = FUN6(VAR2);
        if (VAR3 > 2)
        {
            uint32_t VAR19;
            FUN7(VAR2, &VAR19);
            if (VAR19)
            {
                FUN7(VAR2, &VAR14->VAR20);
                FUN8(VAR2, &VAR14->VAR21);
                VAR14->VAR22 = FUN9(VAR23, 1);
                FUN10(VAR2, (unsigned char *)VAR14->VAR22, sizeof(VAR23));
                FUN11(VAR14->VAR22);
                FUN12(VAR14, false);
            }
        }
    }
    FUN13(VAR5->VAR8->VAR10, 1);
    return 0;
}