#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    void * VAR4;
    twoIntsStruct VAR5;
    int VAR6 = 100;
    VAR5.VAR7 = 0;
    VAR5.VAR8 = 0;
    if(VAR2)
    {
        VAR4 = &VAR6;
    }
    FUN2((VAR9 *)VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}