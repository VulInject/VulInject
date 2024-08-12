#VAR1 ""
void FUN1(int64_t VAR2)
{
    if(VAR2 > 0) 
    {
        int64_t VAR3 = VAR2 * 2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    int64_t VAR2;
    void (*VAR4) (VAR5) = VAR6;
    VAR2 = 0LL;
    VAR2 = VAR7;
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}