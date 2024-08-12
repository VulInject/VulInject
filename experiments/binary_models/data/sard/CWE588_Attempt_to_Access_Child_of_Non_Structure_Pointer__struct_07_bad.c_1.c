#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    void * VAR3;
    twoIntsStruct VAR4;
    int VAR5 = 100;
    VAR4.VAR6 = 0;
    VAR4.VAR7 = 0;
    if(VAR2==5)
    {
        VAR3 = &VAR5;
    }
    FUN2((VAR8 *)VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}