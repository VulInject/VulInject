#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    while(1)
    {
        VAR2 = (char)FUN2();
        break;
    }
    while(1)
    {
        if(VAR2 < 0) 
        {
            char VAR3 = VAR2 * 2;
            FUN3(VAR3);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}