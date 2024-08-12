#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int * VAR3;
    VAR3 = NULL;
    if(VAR2==5)
    {
        VAR3 = (int *)malloc(10);
        if (VAR3 == NULL) {FUN2(-1);}
    }
    {
        int VAR4[10] = {0};
        size_t VAR5;
        for (VAR5 = 0; VAR5 < 10; VAR5++)
        {
            VAR3[VAR5] = VAR4[VAR5];
        }
        FUN3(VAR3[0]);
        free(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}