#VAR1 ""
void FUN1()
{
    if(VAR2==5)
    {
        {
            char VAR3[100] = "";
            char * VAR4 = VAR3;
            if (fgets(VAR4, 100, stdin) == NULL)
            {
            }
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