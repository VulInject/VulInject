#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    while(1)
    {
        fscanf(stdin, "", &VAR2);
        break;
    }
    while(1)
    {
        {
            int VAR3 = VAR2 + 1;
            FUN2(VAR3);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}