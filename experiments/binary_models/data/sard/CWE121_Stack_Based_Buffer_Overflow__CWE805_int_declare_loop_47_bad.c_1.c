#VAR1 ""
void FUN1()
{
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    if(FUN2())
    {
        VAR2 = VAR3;
    }
    else
    {
        VAR2 = VAR4;
    }
    {
        int VAR5[100] = {0}; 
        {
            size_t VAR6;
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR2[VAR6] = VAR5[VAR6];
            }
            FUN3(VAR2[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}