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
#define ACCESS VAR11
#define W_OK 02
#define ACCESS VAR12
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR13[100] = "";
            int VAR14 = -1;
            if (fgets(VAR13, 100, stdin) == NULL)
            {
                VAR13[0] = '';
            }
            if (strlen(VAR13) > 0)
            {
                VAR13[strlen(VAR13)-1] = ''; 
            }
            if (FUN3(VAR13, VAR15) == -1)
            {
                FUN4(1);
            }
            VAR14  = FUN5(VAR13, VAR16);
            if (VAR14 == -1)
            {
                FUN4(1);
            }
            if (FUN6(VAR14, VAR9, strlen(VAR9)) == -1)
            {
                FUN4(1);
            }
            if (VAR14 != -1)
            {
                FUN7(VAR14);
            }
        }
    }
    else
    {
        {
            char VAR13[100] = "";
            int VAR14 = -1;
            if (fgets(VAR13, 100, stdin) == NULL)
            {
                VAR13[0] = '';
            }
            if (strlen(VAR13) > 0)
            {
                VAR13[strlen(VAR13)-1] = ''; 
            }
            VAR14  = FUN5(VAR13, VAR16);
            if (VAR14 == -1)
            {
                FUN4(1);
            }
            if (FUN6(VAR14, VAR10, strlen(VAR10)) == -1)
            {
                FUN4(1);
            }
            if (VAR14 != -1)
            {
                FUN7(VAR14);
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