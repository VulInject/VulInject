#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            if (fgets(VAR5, 100, stdin) == NULL)
            {
            }
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