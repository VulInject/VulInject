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
    void (*VAR5) (int *) = VAR6;
    VAR4 = NULL; 
    {
        int * VAR7 = (int *)FUN4(100*sizeof(int));
        {
            size_t VAR8;
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR7[VAR8] = 5;
            }
        }
        VAR4 = VAR7;
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}