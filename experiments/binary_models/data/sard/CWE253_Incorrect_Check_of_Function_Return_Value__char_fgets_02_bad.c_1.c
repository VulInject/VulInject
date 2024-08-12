#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(1)
    {
        {
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            if (fgets(VAR5, 100, stdin) < 0)
            {
                FUN2(1);
            }
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}