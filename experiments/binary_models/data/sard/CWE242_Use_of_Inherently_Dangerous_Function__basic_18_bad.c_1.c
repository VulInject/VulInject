#VAR1 ""
#define DEST_SIZE 10
void FUN1()
{
    goto VAR2;
VAR2:
    {
        char VAR3[VAR4];
        char *VAR5;
        VAR5 = gets(VAR3);
        if (VAR5 == NULL)
        {
            FUN2(1);
        }
        VAR3[VAR4-1] = '';
        FUN3(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}