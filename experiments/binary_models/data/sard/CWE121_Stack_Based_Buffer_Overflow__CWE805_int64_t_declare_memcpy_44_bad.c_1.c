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
    void (*VAR5) (VAR2 *) = VAR6;
    int64_t VAR7[50];
    int64_t VAR8[100];
    VAR3 = VAR7;
    FUN4(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}