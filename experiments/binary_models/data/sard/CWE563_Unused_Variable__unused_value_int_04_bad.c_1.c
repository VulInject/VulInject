#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    int VAR6;
    if(VAR4)
    {
        VAR6 = 5;
    }
    if(VAR4)
    {
        VAR6 = 10;
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}