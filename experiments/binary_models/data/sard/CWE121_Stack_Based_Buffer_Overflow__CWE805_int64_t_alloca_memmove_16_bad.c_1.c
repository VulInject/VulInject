#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
    while(1)
    {
        VAR3 = VAR4;
        break;
    }
    {
        int64_t VAR6[100] = {0}; 
        memmove(VAR3, VAR6, 100*sizeof(VAR2));
        FUN3(VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}