#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    if(VAR6)
    {
        VAR3 = VAR4;
    }
    {
        int64_t VAR7[100] = {0}; 
        memcpy(VAR3, VAR7, 100*sizeof(VAR2));
        FUN2(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}