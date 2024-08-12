#VAR1 ""
#define DEST_SIZE 100 
#define VAR2 ""
void FUN1()
{
    goto VAR3;
VAR3:
    {
        char VAR4[VAR5];
        sprintf(VAR4, "", VAR2);
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}