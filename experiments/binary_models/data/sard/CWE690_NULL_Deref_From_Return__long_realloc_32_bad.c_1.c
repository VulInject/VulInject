#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    long * *VAR5 = &VAR4;
    long * *VAR6 = &VAR4;
    VAR4 = NULL; 
    {
        long * VAR4 = *VAR5;
        VAR4 = (long *)realloc(VAR4, 1*sizeof(long));
        *VAR5 = VAR4;
    }
    {
        long * VAR4 = *VAR6;
        VAR4[0] = 5L;
        FUN2(VAR4[0]);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}