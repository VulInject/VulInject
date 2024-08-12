#VAR1 ""
void FUN1()
{
    if(VAR2)
    {
        {
            int VAR3 = 1;
            FUN2(VAR3);
            VAR3 = VAR3;
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