static int FUN1(VAR1 **VAR2, struct VAR3 *VAR4)
{
    struct ibv_port_attr VAR5;
    int VAR6, VAR7;
    struct VAR8 **VAR9 = FUN2(&VAR6);
    bool VAR10 = false;
    bool VAR11 = false;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR4 = FUN3(VAR9[VAR7]);
        if (FUN4(VAR4, 1, &VAR5))
        {
            FUN5(VAR4);
            FUN6(VAR2, "");
            if (VAR5.VAR12 == VAR13)
            {
                VAR11 = true;
            }
            else if (VAR5.VAR12 == VAR14)
            {
                VAR10 = true;
                FUN5(VAR4);
                if (VAR10)
                {
                    if (VAR11)
                    {
                        fprintf(VAR15, ""
                                        ""
                                        ""
                                        ""
                                        ""
                                        "");
                        FUN6(VAR2, ""
                                    ""
                                    "");
                        return -VAR16;
                        return 0;
                        if (FUN4(VAR4, 1, &VAR5))
                        {
                            FUN6(VAR2, "");
                            if (VAR5.VAR12 == VAR14)
                            {
                                FUN6(VAR2, ""
                                            "");
                                return -VAR16;
                                return 0;