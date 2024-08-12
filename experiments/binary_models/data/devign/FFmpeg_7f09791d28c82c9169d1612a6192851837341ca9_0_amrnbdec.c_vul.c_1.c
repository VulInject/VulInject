static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    float *VAR14;
    int VAR15, VAR16, VAR17;
    float VAR18;
    AMRFixed VAR19 = {0};
    float VAR20[VAR21];
    float VAR22;
    const float *VAR23;
    VAR8->VAR24.VAR25 = VAR26;
    if ((VAR17 = VAR2->FUN2(VAR2, &VAR8->VAR24)) < 0)
    {
        FUN3(VAR2, VAR27, "");
        return VAR17;
        VAR14 = (float *)VAR8->VAR24.VAR3[0];
        VAR8->VAR28 = FUN4(VAR8, VAR11, VAR12);
        if (VAR8->VAR28 == VAR29)
        {
            FUN5(VAR2, "", 1);
            return -1;
            if (VAR8->VAR28 == VAR30)
            {
                FUN6(VAR8);
            }
            else
                FUN7(VAR8);
            for (VAR15 = 0; VAR15 < 4; VAR15++)
                FUN8(VAR8->VAR31[VAR15], VAR8->VAR32[VAR15], 5);
            for (VAR16 = 0; VAR16 < 4; VAR16++)
            {
                const VAR33 *VAR34 = &VAR8->VAR35.VAR16[VAR16];
                FUN9(VAR8, VAR34, VAR16);
                FUN10(&VAR19, VAR34->VAR36, VAR8->VAR28, VAR16);
                FUN11(VAR8, VAR34, VAR8->VAR28, VAR16, &VAR18);
                FUN12(VAR8, VAR16, VAR8->VAR28, &VAR19);
                FUN13(VAR8->VAR37, &VAR19, 1.0, VAR21);
                VAR8->VAR38[4] = FUN14(VAR18, FUN15(VAR8->VAR37, VAR8->VAR37, VAR21) / VAR21, VAR8->VAR39, VAR40[VAR8->VAR28], VAR41);
                for (VAR15 = 0; VAR15 < VAR21; VAR15++)
                    VAR8->VAR42[VAR15] *= VAR8->VAR43[4];
                FUN13(VAR8->VAR42, &VAR19, VAR8->VAR38[4], VAR21);
                for (VAR15 = 0; VAR15 < VAR21; VAR15++)
                    VAR8->VAR42[VAR15] = FUN16(VAR8->VAR42[VAR15]);
                VAR22 = FUN17(VAR8, VAR8->VAR44[VAR16], VAR8->VAR45, VAR8->VAR28);
                VAR23 = FUN18(VAR8, &VAR19, VAR8->VAR37, VAR22, VAR20);
                if (FUN19(VAR8, VAR8->VAR32[VAR16], VAR22, VAR23, &VAR8->VAR46[VAR47], 0))
                    FUN19(VAR8, VAR8->VAR32[VAR16], VAR22, VAR23, &VAR8->VAR46[VAR47], 1);
                FUN20(VAR8, VAR8->VAR32[VAR16], VAR14 + VAR16 * VAR21);
                FUN21(VAR8->VAR37, &VAR19, VAR21);
                FUN22(VAR8);
                FUN23(VAR14, VAR14, VAR48, VAR49, VAR50 * VAR51, VAR8->VAR52, VAR26);
                FUN24(VAR8->VAR45, VAR8->VAR45, VAR8->VAR44[3], 0.84, 0.16, VAR47);
                *VAR4 = 1;
                *(VAR53 *)VAR3 = VAR8->VAR24;
                return VAR54[VAR8->VAR28] + 1;