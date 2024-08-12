#VAR1 ""
void FUN1(void * VAR2)
{
    FUN2((VAR3 *)VAR2);
}
void FUN3()
{
    void * VAR2;
    void (*VAR4) (void *) = VAR5;
    twoIntsStruct VAR6;
    int VAR7 = 100;
    VAR6.VAR8 = 0;
    VAR6.VAR9 = 0;
    VAR2 = &VAR7;
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}