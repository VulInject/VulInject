#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    VAR3 * VAR4;
    int64_t VAR5[50];
    int64_t VAR6[100];
    if(VAR2==5)
    {
        VAR4 = VAR5;
    }
    {
        int64_t VAR7[100] = {0}; 
        memcpy(VAR4, VAR7, 100*sizeof(VAR3));
        FUN2(VAR4[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}