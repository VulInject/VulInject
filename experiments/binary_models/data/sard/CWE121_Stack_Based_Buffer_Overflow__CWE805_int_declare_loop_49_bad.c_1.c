#VAR1 ""
void FUN1()
{
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    if(VAR5==5)
    {
        VAR2 = VAR3;
    }
    {
        int VAR6[100] = {0}; 
        {
            size_t VAR7;
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR2[VAR7] = VAR6[VAR7];
            }
            FUN2(VAR2[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}