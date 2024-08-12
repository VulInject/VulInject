#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(VAR2)
    {
        VAR4 = VAR5;
    }
    if(VAR2)
    {
        if(VAR4 > 0) 
        {
            short VAR6 = VAR4 * 2;
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}