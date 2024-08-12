#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    if(FUN2())
    {
        VAR2 = (char)FUN3();
    }
    if(FUN2())
    {
        {
            char VAR3 = VAR2 + 1;
            FUN4(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}