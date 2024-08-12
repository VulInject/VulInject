static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    AVPacket VAR6;
    VAR7 *VAR8;
    const VAR9 *VAR10;
    VAR3 = 0;
    for (VAR4 = 0; VAR4 < VAR2->VAR11; VAR4++)
    {
        VAR8 = VAR2->VAR12[VAR4];
        if (VAR8->VAR13.VAR14 == VAR15 && VAR8->VAR13.VAR16 == 0)
        {
            VAR3++;
        }
    }
    if (!VAR3)
        return;
    FUN2("");
    while (VAR3 > 0)
    {
        if (FUN3(VAR2, &VAR6) < 0)
            break;
        VAR8 = VAR2->VAR12[VAR6.VAR17];
        if (VAR8->VAR13.VAR14 == VAR15 && VAR8->VAR13.VAR16 == 0)
        {
            FUN4(&VAR8->VAR13.VAR18);
            VAR10 = VAR6.VAR19;
            while (VAR10 < VAR6.VAR19 + VAR6.VAR5 - 4)
            {
                if (VAR10[0] == 0x00 && VAR10[1] == 0x00 && VAR10[2] == 0x01 && VAR10[3] == 0xb6)
                {
                    VAR5 = VAR10 - VAR6.VAR19;
                    VAR8->VAR13.VAR18 = FUN5(VAR5);
                    VAR8->VAR13.VAR16 = VAR5;
                    memcpy(VAR8->VAR13.VAR18, VAR6.VAR19, VAR5);
                    break;
                }
                VAR10++;
            }
            VAR3--;
        }
        FUN6(&VAR6);
    }
}