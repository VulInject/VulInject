#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
#VAR1 <VAR3.VAR4>
#define SLEEP VAR5
#VAR1 <VAR6.VAR4>
#define SLEEP VAR7
static const int VAR8 = 5;
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    if(VAR8==5)
    {
        {
            char VAR9[VAR10] = "";
            if (fgets(VAR9, VAR10, stdin) != NULL)
            {
                VAR2 = FUN3(VAR9);
            }
            else
            {
            }
        }
    }
    if(VAR8==5)
    {
        FUN4(VAR2);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}