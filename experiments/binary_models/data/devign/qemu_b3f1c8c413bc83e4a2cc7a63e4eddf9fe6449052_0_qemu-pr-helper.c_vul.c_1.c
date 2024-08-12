static void FUN1(void)
{
    static struct VAR1 *VAR1;
    VAR1 = FUN2();
    FUN3(VAR1);
}