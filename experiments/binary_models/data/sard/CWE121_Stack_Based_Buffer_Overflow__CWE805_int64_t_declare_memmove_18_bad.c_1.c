#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    int64_t VAR4[50];
    int64_t VAR5[100];
    goto VAR6;
VAR6:
    VAR3 = VAR4;
    {
        int64_t VAR6[100] = {0}; 
        memmove(VAR3, VAR6, 100*sizeof(VAR2));
        FUN2(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}