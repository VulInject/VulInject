#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = (int *)malloc(10*sizeof(int));
    if (VAR2 == NULL) {FUN2(-1);}
    if(FUN3())
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<(10/2); VAR3++)
            {
                VAR2[VAR3] = VAR3;
            }
        }
    }
    else
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                VAR2[VAR3] = VAR3;
            }
        }
    }
    if(FUN3())
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                FUN4(VAR2[VAR3]);
            }
        }
    }
    else
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                VAR2[VAR3] = VAR3;
            }
        }
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                FUN4(VAR2[VAR3]);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}