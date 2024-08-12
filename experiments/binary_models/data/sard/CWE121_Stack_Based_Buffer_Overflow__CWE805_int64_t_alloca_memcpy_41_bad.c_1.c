#VAR1 ""
void FUN1(VAR2 * VAR3)
{
    {
        int64_t VAR4[100] = {0}; 
        memcpy(VAR3, VAR4, 100*sizeof(VAR2));
        FUN2(VAR3[0]);
    }
}
void FUN3()
{
    VAR2 * VAR3;
    VAR2 * VAR5 = (VAR2 *)FUN4(50*sizeof(VAR2));
    VAR2 * VAR6 = (VAR2 *)FUN4(100*sizeof(VAR2));
    VAR3 = VAR5;
    FUN1(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}