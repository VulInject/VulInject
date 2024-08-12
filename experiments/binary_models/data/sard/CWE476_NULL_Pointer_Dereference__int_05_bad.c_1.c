#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    int * VAR6;
    if(VAR4)
    {
        VAR6 = NULL;
    }
    if(VAR4)
    {
        FUN2(*VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}