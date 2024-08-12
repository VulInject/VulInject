#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    VAR4 * VAR5;
    int64_t VAR6[50];
    int64_t VAR7[100];
    if(VAR2)
    {
        VAR5 = VAR6;
    }
    {
        int64_t VAR8[100] = {0}; 
        {
            size_t VAR9;
            for (VAR9 = 0; VAR9 < 100; VAR9++)
            {
                VAR5[VAR9] = VAR8[VAR9];
            }
            FUN2(VAR5[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}