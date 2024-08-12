#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
#define SNPRINTF _snprintf
#define SNPRINTF snprintf
void FUN1()
{
    if(VAR5==5)
    {
        {
            char VAR6[100] = "";
            char * VAR7 = VAR6;
            FUN2(VAR7,100-strlen(VAR4)-1, "", VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}