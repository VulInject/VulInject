#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    goto VAR5;
VAR5:
    {
        char VAR6[100] = "";
        char * VAR7 = VAR6;
        sscanf(VAR4, "", VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}