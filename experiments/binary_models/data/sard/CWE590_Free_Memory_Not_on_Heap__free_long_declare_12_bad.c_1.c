#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long * VAR4;
    VAR4 = NULL; 
    if(FUN2())
    {
        {
            long VAR5[100];
            {
                size_t VAR6;
                for (VAR6 = 0; VAR6 < 100; VAR6++)
                {
                    VAR5[VAR6] = 5L;
                }
            }
            VAR4 = VAR5;
        }
    }
    else
    {
        {
            long * VAR5 = (long *)malloc(100*sizeof(long));
            if (VAR5 == NULL)
            {
                FUN3(1);
            }
            {
                size_t VAR6;
                for (VAR6 = 0; VAR6 < 100; VAR6++)
                {
                    VAR5[VAR6] = 5L;
                }
            }
            VAR4 = VAR5;
        }
    }
    FUN4(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}