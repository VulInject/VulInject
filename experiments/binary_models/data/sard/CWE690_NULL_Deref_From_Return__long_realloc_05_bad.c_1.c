#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    long * VAR6;
    VAR6 = NULL; 
    VAR6 = (long *)realloc(VAR6, 1*sizeof(long));
    if(VAR4)
    {
        VAR6[0] = 5L;
        FUN2(VAR6[0]);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}