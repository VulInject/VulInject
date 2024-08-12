static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    BC_STATUS VAR5;
    BC_DTS_STATUS VAR6 = {
        0,
    };
    CopyRet VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    HANDLE VAR11 = VAR9->VAR11;
    int VAR12 = 0;
    FUN2(VAR2, VAR13, "");
    do
    {
        VAR5 = FUN3(VAR11, &VAR6);
        if (VAR5 != VAR14)
        {
            FUN2(VAR2, VAR15, "");
            return -1;
        }
        if (VAR6.VAR16 == 0)
        {
            FUN2(VAR2, VAR17, "");
            VAR12 = 0;
            VAR7 = VAR18;
            break;
        }
        VAR7 = FUN4(VAR2, VAR4, &VAR12);
    } while (VAR7 == VAR19);
    if (VAR7 == VAR20)
    {
        return -1;
    }
    else if (VAR12 == 0)
    {
        return VAR9->VAR21 ? VAR22 : FUN5(VAR23);
    }
    else
    {
        return 0;
    }
}