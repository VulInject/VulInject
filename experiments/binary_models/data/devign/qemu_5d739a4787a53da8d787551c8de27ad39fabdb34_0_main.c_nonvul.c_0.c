static void FUN1(uint64_t VAR1)
{
    struct subchannel_id VAR2 = {.VAR3 = 1};
    struct schib VAR4;
    int VAR5;
    int VAR6;
    bool VAR7 = false;
    bool VAR8 = false;
    uint16_t VAR9 = -1;
    if (VAR1 != -1)
    {
        VAR8 = true;
        VAR9 = VAR1 & 0xffff;
        FUN2("", VAR9);
        VAR2.VAR10 = (VAR1 >> 16) & 0x3;
        if (VAR2.VAR10 != 0)
        {
            FUN2("", VAR2.VAR10);
            if (FUN3() != 0)
            {
                FUN4("");
            }
        }
    }
    for (VAR5 = 0; VAR5 < 0x10000; VAR5++)
    {
        VAR2.VAR11 = VAR5;
        VAR6 = FUN5(VAR2, &VAR4);
        if (VAR6 == 3)
        {
            break;
        }
        if (VAR4.VAR12.VAR13)
        {
            if (!VAR8 || (VAR4.VAR12.VAR14 == VAR9))
            {
                if (FUN6(VAR2))
                {
                    VAR7 = true;
                    break;
                }
            }
        }
    }
    if (!VAR7)
    {
        FUN4("");
    }
    FUN7(VAR2);
}