#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        FUN2(getenv(""));
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}