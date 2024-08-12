#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    if(FUN2())
    {
        VAR3 = VAR4;
    }
    else
    {
        VAR3 = VAR5;
    }
    {
        int64_t VAR6[100] = {0}; 
        memcpy(VAR3, VAR6, 100*sizeof(VAR2));
        FUN3(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}