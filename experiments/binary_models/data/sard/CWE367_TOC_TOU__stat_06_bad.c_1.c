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
static const int VAR11 = 5;
void FUN1()
{
    if(VAR11==5)
    {
        {
            char VAR12[100] = "";
            struct STAT VAR13;
            int VAR14 = -1;
            if (fgets(VAR12, 100, stdin) == NULL)
            {
                VAR12[0] = '';
            }
            if (strlen(VAR12) > 0)
            {
                VAR12[strlen(VAR12)-1] = ''; 
            }
            if (FUN2(VAR12, &VAR13) == -1)
            {
                FUN3(1);
            }
            VAR14  = FUN4(VAR12, VAR15);
            if (VAR14 == -1)
            {
                FUN3(1);
            }
            if (FUN5(VAR14, VAR9, strlen(VAR9)) == -1)
            {
                FUN3(1);
            }
            if (VAR14 != -1)
            {
                FUN6(VAR14);
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