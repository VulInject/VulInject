#VAR1 ""
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
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    if(FUN1())
    {
        VAR2 = VAR3;
    }
    {
        int VAR5[100] = {0}; 
        {
            size_t VAR6;
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR2[VAR6] = VAR5[VAR6];
            }
            FUN4(VAR2[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}