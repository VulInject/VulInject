#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(int * VAR4)
{
    FUN2(VAR4[0]);
    free(VAR4);
}
void FUN3()
{
    int * VAR4;
    VAR4 = NULL; 
    {
        int * VAR5 = (int *)FUN4(100*sizeof(int));
        {
            size_t VAR6;
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR5[VAR6] = 5;
            }
        }
        VAR4 = VAR5;
    }
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}