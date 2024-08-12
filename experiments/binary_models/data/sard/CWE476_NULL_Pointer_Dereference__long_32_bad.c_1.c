#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    long * *VAR5 = &VAR4;
    long * *VAR6 = &VAR4;
    {
        long * VAR4 = *VAR5;
        VAR4 = NULL;
        *VAR5 = VAR4;
    }
    {
        long * VAR4 = *VAR6;
        FUN2(*VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}