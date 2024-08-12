#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    void * VAR4;
    VAR4 = NULL;
    if(VAR2)
    {
        {
            short VAR5 = 8;
            VAR4 = &VAR5;
        }
    }
    FUN2(*((int*)VAR4));
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}