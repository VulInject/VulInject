#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    goto VAR3;
VAR3:
    fscanf(stdin, "", &VAR2);
    goto VAR4;
VAR4:
    if(VAR2 > 0) 
    {
        int VAR5 = VAR2 * 2;
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}