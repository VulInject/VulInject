#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR5[100] = "";
            char * VAR6 = VAR5;
            FUN3(VAR6,100-strlen(VAR4)-1, "", VAR4);
        }
    }
    else
    {
        {
            char VAR5[100] = "";
            char * VAR6 = VAR5;
            if (FUN3(VAR6,100-strlen(VAR4)-1, "", VAR4) < 0)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}