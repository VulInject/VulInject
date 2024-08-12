#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    char VAR4;
    VAR4 = '';
    if(VAR2)
    {
        VAR4 = (char)FUN2();
    }
    if(VAR2)
    {
        if(VAR4 < 0) 
        {
            char VAR5 = VAR4 * 2;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}