static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11;
    register VAR3 *VAR12, *VAR13;
    int VAR14, VAR15;
    VAR8 = 1 << VAR5;
    for (VAR6 = 0; VAR6 < VAR8; VAR6++)
    {
        int VAR16 = VAR17[VAR6] >> (8 - VAR5);
        if (VAR16 < VAR6)
            FUN2(VAR3, VAR4[VAR16], VAR4[VAR6]);
    }
    VAR12 = &VAR4[0];
    VAR6 = VAR8 >> 1;
    do
    {
        FUN3(VAR12[0].VAR18, VAR12[0].VAR19, VAR12[1].VAR18, VAR12[1].VAR19, VAR12[0].VAR18, VAR12[0].VAR19, VAR12[1].VAR18, VAR12[1].VAR19);
        VAR12 += 2;
    } while (--VAR6);
    VAR12 = &VAR4[0];
    VAR6 = VAR8 >> 2;
    do
    {
        FUN3(VAR12[0].VAR18, VAR12[0].VAR19, VAR12[2].VAR18, VAR12[2].VAR19, VAR12[0].VAR18, VAR12[0].VAR19, VAR12[2].VAR18, VAR12[2].VAR19);
        FUN3(VAR12[1].VAR18, VAR12[1].VAR19, VAR12[3].VAR18, VAR12[3].VAR19, VAR12[1].VAR18, VAR12[1].VAR19, VAR12[3].VAR19, -VAR12[3].VAR18);
        VAR12 += 4;
    } while (--VAR6);
    VAR10 = VAR8 >> 3;
    VAR11 = 1 << 2;
    VAR9 = VAR8 >> 1;
    do
    {
        VAR12 = VAR4;
        VAR13 = VAR4 + VAR11;
        for (VAR6 = 0; VAR6 < VAR10; VAR6++)
        {
            FUN3(VAR12->VAR18, VAR12->VAR19, VAR13->VAR18, VAR13->VAR19, VAR12->VAR18, VAR12->VAR19, VAR13->VAR18, VAR13->VAR19);
            VAR12++;
            VAR13++;
            for (VAR7 = VAR10; VAR7 < VAR9; VAR7 += VAR10)
            {
                FUN4(VAR14, VAR15, VAR2->VAR20[VAR7], -VAR2->VAR21[VAR7], VAR13->VAR18, VAR13->VAR19);
                FUN3(VAR12->VAR18, VAR12->VAR19, VAR13->VAR18, VAR13->VAR19, VAR12->VAR18, VAR12->VAR19, VAR14, VAR15);
                VAR12++;
                VAR13++;
            }
            VAR12 += VAR11;
            VAR13 += VAR11;
        }
        VAR10 = VAR10 >> 1;
        VAR11 = VAR11 << 1;
    } while (VAR10);
}