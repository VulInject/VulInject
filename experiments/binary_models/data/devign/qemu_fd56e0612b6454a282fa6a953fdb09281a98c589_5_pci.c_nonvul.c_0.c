static VAR1 FUN1(VAR2 *VAR3)
{
    VAR2 *VAR4;
    PCIReqIDCache VAR5 = {
        .VAR3 = VAR3,
        .VAR6 = VAR7,
    };
    while (!FUN2(FUN3(VAR3)))
    {
        VAR4 = FUN3(VAR3)->VAR8;
        if (FUN4(VAR4))
        {
            if (FUN5(VAR4) == VAR9)
            {
                VAR5.VAR6 = VAR10;
                VAR5.VAR3 = VAR3;
            }
        }
        else
        {
            VAR5.VAR6 = VAR7;
            VAR5.VAR3 = VAR4;
        }
        VAR3 = VAR4;
    }
    return VAR5;
}