#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(5==5)
    {
        {
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            fgets(VAR5, 100, stdin);
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