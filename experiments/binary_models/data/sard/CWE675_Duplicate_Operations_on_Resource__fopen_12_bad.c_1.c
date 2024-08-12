#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL; 
    if(FUN2())
    {
        VAR3 = fopen("", "");
        fclose(VAR3);
    }
    else
    {
        VAR3 = fopen("", "");
    }
    if(FUN2())
    {
        fclose(VAR3);
    }
    else
    {
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}