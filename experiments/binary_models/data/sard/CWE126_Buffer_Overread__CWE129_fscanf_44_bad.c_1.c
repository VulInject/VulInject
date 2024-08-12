#VAR1 ""
void FUN1(int VAR2)
{
    {
        int VAR3[10] = { 0 };
        if (VAR2 >= 0)
        {
            FUN2(VAR3[VAR2]);
        }
        else
        {
        }
    }
}
void FUN3()
{
    int VAR2;
    void (*VAR4) (int) = VAR5;
    VAR2 = -1;
    fscanf(stdin, "", &VAR2);
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}