#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    if(VAR3)
    {
        fscanf(stdin, "", &VAR2);
    }
    if(VAR3)
    {
        {
            int VAR4 = VAR2 + 1;
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