#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    VAR4 * VAR5;
    VAR4 * VAR6 = (VAR4 *)FUN2(50*sizeof(VAR4));
    VAR4 * VAR7 = (VAR4 *)FUN2(100*sizeof(VAR4));
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
            FUN3(VAR5[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}