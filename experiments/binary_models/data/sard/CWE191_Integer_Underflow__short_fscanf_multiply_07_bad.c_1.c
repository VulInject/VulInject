#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    short VAR3;
    VAR3 = 0;
    if(VAR2==5)
    {
        fscanf (stdin, "", &VAR3);
    }
    if(VAR2==5)
    {
        if(VAR3 < 0) 
        {
            short VAR4 = VAR3 * 2;
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