#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
void FUN2()
{
    goto VAR6;
VAR6:
    {
        HWINSTA VAR7;
        char * VAR8 = "";
        VAR7 = FUN3(
                          VAR8,
                          0,
                          VAR9,
                          NULL);
        if (VAR7 == NULL)
        {
        }
        else
        {
            FUN4(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}