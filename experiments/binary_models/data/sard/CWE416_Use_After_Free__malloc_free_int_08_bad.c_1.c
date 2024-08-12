#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    int * VAR4;
    VAR4 = NULL;
    if(FUN1())
    {
        VAR4 = (int *)malloc(100*sizeof(int));
        if (VAR4 == NULL) {FUN4(-1);}
        {
            size_t VAR5;
            for(VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR4[VAR5] = 5;
            }
        }
        free(VAR4);
    }
    if(FUN1())
    {
        FUN5(VAR4[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}