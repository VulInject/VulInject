#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    goto VAR5;
VAR5:
    {
        char VAR6[] = "";
        VAR4 = strdup(VAR6);
        FUN2(VAR4);
    }
    goto VAR7;
VAR7:
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}