#VAR1 ""
void FUN1()
{
    if(5==5)
    {
        {
            int VAR2 = 1;
            FUN2(VAR2);
            VAR2 = VAR2;
            FUN2(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}