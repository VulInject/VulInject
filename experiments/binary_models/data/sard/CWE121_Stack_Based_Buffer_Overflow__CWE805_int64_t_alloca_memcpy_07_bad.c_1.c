#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    VAR3 * VAR4;
    VAR3 * VAR5 = (VAR3 *)FUN2(50*sizeof(VAR3));
    VAR3 * VAR6 = (VAR3 *)FUN2(100*sizeof(VAR3));
    if(VAR2==5)
    {
        VAR4 = VAR5;
    }
    {
        int64_t VAR7[100] = {0}; 
        memcpy(VAR4, VAR7, 100*sizeof(VAR3));
        FUN3(VAR4[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}