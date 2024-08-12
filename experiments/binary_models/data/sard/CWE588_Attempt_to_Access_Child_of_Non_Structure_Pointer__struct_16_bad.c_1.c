#VAR1 ""
void FUN1()
{
    void * VAR2;
    twoIntsStruct VAR3;
    int VAR4 = 100;
    VAR3.VAR5 = 0;
    VAR3.VAR6 = 0;
    while(1)
    {
        VAR2 = &VAR4;
        break;
    }
    FUN2((VAR7 *)VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}