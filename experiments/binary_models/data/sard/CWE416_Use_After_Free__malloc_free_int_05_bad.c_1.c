#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    int * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        VAR6 = (int *)malloc(100*sizeof(int));
        if (VAR6 == NULL) {FUN2(-1);}
        {
            size_t VAR7;
            for(VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR6[VAR7] = 5;
            }
        }
        free(VAR6);
    }
    if(VAR4)
    {
        FUN3(VAR6[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}