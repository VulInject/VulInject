#VAR1 ""
void FUN1(int VAR2)
{
    {
        int VAR3;
        int VAR4[10] = { 0 };
        if (VAR2 < 10)
        {
            VAR4[VAR2] = 1;
            for(VAR3 = 0; VAR3 < 10; VAR3++)
            {
                FUN2(VAR4[VAR3]);
            }
        }
        else
        {
        }
    }
}
void FUN3()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN4();
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}