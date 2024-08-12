static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6;
    if (VAR3 == VAR7 && VAR2->VAR8)
    {
        int VAR9 = VAR2->VAR10[0].VAR11 ? 2 : 1;
        int VAR12 = VAR2->VAR10[0].VAR11 ? 12 : 24;
        for (VAR5 = 1; VAR5 <= VAR2->VAR10[0].VAR13; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR14[VAR2->VAR10[0].VAR15[VAR5]]; VAR4++)
            {
                SoftFloat VAR16, VAR17, VAR18;
                VAR16.VAR19 = VAR2->VAR10[0].VAR20[VAR5][VAR4].VAR21 * VAR9 + 14;
                if (VAR16.VAR19 & 1)
                    VAR16.VAR21 = 759250125;
                else
                    VAR16.VAR21 = 0x20000000;
                VAR16.VAR19 = (VAR16.VAR19 >> 1) + 1;
                if (VAR16.VAR19 > 66)
                {
                    FUN2(NULL, VAR22, "");
                    VAR16 = VAR23;
                }
                VAR17.VAR19 = (VAR12 - VAR2->VAR10[1].VAR20[VAR5][VAR4].VAR21) * VAR9;
                if (VAR17.VAR19 & 1)
                    VAR17.VAR21 = 759250125;
                else
                    VAR17.VAR21 = 0x20000000;
                VAR17.VAR19 = (VAR17.VAR19 >> 1) + 1;
                VAR18 = FUN3(VAR16, FUN4(VAR23, VAR17));
                VAR2->VAR10[0].VAR20[VAR5][VAR4] = VAR18;
                VAR2->VAR10[1].VAR20[VAR5][VAR4] = FUN5(VAR18, VAR17);
            }
        }
        for (VAR5 = 1; VAR5 <= VAR2->VAR10[0].VAR24; VAR5++)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR25; VAR4++)
            {
                SoftFloat VAR16, VAR17, VAR18;
                VAR16.VAR19 = VAR26 - VAR2->VAR10[0].VAR27[VAR5][VAR4] + 2;
                VAR16.VAR21 = 0x20000000;
                if (VAR16.VAR19 > 66)
                {
                    FUN2(NULL, VAR22, "");
                    VAR16 = VAR23;
                }
                VAR17.VAR19 = 12 - VAR2->VAR10[1].VAR27[VAR5][VAR4] + 1;
                VAR17.VAR21 = 0x20000000;
                VAR18 = FUN3(VAR16, FUN4(VAR23, VAR17));
                VAR2->VAR10[0].VAR28[VAR5][VAR4] = VAR18;
                VAR2->VAR10[1].VAR28[VAR5][VAR4] = FUN5(VAR18, VAR17);
            }
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < (VAR3 == VAR7) + 1; VAR6++)
        {
            int VAR9 = VAR2->VAR10[VAR6].VAR11 ? 2 : 1;
            for (VAR5 = 1; VAR5 <= VAR2->VAR10[VAR6].VAR13; VAR5++)
                for (VAR4 = 0; VAR4 < VAR2->VAR14[VAR2->VAR10[VAR6].VAR15[VAR5]]; VAR4++)
                {
                    SoftFloat VAR16;
                    VAR16.VAR19 = VAR9 * VAR2->VAR10[VAR6].VAR20[VAR5][VAR4].VAR21 + 12;
                    if (VAR16.VAR19 & 1)
                        VAR16.VAR21 = 759250125;
                    else
                        VAR16.VAR21 = 0x20000000;
                    VAR16.VAR19 = (VAR16.VAR19 >> 1) + 1;
                    if (VAR16.VAR19 > 66)
                    {
                        FUN2(NULL, VAR22, "");
                        VAR16 = VAR23;
                    }
                    VAR2->VAR10[VAR6].VAR20[VAR5][VAR4] = VAR16;
                }
            for (VAR5 = 1; VAR5 <= VAR2->VAR10[VAR6].VAR24; VAR5++)
                for (VAR4 = 0; VAR4 < VAR2->VAR25; VAR4++)
                {
                    VAR2->VAR10[VAR6].VAR28[VAR5][VAR4].VAR19 = VAR26 - VAR2->VAR10[VAR6].VAR27[VAR5][VAR4] + 1;
                    VAR2->VAR10[VAR6].VAR28[VAR5][VAR4].VAR21 = 0x20000000;
                }
        }
    }
}