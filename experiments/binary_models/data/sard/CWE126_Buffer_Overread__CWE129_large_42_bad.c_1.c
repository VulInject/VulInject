#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = 10;
    return VAR2;
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        int VAR3[10] = { 0 };
        if (VAR2 >= 0)
        {
            FUN3(VAR3[VAR2]);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}