#VAR1 ""
#VAR1 <VAR2.VAR3>
static VAR4 FUN1(HANDLE VAR5)
{
    VAR5 = FUN2("",
                      (VAR6|VAR7),
                      0,
                      NULL,
                      VAR8,
                      VAR9,
                      NULL);
    return VAR5;
}
void FUN3()
{
    HANDLE VAR5;
    VAR5 = VAR10;
    VAR5 = FUN1(VAR5);
    if (VAR5 != VAR10)
    {
        fclose((VAR11 *)VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}