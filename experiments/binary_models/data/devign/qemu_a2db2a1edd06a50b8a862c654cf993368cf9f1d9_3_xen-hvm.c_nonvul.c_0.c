static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    evtchn_port_t VAR5;
    VAR5 = FUN2(VAR3->VAR6);
    if (VAR5 == VAR3->VAR7)
    {
        FUN3(VAR3->VAR8, VAR9 + FUN4(VAR10));
        return NULL;
    }
    if (VAR5 != -1)
    {
        for (VAR4 = 0; VAR4 < VAR11; VAR4++)
        {
            if (VAR3->VAR12[VAR4] == VAR5)
            {
                break;
            }
        }
        if (VAR4 == VAR11)
        {
            FUN5("");
        }
        FUN6(VAR3->VAR6, VAR5);
        VAR3->VAR13 = VAR4;
        return FUN7(VAR3, VAR4);
    }
    return NULL;
}