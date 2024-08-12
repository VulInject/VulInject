#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
#define SLEEP VAR5
#VAR1 <VAR6.VAR4>
#define SLEEP VAR7
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    while(1)
    {
        {
            char VAR8[VAR9] = "";
            if (fgets(VAR8, VAR9, stdin) != NULL)
            {
                VAR2 = FUN3(VAR8);
            }
            else
            {
            }
        }
        break;
    }
    while(1)
    {
        FUN4(VAR2);
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}