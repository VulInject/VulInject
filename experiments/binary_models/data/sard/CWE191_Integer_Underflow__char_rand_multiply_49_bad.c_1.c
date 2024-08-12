#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    if(VAR3==5)
    {
        VAR2 = (char)FUN2();
    }
    if(VAR3==5)
    {
        if(VAR2 < 0) 
        {
            char VAR4 = VAR2 * 2;
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