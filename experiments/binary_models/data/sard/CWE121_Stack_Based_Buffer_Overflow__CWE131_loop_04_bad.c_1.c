#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    int * VAR4;
    VAR4 = NULL;
    if(VAR2)
    {
        VAR4 = (int *)FUN2(10);
    }
    {
        int VAR5[10] = {0};
        size_t VAR6;
        for (VAR6 = 0; VAR6 < 10; VAR6++)
        {
            VAR4[VAR6] = VAR5[VAR6];
        }
        FUN3(VAR4[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}