#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    fscanf (stdin, "", &VAR2);
    {
        short VAR3 = VAR2;
        short VAR2 = VAR3;
        if(VAR2 > 0) 
        {
            short VAR4 = VAR2 * 2;
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