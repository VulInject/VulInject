#VAR1 ""
#define STAT VAR2
#define OPEN _open
#define WRITE VAR3
#define O_RDWR VAR4
#define CLOSE VAR5
#VAR1 <VAR6.VAR7>
#define STAT VAR8
#define OPEN open
#define WRITE write
#define CLOSE close
#define VAR9 ""
#define VAR10 ""
static const int VAR11 = 1; 
static const int VAR12 = 0; 
void FUN1()
{
    if(VAR11)
    {
        {
            char VAR13[100] = "";
            struct STAT VAR14;
            int VAR15 = -1;
            if (fgets(VAR13, 100, stdin) == NULL)
            {
                VAR13[0] = '';
            }
            if (strlen(VAR13) > 0)
            {
                VAR13[strlen(VAR13)-1] = ''; 
            }
            if (FUN2(VAR13, &VAR14) == -1)
            {
                FUN3(1);
            }
            VAR15  = FUN4(VAR13, VAR16);
            if (VAR15 == -1)
            {
                FUN3(1);
            }
            if (FUN5(VAR15, VAR9, strlen(VAR9)) == -1)
            {
                FUN3(1);
            }
            if (VAR15 != -1)
            {
                FUN6(VAR15);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN1();
    return 0;
}