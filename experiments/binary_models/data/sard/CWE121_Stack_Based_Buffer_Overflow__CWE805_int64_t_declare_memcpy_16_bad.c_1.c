#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    while(1)
    {
        VAR3 = VAR4;
        break;
    }
    {
        int64_t VAR6[100] = {0}; 
        memcpy(VAR3, VAR6, 100*sizeof(VAR2));
        FUN2(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}