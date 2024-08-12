#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = 0;
    if(VAR2==5)
    {
        fscanf(stdin, "", &VAR3);
    }
    if(VAR2==5)
    {
        {
            --VAR3;
            int VAR4 = VAR3;
            FUN2(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}