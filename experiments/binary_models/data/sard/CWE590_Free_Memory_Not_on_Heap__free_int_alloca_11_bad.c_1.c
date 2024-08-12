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
    FUN4(VAR4[0]);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}