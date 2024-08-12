static void FUN1(uint64_t VAR1)
{
    struct schib VAR2;
    int VAR3;
    bool VAR4 = false;
    uint16_t VAR5;
    FUN2();
    if (VAR1 != -1)
    {
        VAR5 = VAR1 & 0xffff;
        FUN3("", VAR5);
        VAR6.VAR3 = (VAR1 >> 16) & 0x3;
        FUN3("", VAR6.VAR3);
        VAR4 = FUN4(&VAR2, VAR5);
    }
    else
    {
        for (VAR3 = 0; VAR3 < 0x3; VAR3++)
        {
            VAR6.VAR3 = VAR3;
            VAR4 = FUN4(&VAR2, -1);
            if (VAR4)
            {
                break;
            }
        }
    }
    if (!VAR4)
    {
        FUN5("");
    }
    FUN6(VAR6);
    if (!FUN7())
    {
        FUN5("");
    }
}