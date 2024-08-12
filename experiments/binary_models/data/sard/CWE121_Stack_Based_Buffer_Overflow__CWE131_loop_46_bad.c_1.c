#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = NULL;
    if(FUN2())
    {
        VAR2 = (int *)FUN3(10);
    }
    {
        int VAR3[10] = {0};
        size_t VAR4;
        for (VAR4 = 0; VAR4 < 10; VAR4++)
        {
            VAR2[VAR4] = VAR3[VAR4];
        }
        FUN4(VAR2[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}