#VAR1 ""
void FUN1()
{
    int * VAR2;
    int VAR3[50];
    int VAR4[100];
    while(1)
    {
        VAR2 = VAR3;
        break;
    }
    {
        int VAR5[100] = {0}; 
        {
            size_t VAR6;
            for (VAR6 = 0; VAR6 < 100; VAR6++)
            {
                VAR2[VAR6] = VAR5[VAR6];
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