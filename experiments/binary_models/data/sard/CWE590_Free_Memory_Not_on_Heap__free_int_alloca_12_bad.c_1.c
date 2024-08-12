#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    int * VAR4;
    VAR4 = NULL; 
    if(FUN2())
    {
        {
            int * VAR5 = (int *)FUN3(100*sizeof(int));
            {
                size_t VAR6;
                for (VAR6 = 0; VAR6 < 100; VAR6++)
                {
                    VAR5[VAR6] = 5;
                }
            }
            VAR4 = VAR5;
        }
    }
    else
    {
        {
            int * VAR5 = (int *)malloc(100*sizeof(int));
            if (VAR5 == NULL)
            {
                FUN4(1);
            }
            {
                size_t VAR6;
                for (VAR6 = 0; VAR6 < 100; VAR6++)
                {
                    VAR5[VAR6] = 5;
                }
            }
            VAR4 = VAR5;
        }
    }
    FUN5(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}