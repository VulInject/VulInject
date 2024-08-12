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
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR11[100] = "";
            struct STAT VAR12;
            int VAR13 = -1;
            if (fgets(VAR11, 100, stdin) == NULL)
            {
                VAR11[0] = '';
            }
            if (strlen(VAR11) > 0)
            {
                VAR11[strlen(VAR11)-1] = ''; 
            }
            if (FUN3(VAR11, &VAR12) == -1)
            {
                FUN4(1);
            }
            VAR13  = FUN5(VAR11, VAR14);
            if (VAR13 == -1)
            {
                FUN4(1);
            }
            if (FUN6(VAR13, VAR9, strlen(VAR9)) == -1)
            {
                FUN4(1);
            }
            if (VAR13 != -1)
            {
                FUN7(VAR13);
            }
        }
    }
    else
    {
        {
            char VAR11[100] = "";
            int VAR13 = -1;
            if (fgets(VAR11, 100, stdin) == NULL)
            {
                VAR11[0] = '';
            }
            if (strlen(VAR11) > 0)
            {
                VAR11[strlen(VAR11)-1] = ''; 
            }
            VAR13  = FUN5(VAR11, VAR14);
            if (VAR13 == -1)
            {
                FUN4(1);
            }
            if (FUN6(VAR13, VAR10, strlen(VAR10)) == -1)
            {
                FUN4(1);
            }
            if (VAR13 != -1)
            {
                FUN7(VAR13);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN1();
    return 0;
}