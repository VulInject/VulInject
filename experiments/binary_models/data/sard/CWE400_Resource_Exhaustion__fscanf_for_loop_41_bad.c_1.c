#VAR1 ""
void FUN1(int VAR2)
{
    {
        size_t VAR3 = 0;
        for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
        {
        }
    }
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    fscanf(stdin, "", &VAR2);
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}