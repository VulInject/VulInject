#VAR1 ""
void FUN1(void * VAR2)
{
    FUN2((VAR3 *)VAR2);
}
void FUN3()
{
    void * VAR2;
    twoIntsStruct VAR4;
    int VAR5 = 100;
    VAR4.VAR6 = 0;
    VAR4.VAR7 = 0;
    VAR2 = &VAR5;
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}