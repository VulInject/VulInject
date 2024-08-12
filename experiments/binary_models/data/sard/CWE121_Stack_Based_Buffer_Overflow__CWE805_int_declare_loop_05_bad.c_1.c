#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    int * VAR4;
    int VAR5[50];
    int VAR6[100];
    if(VAR2)
    {
        VAR4 = VAR5;
    }
    {
        int VAR7[100] = {0}; 
        {
            size_t VAR8;
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR4[VAR8] = VAR7[VAR8];
            }
            FUN2(VAR4[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}