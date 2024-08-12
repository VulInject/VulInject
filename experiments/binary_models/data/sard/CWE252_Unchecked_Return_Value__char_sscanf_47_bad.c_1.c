#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR5[100] = "";
            char * VAR6 = VAR5;
            sscanf(VAR4, "", VAR6);
        }
    }
    else
    {
        {
            char VAR5[100] = "";
            char * VAR6 = VAR5;
            if (sscanf(VAR4, "", VAR6) == VAR7)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}