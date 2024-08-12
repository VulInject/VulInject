static void FUN1(void)
{
    test_data VAR1;
    memset(&VAR1, 0, sizeof(VAR1));
    VAR1.VAR2 = VAR3;
    VAR1.VAR4 = "";
    FUN2(""
                  ""
                  "",
                  &VAR1);
    FUN3(&VAR1);
}