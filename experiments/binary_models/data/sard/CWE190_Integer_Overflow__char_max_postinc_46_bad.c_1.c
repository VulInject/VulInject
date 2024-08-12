#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    if(FUN2())
    {
        VAR2 = VAR3;
    }
    if(FUN2())
    {
        {
            VAR2++;
            char VAR4 = VAR2;
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}