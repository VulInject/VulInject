#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = VAR3 + 5;
    {
        int VAR4 = VAR2;
        int VAR2 = VAR4;
        {
            char VAR5 = (char)VAR2;
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}