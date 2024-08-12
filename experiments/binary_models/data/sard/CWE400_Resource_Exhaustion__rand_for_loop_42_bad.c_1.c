#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = FUN2();
    return VAR2;
}
void FUN3()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        size_t VAR3 = 0;
        for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}