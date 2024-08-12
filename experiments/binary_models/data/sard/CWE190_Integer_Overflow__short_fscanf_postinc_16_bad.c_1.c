#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    while(1)
    {
        fscanf (stdin, "", &VAR2);
        break;
    }
    while(1)
    {
        {
            VAR2++;
            short VAR3 = VAR2;
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