#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(VAR4)
    {
        {
            char VAR5[100] = "";
            char * VAR6 = VAR5;
            if (fgets(VAR6, 100, stdin) < 0)
            {
                FUN2(1);
            }
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}