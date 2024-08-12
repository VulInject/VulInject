#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    if(5==5)
    {
        VAR2 = VAR3;
    }
    if(5==5)
    {
        {
            VAR2++;
            int VAR4 = VAR2;
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