#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    if(VAR5)
    {
        {
            char VAR7[100] = "";
            char * VAR8 = VAR7;
            if (FUN2(VAR8,100-strlen(VAR4)-1, "", VAR4) == 0)
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