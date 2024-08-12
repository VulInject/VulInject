#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL; 
    VAR4 = (long *)realloc(VAR4, 1*sizeof(long));
    if(FUN2())
    {
        VAR4[0] = 5L;
        FUN3(VAR4[0]);
        free(VAR4);
    }
    else
    {
        if (VAR4 != NULL)
        {
            VAR4[0] = 5L;
            FUN3(VAR4[0]);
            free(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}