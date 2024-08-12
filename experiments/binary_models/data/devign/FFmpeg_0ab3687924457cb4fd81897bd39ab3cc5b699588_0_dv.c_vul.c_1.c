static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR3 *VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR5 = FUN2(VAR4, VAR12);
    if (!VAR5 || !VAR2->VAR13)
    {
        VAR2->VAR11 = 0;
        VAR8 = VAR5[1] & 0x3f;
        VAR6 = (VAR5[4] >> 3) & 0x07;
        VAR7 = (VAR5[3] & 0x1f);
        VAR9 = VAR5[4] & 0x07;
        if (VAR7 > 3)
        {
            FUN3(VAR2->VAR14, VAR15, "", VAR7);
            VAR2->VAR11 = 0;
            VAR11 = ((int[4]){1, 0, 2, 4})[VAR7];
            if (VAR11 == 1 && VAR9 && VAR6 == 2)
                VAR11 = 2;
            for (VAR10 = 0; VAR10 < VAR11; VAR10++)
            {
                if (!VAR2->VAR16[VAR10])
                {
                    VAR2->VAR16[VAR10] = FUN4(VAR2->VAR14, NULL);
                    if (!VAR2->VAR16[VAR10])
                        break;
                    FUN5(VAR2->VAR16[VAR10], 64, 1, 30000);
                    VAR2->VAR16[VAR10]->VAR17->VAR18 = VAR19;
                    VAR2->VAR16[VAR10]->VAR17->VAR20 = VAR21;
                    FUN6(&VAR2->VAR22[VAR10]);
                    VAR2->VAR22[VAR10].VAR23 = 0;
                    VAR2->VAR22[VAR10].VAR24 = VAR2->VAR25[VAR10];
                    VAR2->VAR22[VAR10].VAR26 = VAR2->VAR16[VAR10]->VAR27;
                    VAR2->VAR22[VAR10].VAR28 |= VAR29;
                    VAR2->VAR16[VAR10]->VAR17->VAR30 = VAR31[VAR6];
                    VAR2->VAR16[VAR10]->VAR17->VAR32 = 2;
                    VAR2->VAR16[VAR10]->VAR17->VAR33 = 2 * VAR31[VAR6] * 16;
                    VAR2->VAR16[VAR10]->VAR34 = 0;
                    VAR2->VAR11 = VAR10;
                    return (VAR2->VAR13->VAR35[VAR6] + VAR8) * 4;