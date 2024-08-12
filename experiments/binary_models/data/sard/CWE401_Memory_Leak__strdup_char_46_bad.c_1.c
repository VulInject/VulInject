#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    if(FUN2())
    {
        {
            char VAR5[] = "";
            VAR4 = strdup(VAR5);
            FUN3(VAR4);
        }
    }
    if(FUN2())
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}