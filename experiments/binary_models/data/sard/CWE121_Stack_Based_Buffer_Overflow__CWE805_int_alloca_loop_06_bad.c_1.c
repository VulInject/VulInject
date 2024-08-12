#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int * VAR3;
    int * VAR4 = (int *)FUN2(50*sizeof(int));
    int * VAR5 = (int *)FUN2(100*sizeof(int));
    if(VAR2==5)
    {
        VAR3 = VAR4;
    }
    {
        int VAR6[100] = {0}; 
        {
            size_t VAR7;
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR3[VAR7] = VAR6[VAR7];
            }
            FUN3(VAR3[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}