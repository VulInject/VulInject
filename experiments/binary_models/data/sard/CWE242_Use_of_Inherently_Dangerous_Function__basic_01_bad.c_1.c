#VAR1 ""
#define DEST_SIZE 10
void FUN1()
{
    {
        char VAR2[VAR3];
        char *VAR4;
        VAR4 = gets(VAR2);
        if (VAR4 == NULL)
        {
            FUN2(1);
        }
        VAR2[VAR3-1] = '';
        FUN3(VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}