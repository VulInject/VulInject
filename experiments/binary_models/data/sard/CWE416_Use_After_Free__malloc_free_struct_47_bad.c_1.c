#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL;
    if(FUN2())
    {
        VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
        if (VAR5 == NULL) {FUN3(-1);}
        {
            size_t VAR6;
            for(VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR5[VAR6].VAR7 = 1;
                VAR5[VAR6].VAR8 = 2;
            }
        }
        free(VAR5);
    }
    else
    {
        VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
        if (VAR5 == NULL) {FUN3(-1);}
        {
            size_t VAR6;
            for(VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR5[VAR6].VAR7 = 1;
                VAR5[VAR6].VAR8 = 2;
            }
        }
    }
    if(FUN2())
    {
        FUN4(&VAR5[0]);
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