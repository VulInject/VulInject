#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(5==5)
    {
        fscanf (stdin, "", &VAR2);
    }
    if(5==5)
    {
        if(VAR2 < 0) 
        {
            short VAR3 = VAR2 * 2;
            FUN2(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}