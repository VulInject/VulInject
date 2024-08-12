#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    short VAR4;
    VAR4 = -1;
    if(VAR2)
    {
        VAR4 = (short)FUN2();
    }
    {
        char VAR5 = (char)VAR4;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}