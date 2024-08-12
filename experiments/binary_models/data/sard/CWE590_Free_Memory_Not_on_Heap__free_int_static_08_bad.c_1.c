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
        {
            int VAR5[100];
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
    FUN3();
    return 0;
}