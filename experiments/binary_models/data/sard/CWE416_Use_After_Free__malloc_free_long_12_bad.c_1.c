#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        VAR4 = (long *)malloc(100*sizeof(long));
        if (VAR4 == NULL) {FUN3(-1);}
        {
            size_t VAR5;
            for(VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR4[VAR5] = 5L;
            }
        }
        free(VAR4);
    }
    else
    {
        VAR4 = (long *)malloc(100*sizeof(long));
        if (VAR4 == NULL) {FUN3(-1);}
        {
            size_t VAR5;
            for(VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR4[VAR5] = 5L;
            }
        }
    }
    if(FUN2())
    {
        FUN4(VAR4[0]);
    }
    else
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}